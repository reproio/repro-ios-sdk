(function() {
  var getAbsoluteOffsetFromBody, getOS, mask, prevSensitiveElementData, repro, sendMessageToSDK, sensitiveElements, timerForMasking, track, unmask, watch, scalesPageToFit, parseMetaContent;

  sensitiveElements = {};

  prevSensitiveElementData = {};

  timerForMasking = null;

  track = function(name, _props) {
    var data;
    if (typeof name !== 'string' || name === '' || ((typeof _props !== 'object') && _props !== undefined)) {
      return;
    }
    if (_props === null || _props === undefined) {
      _props = {};
    }
    data = {
      name: name,
      properties: _props
    };
    return sendMessageToSDK('repro://track?data=' + JSON.stringify(data));
  };

  watch = function() {
    var _e, _k, cur, data, offset, prev, fit;
    if (Object.keys(sensitiveElements).length === 0) {
      return;
    }
    data = [];
    fit = scalesPageToFit();
    for (_k in sensitiveElements) {
      _e = sensitiveElements[_k];
      offset = getAbsoluteOffsetFromBody(_e);
      cur = {
        x: offset.left,
        y: offset.top,
        w: _e.offsetWidth,
        h: _e.offsetHeight,
        key: _k,
        ww: document.documentElement.clientWidth,
        wh: document.documentElement.clientHeight,
        fixed: (window.getComputedStyle(_e, null).position === "fixed"),
        fit: fit
      };
      prev = prevSensitiveElementData[_k];
      if (prev !== void 0 && prev !== null) {
        if (cur.x === prev.x && cur.y === prev.y && cur.w === prev.w && cur.h === prev.h) {
          continue;
        }
      }
      data.push(cur);
      prevSensitiveElementData[_k] = cur;
    }
    if (Object.keys(data).length > 0) {
      return sendMessageToSDK('repro://mask?data=' + JSON.stringify(data));
    }
  };

  mask = function(key, el) {
    if (timerForMasking === null) {
      timerForMasking = setInterval(watch, 50);
    }
    if (typeof key !== 'string' || key === '' || el === null) {
      return;
    }
    return sensitiveElements[key] = el;
  };

  unmask = function(key) {
    var data;
    if (typeof key !== 'string' || key === '') {
      return;
    }
    delete sensitiveElements[key];
    delete prevSensitiveElementData[key];
    data = {
      key: key
    };
    return sendMessageToSDK('repro://unmask?data=' + JSON.stringify(data));
  };

  getAbsoluteOffsetFromBody = function(el) {
    var _x, _y;
    _x = 0;
    _y = 0;
    while (el && !isNaN(el.offsetLeft) && !isNaN(el.offsetTop)) {
      _x += el.offsetLeft + el.clientLeft;
      _y += el.offsetTop + el.clientTop;
      el = el.offsetParent;
    }
    return {
      top: _y,
      left: _x
    };
  };

  getOS = function() {
    var userAgent;
    userAgent = void 0;
    userAgent = navigator.userAgent || navigator.vendor || window.opera;
    if (userAgent.match(/iPad/i) || userAgent.match(/iPhone/i) || userAgent.match(/iPod/i)) {
      return "iOS";
    } else if (userAgent.match(/Android/i)) {
      return "Android";
    } else {
      return "unknown";
    }
  };

  sendMessageToSDK = function(url) {
    var bridge;
    bridge = document.createElement('iframe');
    bridge.setAttribute('style', 'display:none;');
    bridge.setAttribute('height', '0px');
    bridge.setAttribute('width', '0px');
    bridge.setAttribute('frameborder', '0');
    bridge.setAttribute('id', 'repro-sdk-bridge');
    bridge.setAttribute('src', url);
    document.documentElement.appendChild(bridge);
    bridge.parentNode.removeChild(bridge);
    return bridge = null;
  };

  scalesPageToFit = function() {
    var metas, parsed;
    metas = document.getElementsByTagName("meta");
    for (var i = 0; i < metas.length; i++) {
      if (metas[i].name === "viewport") {
        parsed = parseMetaContent(metas[i].content);
      }
    }
    if (parsed['width'] === 'device-width' &&
        parsed['height'] === 'device-height' &&
        parsed['initial-scale'] === '1.0' &&
        parsed['maximum-scale'] === '1.0') {
      return false;
    }
    return true;
  }

  parseMetaContent = function(str) {
    var contents, parsed;
    if (typeof str !== 'string') {
      return null;
    }
    contents = str.split(',');
    parsed = {};
    for (var i = 0; i < contents.length; i++) {
      var s = contents[i].trim().split("=");
      if (s.length === 2) {
        parsed[s[0]] = s[1];
      }
    }
    return parsed;
  }

  repro = {
    track: track,
    mask: mask,
    unmask: unmask
  };

  window.repro = repro;

}).call(this);

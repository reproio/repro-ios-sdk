Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '0.3.5'
  s.summary           = 'Tracking & recording user behavior in your app.'
  s.homepage          = 'https://repro.io/'
  s.license           = {
    type: 'Copyright',
    text: '(c) 2014 Repro Inc.'
  }
  s.author            = { 'Repro' => 'support@repro.io' }
  s.social_media_url  = 'https://twitter.com/reproio'
  s.source            = {
    :git => 'https://github.com/reproio/repro-ios-sdk.git',
    :tag => s.version.to_s
  }
  s.documentation_url = 'http://doc.repro.io'

  s.platform          = :ios
  s.requires_arc      = true

  s.public_header_files = 'Repro.framework/**/*.h'
  s.vendored_frameworks = 'Repro.framework'
  s.frameworks          = 'AVFoundation', 'QuartzCore', 'CoreMedia', 'CoreVideo'
  s.xcconfig            = { 'OTHER_LDFLAGS' => '-ObjC -all_load'}
end

Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '0.1.7'
  s.summary           = 'Tracking User Experience function into your app.'
  s.homepage          = 'http://repro.io/'
  s.license           = {
    type: 'Copyright',
    text: 'Copyright (c) 2014 Repro, Inc.'
  }
  s.author            = { 'Repro' => 'support@gmail.com' }
  s.social_media_url  = 'https://twitter.com/reproio'
  s.source            = {
    :git => 'https://github.com/reproio/repro-ios-sdk.git',
    :tag => '0.1.7'
  }
  s.documentation_url = 'https://github.com/reproio/repro-ios-sdk/wiki'

  s.platform          = :ios
  # s.ios.deployment_target = '5.0'
  s.requires_arc      = true

  s.exclude_files     = "sample/**"

  s.public_header_files = 'Repro.framework/**/*.h'
  s.frameworks          = 'AVFoundation', 'QuartzCore', 'CoreMedia'
  s.dependency 'AWSiOSSDK', '~> 1.7.1'

  s.xcconfig            = { 'OTHER_LDFLAGS' => '-ObjC -all_load'}
  # s.vendored_frameworks = 'Repro.framework'
end

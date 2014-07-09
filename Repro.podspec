Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '0.2.4'
  s.summary           = 'Tracking User Experience function into your app.'
  s.homepage          = 'http://repro.io/'
  s.license           = {
    type: 'Copyright',
    text: '(c) 2014 Repro Inc.'
  }
  s.author            = { 'Repro' => 'support@repro.io' }
  s.social_media_url  = 'https://twitter.com/reproio'
  s.source            = {
    :git => 'https://github.com/reproio/repro-ios-sdk.git',
    :tag => '0.2.4'
  }
  s.documentation_url = 'https://github.com/reproio/repro-ios-sdk/wiki'

  s.platform          = :ios
  s.requires_arc      = true

  s.public_header_files = 'Repro.framework/**/*.h'
  s.vendored_frameworks = 'Repro.framework'
  s.frameworks          = 'AVFoundation', 'QuartzCore', 'CoreMedia', 'SystemConfiguration'
  s.dependency 'AWSiOSSDK/Runtime', '~> 1.7.1'
  s.dependency 'AWSiOSSDK/S3', '~> 1.7.1'
  s.dependency 'AWSiOSSDK/SQS', '~> 1.7.1'

  s.xcconfig            = { 'OTHER_LDFLAGS' => '-ObjC -all_load'}
  # s.vendored_frameworks = 'Repro.framework'
end

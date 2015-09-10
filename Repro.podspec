Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '0.8.0'
  s.summary           = 'Repro is a mobile analytics tool that lets you have much deeper understanding of mobile app users with play-by-play videos.'
  s.homepage          = 'https://repro.io/'
  s.license           = {
    type: 'Copyright',
    text: '(c) 2015 Repro Inc.'
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

  s.public_header_files = 'Repro.embeddedframework/Repro.framework/Headers/*.h'
  s.vendored_frameworks = 'Repro.embeddedframework/Repro.framework'
  s.resource            = 'Repro.embeddedframework/Resources/ReproSDKResources.bundle'

  s.frameworks          = 'AVFoundation', 'QuartzCore', 'CoreMedia', 'CoreVideo', 'Security'
  s.xcconfig            = { 'OTHER_LDFLAGS' => '-ObjC'}
end

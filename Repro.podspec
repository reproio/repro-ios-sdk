Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '0.6.0-beta'
  s.summary           = 'Track & record the real user's behavior'
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

  s.frameworks          = 'AVFoundation', 'QuartzCore', 'CoreMedia', 'CoreVideo'
  s.xcconfig            = { 'OTHER_LDFLAGS' => '-ObjC'}
end

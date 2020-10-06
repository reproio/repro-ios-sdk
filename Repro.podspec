Pod::Spec.new do |s|
  s.name              = 'Repro'
  s.version           = '5.2.0'
  s.summary           = 'Repro is a mobile analytics tool that lets you have much deeper understanding of your users.'
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
  s.documentation_url = 'http://docs.repro.io'

  s.platform          = :ios
  s.requires_arc      = true

  s.public_header_files = 'Repro.embeddedframework/Repro.framework/Headers/*.h'
  s.source_files        = 'Repro.embeddedframework/Repro.framework/Headers/*.h'
  s.vendored_frameworks = 'Repro.embeddedframework/Repro.framework'
  s.resource            = 'Repro.embeddedframework/Resources/ReproSDKResources.bundle'

  s.frameworks          = 'SystemConfiguration', 'WebKit'
end

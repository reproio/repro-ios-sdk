Pod::Spec.new do |s|
    s.name                = 'Repro'
    s.version             = '5.22.0'
    s.summary             = 'Repro is a mobile analytics tool that lets you have much deeper understanding of your users.'
    s.homepage            = 'https://repro.io/'
    s.license             = {
        type: 'Copyright',
        text: '(c) 2015 Repro Inc.'
    }
    s.author              = { 'Repro' => 'support@repro.io' }
    s.social_media_url    = 'https://twitter.com/reproio'
    s.source              = {
        :git => 'https://github.com/reproio/repro-ios-sdk.git',
        :tag => s.version.to_s
    }
    s.documentation_url   = 'https://docs.repro.io'

    s.platform            = :ios
    s.requires_arc        = true

    s.vendored_frameworks = 'Repro.xcframework'

    s.frameworks          = 'UIKit', 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'WebKit', 'UserNotifications'
end




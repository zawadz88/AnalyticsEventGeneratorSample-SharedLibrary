Pod::Spec.new do |spec|
    spec.name = 'shared_analytics_library'
    spec.version = '1.0.0'
    spec.homepage = 'https://github.com/zawadz88'
    spec.source = { :git => 'git@github.com:zawadz88/AnalyticsEventGeneratorSample-SharedLibrary.git', :tag => '1.0.0' }
    spec.authors = ''
    spec.license = { :type => 'MIT' }
    spec.summary = 'An example of using a shared library for analytics'
    spec.vendored_frameworks = 'SharedAnalyticsLibrary.xcframework'
    spec.libraries = 'c++'
    spec.ios.deployment_target = '16.0'

end
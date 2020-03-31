#
# Be sure to run `pod lib lint SpeakPen.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SpeakPen'
  s.version          = '0.1.10'
  s.summary          = 'SpeakPen SDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Guxiaodong941005/storyToy'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Guxiaodong941005' => '970768639@qq.com' }
  s.source           = { :git => 'https://github.com/Guxiaodong941005/storyToy.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

#  s.source_files = 'SpeakPen/Classes/**/*'
  
  s.requires_arc = true

#  s.source_files = ['SpeakPen/Classes/Device/*.{h,m}',
#                    'SpeakPen/Classes/Playback/*.{h,m}',
#                    'SpeakPen/Classes/VoiceLink/*.{h,m}',
#                    'SpeakPen/Classes/RBVoiceWave/*.{h,cpp,mm}',
#                    'SpeakPen/Classes/Base/*.{h,m}',
#                    'SpeakPen/Classes/User/*.{h,m}',
#                    'SpeakPen/Classes/Interactive/*.{h,m}',
#                    ]
  s.libraries = 'c++'
  s.frameworks = 'UIKit','WebKit','CoreTelephony','SystemConfiguration','MobileCoreServices','AVFoundation'
#  s.public_header_files = ['SpeakPen/Classes/Device/*.h',
#                           'SpeakPen/Classes/Playback/*.h',
#                           'SpeakPen/Classes/VoiceLink/RBVoiceLinkApi.h',
#                           'SpeakPen/Classes/Base/RBAccessConfig.h',
#                           'SpeakPen/Classes/Interactive/RBInteractiveApi.h',
#                           'SpeakPen/Classes/User/*.h',
#                          ]
  s.dependency 'AFNetworking','~> 3.2.1'
  s.dependency 'YYModel'
  #依赖自己的或别人的Framework文件
  s.vendored_frameworks = 'SpeakPen.framework'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC'}
end

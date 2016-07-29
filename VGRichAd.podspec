Pod::Spec.new do |s|
  s.name                = "VGRichAd"
  s.version             = "0.9.0"
  s.summary             = "RichAd library"
  s.homepage            = "https://github.com/goldspotmedia-dev/VGRichAd-iOS"
  s.license             = { :type => "Copyright", :text => "Copyright (c) GoldSpot Media,Inc." }
  s.author              = "GoldSpot Media, Inc."
  s.requires_arc        = false
  s.source              = { :git => "https://github.com/voyagegroup/meteor-i.git", :tag => s.version.to_s }
  s.vendored_frameworks = "VGRichAd.framework"
end

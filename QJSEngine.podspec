Pod::Spec.new do |spec|

  spec.name         = "QJSEngine"
  spec.version      = "0.0.1"
  spec.summary      = "JavascriptCore Alternative framework based on QuickJS."
  spec.description  = <<-DESC
  JavascriptCore Alternative framework based on QuickJS. You can invoke objc api in javascript, and invoke javascript api in objc.
                   DESC

  spec.homepage     = "https://github.com/suxinde2009/QJSEngine"
  spec.license      = "MIT"
  spec.author       = "suxinde"
  spec.platform     = :ios, "11.0"
  spec.source       = { :git => "https://github.com/suxinde2009/QJSEngine.git", :tag => "#{spec.version}", :submodules => true }

  spec.source_files  = "Source/QJSEngine", "Source/QJSEngine.h", "Source/QuickJS/quickjs.c", "Source/QuickJS/bjson.c", "Source/QuickJS/cutils.c", "Source/QuickJS/libbf.c", "Source/QuickJS/libregexp.c", "Source/QuickJS/libunicode.c", "Source/QuickJS/quickjs-libc.c", "Source/QuickJS/*.h"
  spec.public_header_files = "Source/QJSEngine/**/*.h", "Source/QJSEngine.h", "Source/QuickJS/quickjs.h", "Source/QuickJS/quickjs-libc.h", "Source/QuickJS/quickjs-atom.h"

  spec.xcconfig = { "OTHER_CFLAGS" => <<-DESC
    $(inherited) -DCONFIG_VERSION=\\"2025-03-15\\"
    DESC
    }

end


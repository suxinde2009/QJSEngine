#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "QJSConfiguration.h"
#import "QJSContext.h"
#import "QJSRuntime.h"
#import "QJSEngine.h"
#import "quickjs.h"
#import "quickjs-libc.h"
#import "quickjs-atom.h"

FOUNDATION_EXPORT double QJSEngineVersionNumber;
FOUNDATION_EXPORT const unsigned char QJSEngineVersionString[];


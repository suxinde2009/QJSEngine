//
//  QJSConfiguration.h
//  QJSEngine
//
//  Created by suxinde on 2025/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class QJSContext, QJSRuntime;

@interface QJSConfiguration : NSObject

- (void)setupContext:(QJSContext *)context;
- (void)setupRuntime:(QJSRuntime *)runtime;

@end

NS_ASSUME_NONNULL_END

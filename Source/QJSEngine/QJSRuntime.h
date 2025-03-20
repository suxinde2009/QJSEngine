//
//  QJSRuntime.h
//  QJSEngine
//
//  Created by suxinde on 2025/3/15.
//

#import "QJSConfiguration.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class QJSContext;

typedef struct JSRuntime JSRuntime;

@interface QJSRuntime : NSObject

@property (nonatomic, assign) JSRuntime *rt;

+ (instancetype)shared;

+ (NSUInteger)numberOfRuntimes;

- (instancetype)init;

- (instancetype)initWithConfiguration:(QJSConfiguration *)config;

- (QJSContext *)newContext;

- (NSUInteger)numberOfContexts;

@end

NS_ASSUME_NONNULL_END

//
//  AGURLSessionManager.h
//  AGNetworking
//
//  Created by suning on 2019/3/25.
//  Copyright © 2019年 suning. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

extern NSString * const AGRequestMethodGET;
extern NSString * const AGRequestMethodHEAD;
extern NSString * const AGRequsetMethodPOST;
extern NSString * const AGRequestMethodPUT;
extern NSString * const AGRequestMethodDELETE;
extern NSString * const AGRequestMethodPATCH;

NS_ASSUME_NONNULL_BEGIN

@interface AGURLSessionManager : NSObject

/**
 Creates and rrturns an 'AGURLSessionManager' object

 @return an 'AGURLSessionManager' object
 */
+ (instancetype)manager;

/**
 designated initializer
 */
- (instancetype)initWithSessionConfiguration:(NSURLSessionConfiguration *)configuration;

/**
 default is `[NSSet setWithObjects:@"application/json", @"text/json", @"text/javascript", nil];`
 @param acceptableContentTypes  The acceptable MIME types for response.
 */
- (void)setAcceptbaleContentTypes:(NSSet *)acceptableContentTypes;


- (void)setDefaultHeaderFields:(NSDictionary *)headerFields;

- (void)dataTaskWithHTTPMethod:(NSString *)method
                     URLString:(NSString *)URLString
                    parameters:(id)parameters
                       success:(void (^)(id taskm, id responseObject))success
                       failure:(void (^)(id task, NSError *error))failure;
@end

NS_ASSUME_NONNULL_END

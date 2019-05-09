//
//  AGURLSessionManager.m
//  AGNetworking
//
//  Created by suning on 2019/3/25.
//  Copyright © 2019年 suning. All rights reserved.
//

#import "AGURLSessionManager.h"

NSString * const AGRequestMethodGET    = @"GET";
NSString * const AGRequestMethodHEAD   = @"HEAD";
NSString * const AGRequestMethodPOST   = @"POST";
NSString * const AGRequestMethodPUT    = @"PUT";
NSString * const AGRequestMethodDELETE = @"DELETE";
NSString * const AGRequestMethodPATCH  = @"PATCH";

@interface AGURLSessionManager ()

@property (nonatomic, strong) AFURLSessionManager *sessionManager;
@property (nonatomic, strong) AFHTTPRequestSerializer <AFURLRequestSerialization>* requestSerializer;
@property (nonatomic, strong) NSURLSessionConfiguration *configuration;
@end

@implementation AGURLSessionManager

+ (instancetype)manager {
    return [[self alloc] init];
}




@end

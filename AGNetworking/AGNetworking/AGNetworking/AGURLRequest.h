//
//  AGURLRequest.h
//  AGNetworking
//
//  Created by suning on 2019/3/25.
//  Copyright © 2019年 suning. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 
 *1. URL path 拼接
 *2. 组织参数
 *3. 请求头定制
 *4. JSONP 处理
 
 */


@interface AGURLRequest : NSObject

@property (nonatomic, copy) NSString *baseUrl;

@end

NS_ASSUME_NONNULL_END

//
//  DWBAFNetworking.h
//  DWBToolsDemo
//
//  Created by 戴维保 on 2018/9/6.
//  Copyright © 2018年 北京嗅美科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
@interface DWBAFNetworking : NSObject
//自己封装afn单例
+ (AFHTTPSessionManager *)sharedManager;

/**
 AFNetworking二次封装-POST
 
 @param URLString 请求接口
 @param parameters 接口参数-字典
 @param controller 当前控制器，传入nil也可以
 @param type 类型
 @param results 请求成功结果
 @param MyError 失败结果
 */
+(void)POST:(NSString *_Nullable)URLString parameters:(id _Nullable )parameters controller:(UIViewController*)controller type:(NSString *)type success:(void (^_Nullable)(id _Nullable responseObject))results failure:(void (^_Nullable)(NSError * _Nullable error))MyError;

@end

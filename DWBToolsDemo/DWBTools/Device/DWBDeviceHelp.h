//
//  DWBDeviceHelp.h
//  DouZhuan
//
//  Created by 戴维保 on 2018/10/13.
//  Copyright © 2018 品创时代互联网科技（北京）有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DWBDeviceHelp : NSObject
/**
 判断是否有摄像头(判断是否是模拟器)范湖YES是模拟器，NO是真机
 
 @return 结果
 */
+(BOOL)isSimulator;


/**
 判断设备是否有r陀螺仪

 @return YES有，NO，没有
 */
+(BOOL)isHaveDevice_TLY;


/**
 获取磁盘总空间,如64G 128G

 @return 结果，返回单位G
 */
+ (NSString *)getPhoneAllMemory_DiskSize;

@end

NS_ASSUME_NONNULL_END
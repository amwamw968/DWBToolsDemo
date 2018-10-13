//
//  NSString+DWBAttribute.h
//  DWBToolsDemo
//
//  Created by 戴维保 on 2018/9/19.
//  Copyright © 2018年 潮汐科技有限公司. All rights reserved.
//
//富文本帮助类
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (DWBAttribute)

#pragma mark 同一个label中间几个字 变颜色、大小都能改变
/**
 同一个label中间几个字 变颜色、大小都能改变。
 
 @param color 中间变化的文字--颜色
 @param fout 中间变化的文字--大小
 @param string1 第一段内容
 @param string2 第一段内容
 @param string3 第二段内容
 @return 结果
 */
+(NSMutableAttributedString*)getLabelChangeColor:(UIColor*)color andFont:(UIFont*)fout andString1:(NSString*)string1 andChangeString:(NSString*)string2 andGetstring3:(NSString*)string3;

/**
 同一个label中间几个字 变颜色、大小都能改变、还能添加下划线，整个label还能设置是否有行间距
 
 @param color 中间变化的文字--颜色
 @param fout 中间变化的文字--大小
 @param string1 第一段内容
 @param string2 第一段内容
 @param string3 第二段内容
 @param isSetupSpacing 是否设置行间距
 @param iShowBottonLine 中间变化的文字--是否设置下划线
 @return 结果
 */
+(NSMutableAttributedString*)getLabelChangeColor:(UIColor*)color andFont:(UIFont*)fout andString1:(NSString*)string1 andChangeString:(NSString*)string2 andGetstring3:(NSString*)string3 andISetupSpacing:(BOOL )isSetupSpacing andIShowBottonLine:(BOOL )iShowBottonLine;

/**
 设置Label的行间距+默认6
 
 @param string 内容
 @param lineSpacing 行间距
 @return 富文本
 */
+(NSMutableAttributedString*)getLabelLineSpace:(NSString*)string LineSpacing:(CGFloat )lineSpacing;


/**
 富文本：图片+文字混排

 @param imageName 本地图片名字
 @param string1 第一段文字
 @param string2 第二段文字
 @param imageBounds 图片bounds
 @return 富文本
 */
+(NSMutableAttributedString *)getLabelTextAndImageWithImageName:(NSString *)imageName andString1:(NSString*)string1 andString2:(NSString*)string2 AndBounds:(CGRect )imageBounds;

/**
 加载带标签的富文本
 
 @param htmlString 带标签的富文本
 @return 结果
 */
+(NSAttributedString *)getLabelAttributedHtmlString:(NSString *)htmlString;

@end

NS_ASSUME_NONNULL_END
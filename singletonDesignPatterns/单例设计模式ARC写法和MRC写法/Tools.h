//
//  Tools.h
//  NSArray
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tools : NSObject
// 一般情况下创建一个单例对象都有一个与之对应的类方法
// 一般情况下用于创建单例对象的方法名称都以share开头, 或者以default开头
+ (instancetype)shareInstance;

@end

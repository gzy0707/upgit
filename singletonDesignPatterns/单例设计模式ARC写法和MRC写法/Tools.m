//
//  Tools.m
//  NSArray
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Tools.h"

@implementation Tools

+ (instancetype)shareInstance
{
    Tools *instance = [[self alloc] init];
    return instance;
}

// 创建一个空对象

static Tools * _instance = nil;
+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
    /*
    // 当前代码在多线程中可能会出现问题(多线程并发问题.出现多个线程同时创建对象,线程不安全)
    NSLog(@"%s",__func__);
    // 由于所有的创建方法都会调用该方法, 所以只需要在该方法中控制当前对象只创建一次即可
    if (_instance == nil) {
        NSLog(@"创建了一个对象");
        _instance = [[super allocWithZone:zone] init];
        
    }
    return _instance;
     */
    
    // 线程安全的单例写法
    
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            _instance = [[super allocWithZone:zone] init];
        });
        return _instance;
     
}

// MRC
- (oneway void)release
{
    
    // 为了保证程序过程中只有一份实例,这个方法什么都不做.
    
}

- (instancetype)retain
{
    return _instance;
}

- (NSUInteger)retainCount
{
//    return 1;
    // 注意: 为了方便程序员之间沟通,一般情况下不会再单例中返回retainCount = 1;
    // 而是返回一个比较大的值
    return MAXFLOAT;
}

@end

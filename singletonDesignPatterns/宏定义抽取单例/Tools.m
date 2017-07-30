//
//  Tools.m
//  NSArray
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Tools.h"

@implementation Tools

/*
+ (instancetype)shareTools
{
    Tools *instance = [[self alloc] init];
    return instance;
}

static Tools * _instance = nil;
+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            _instance = [[super allocWithZone:zone] init];
        });
        return _instance;
}
 
 - (id)copyWithZone:(NSZone *)zone{
 
 return _instance;
 }
 
 - (id)mutableCopyWithZone:(NSZone *)zone
 {
 return _instance;
 }

 
 // MRC
- (oneway void)release
{
    
}

- (instancetype)retain
{
    return _instance;
}

- (NSUInteger)retainCount
{
    return MAXFLOAT;
}
*/
implementationSingleton(Tools)


@end

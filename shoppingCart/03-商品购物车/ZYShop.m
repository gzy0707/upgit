//
//  ZYShop.m
//  03-商品购物车
//
//  Created by 罂粟 on 2017/8/4.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "ZYShop.h"

@implementation ZYShop

//- (instancetype)initWithIcon:(NSString *)iocn name:(NSString *)name{
//    if (self = [super init]) {
//        self.icon = iocn;
//        self.name = name;
//    }
//    return self;
//}
//
//+ (instancetype)shopWithIcon:(NSString *)iocn name:(NSString *)name{
//    return [[self alloc] initWithIcon:iocn name:name];
//}

- (instancetype)initWithDict:(NSDictionary *)dict
{
    if (self = [super init]) {
        self.icon = dict[@"icon"];
        self.name = dict[@"name"];
    }
    return self;
}

+ (instancetype)shopWithDict:(NSDictionary *)dict
{
    return [[self alloc] initWithDict:dict];
}


@end

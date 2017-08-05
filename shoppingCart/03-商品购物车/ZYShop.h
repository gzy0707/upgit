//
//  ZYShop.h
//  03-商品购物车
//
//  Created by 罂粟 on 2017/8/4.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYShop : NSObject

/** 图片的名称 */
@property (nonatomic, copy) NSString *icon;

/** 商品的名称 */
@property (nonatomic, copy) NSString *name;

// 提供构造方法和类工厂方法
//- (instancetype)initWithIcon :(NSString *)iocn name:(NSString *)name;
//+ (instancetype)shopWithIcon :(NSString *)iocn name:(NSString *)name;


- (instancetype)initWithDict :(NSDictionary *)dict;
+ (instancetype)shopWithDict :(NSDictionary *)dict;



@end

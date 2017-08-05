//
//  ZYShopView.h
//  03-商品购物车
//
//  Created by 罂粟 on 2017/8/5.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZYShop;

@interface ZYShopView : UIView

/** 商品数据模型 */
@property(nonatomic,strong)ZYShop * shop;

#pragma mark - 提供快速创建方法
+ (instancetype)shopWith;

@end

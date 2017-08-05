//
//  ZYShopView.m
//  03-商品购物车
//
//  Created by 罂粟 on 2017/8/5.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "ZYShopView.h"
#import "ZYShop.h"
@interface ZYShopView ()

@property (weak, nonatomic) IBOutlet UIImageView *iconView;

@property (weak, nonatomic) IBOutlet UILabel *labelView;

@end

@implementation ZYShopView

+ (instancetype)shopWith
{
    return [[[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:nil options:nil] firstObject];
}

- (void)setShop:(ZYShop *)shop
{
    _shop = shop;
    //设置数据
    self.iconView.image = [UIImage imageNamed:shop.icon];
    self.labelView.text = shop.name;
}


@end

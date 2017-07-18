//
//  Shop.m
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Shop.h"

@implementation Shop

+ (Gun *)buyGun:(int)money
{
    //创建一把枪
    Gun *gun = [Gun new];   // 通过new创建出来的对象存储在堆中,堆中的数据不会自动释放
    //返回枪
    return gun;
}

+ (Clip *)buyClip:(int)money
{
    //创建弹夹
    Clip *clip = [Clip new];
    //添加子弹
    [clip addBullet];
    return clip;
}

@end

//
//  Shop.h
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"
@interface Shop : NSObject

// 购买枪的方法
+ (Gun *)buyGun : (int)money;

// 购买弹夹
+ (Clip *)buyClip : (int)money;

@end

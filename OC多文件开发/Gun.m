//
//  Gun.m
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Gun.h"

@implementation Gun
- (void)shoot:(Clip *)c
{
    // 判断有没有弹夹
    if (c != nil) {
        // 判断有没有子弹
        if (c->_bullet > 0) {
            c->_bullet -= 1;
            NSLog(@"打了一枪 %i",c->_bullet);
        }else{
            NSLog(@"没有子弹了,请装子弹!");
        }
    }else{
        NSLog(@"没有弹夹,请换弹夹!");
    }
    
}

@end

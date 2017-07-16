//
//  Soldier.m
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Soldier.h"

@implementation Soldier
- (void)fire:(Gun *)gun :(Clip *)clip
{
    // 判断是否有枪和弹夹
    if (gun != nil && clip != nil) {
        [gun shoot:clip];
    }
}

@end

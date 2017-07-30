//
//  Student.m
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Student.h"
#import "Baby.h"
@implementation Student

- (void)feedFood:(Baby *)baby
{
    baby.hungry -= 10;
    NSLog(@"喂婴儿吃东西,%i",baby.hungry);
}

- (void)hongSleep:(Baby *)baby
{
    baby.sleep +=10;
    NSLog(@"哄婴儿睡觉,%i",baby.sleep);
}

@end

//
//  Person.m
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)findHouse
{
    NSLog(@"学生找房子");
    // 通知代理帮忙找房子
    if ([self.delegate respondsToSelector:@selector(PersonFindHouse:)]) {
        [self.delegate PersonFindHouse:self];
    }
}

@end

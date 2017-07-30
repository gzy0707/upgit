//
//  Baby.m
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Baby.h"
#import "Nanny.h"
@implementation Baby

- (void)food
{
    self.hungry +=5;
    NSLog(@"要吃东西 %i",self.hungry);
    if ([self.nanny respondsToSelector:@selector(feedFood:)]) {
        [self.nanny feedFood:self];
    }
}

- (void)sleepy
{
    self.sleep +=5;
    NSLog(@"困了 %i",self.sleep);
    if ([self.nanny respondsToSelector:@selector(hongSleep:)]) {
        [self.nanny hongSleep:self];
    }
}

@end

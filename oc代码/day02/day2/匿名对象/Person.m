//
//  Person.m
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)say
{
    NSLog(@"name = %@,age = %d",_name,_age);
}

- (void)signal:(iPhone *)phone
{
    [phone callWithNumber:123456];
}

@end

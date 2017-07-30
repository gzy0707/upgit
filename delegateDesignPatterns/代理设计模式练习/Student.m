//
//  Student.m
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "Student.h"

@implementation Student

- (void)findHouse
{
    NSLog(@"学生找房子");
    if ([self.delegate respondsToSelector:@selector(HelpStudentFindHouse)]) {
        [self.delegate HelpStudentFindHouse];
    }
}
@end

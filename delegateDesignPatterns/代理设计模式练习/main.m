//
//  main.m
//  代理设计模式练习
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
#import "LinkHome.h"
#import "loveHome.h"
int main(int argc, const char * argv[]) {
    
    //创建一个学生
    Student *stu = [Student new];
//    LinkHome *lh = [LinkHome new];
//    
//    stu.delegate = lh;
    loveHome *llh = [loveHome new];
    stu.delegate = llh;
    
    //学生找房子
    [stu findHouse];
    
    
    return 0;
}

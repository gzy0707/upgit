//
//  main.m
//  protocol应用场景-代理设计模式
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Baby.h"
#import "Nanny.h"
#import "Student.h"
#import "Teacher.h"
int main(int argc, const char * argv[]) {
    
    // 创建一个婴儿
    Baby *b = [Baby new];
    /*
    // 创建一个保姆
    Nanny *n = [ Nanny new];
    // 把保姆赋值给婴儿
    b.nanny = n;
     */
    
    /*
    // 更换保姆
    Student *stu = [Student new];
    b.nanny = stu;
    */
    
    // 更换老师保姆
    Teacher *tea = [Teacher new];
    b.nanny = tea;
    
    
    [b food];
    [b sleepy];
    
    
    return 0;
}

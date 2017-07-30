//
//  main.m
//  代理设计模式练习优化
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "LinkHome.h"

int main(int argc, const char * argv[]) {
    
    /*
     用代理实现学生找房子, 不具备找房子的能力
     所以学生可以找另一个对象来帮它找房子, 那么另一个对象就是学生的代理
     */
    Person *p = [Person new];
    
    LinkHome *lh = [LinkHome new];
    p.delegate = lh;
    
    [p findHouse];
    
    return 0;
}

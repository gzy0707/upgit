//
//  main.m
//  匿名对象
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "iPhone.h"
int main(int argc, const char * argv[]) {
    // 匿名对象,就是没有名字的对象
    
    //1. 有名字的对象
    // 只要用给一个指针保存了某个对象的地址,我们就可以称这个指针为某个对象
    Person *p = [Person new];
    p->_name = @"gzy";
    p->_age = 12;
    [p say];
    
    //2. 没有名字的对象
    [Person new];
    [Person new]->_name = @"ggg";
    [Person new]->_age = 23;
    [[Person new] say]; // null 0
    
    // 匿名对象的应用场景
    /*
        1. 当对象只使用一次的时候就使用匿名对象
        2. 匿名对象可以作为方法的参数(实参)
     */
    
    // 创建iphone对象
//    iPhone *phone = [iPhone new];
//    [phone brand];
    // 对象只使用一次
    [[iPhone new] brand];
    
    iPhone *phone1 = [iPhone new];
    [[Person new] signal:phone1];
    
    return 0;
}

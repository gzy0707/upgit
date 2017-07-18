//
//  main.c
//  const指针
//
//  Created by 罂粟 on 2017/7/8.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //1、const在*号左边,修饰的是指针指向的变量不能更改,可以更改指向
    int a = 7;
    const int* p;
    // 它可以修改指向
    p = &a;
    
    //其指向内存被const修饰,不能修改
    // *p = 20; 报错
    
    
    //2、const在*右边,表示指针值（指针指向的位置）不可以改变，但指针指向的值可以改变。
    int* const p2 = &a;
    *p2 = 33;   //对
   //p2 = &a;   报错
    
    //3、指针指向和指针指向的变量值都不能更改
    const int* const p3 = &a;
//    p3 = 2;
//    *p3 = &b;
    
    return 0;
}

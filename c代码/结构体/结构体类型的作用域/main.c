//
//  main.c
//  结构体类型的作用域
//
//  Created by 罂粟 on 2017/7/11.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、在函数内部,结构类型作用域和局部变量一样
    2、在外部定义的结构体类型 像全局变量的作用域
        作用域: 从定义的那一行开始直到文件结束
        注意点: 结构类型不能声明
 
    结构体类型的作用域,除了不能声明以外,其他和普通变量一样
 */

//外部的结构体
struct Child{
    int age;
    char sex;
};

int main(int argc, const char * argv[]) {
    
    struct Child c1;
    c1.age = 10;
    c1.sex = 'M';
    
    struct Person{
        int age;
    
    };
    struct Person p = {10};
    printf("age = %d \n",p.age);
    
    
    return 0;
}

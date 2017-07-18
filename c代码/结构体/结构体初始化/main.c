//
//  main.c
//  结构体初始化
//
//  Created by 罂粟 on 2017/7/11.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、定义结构体类型
    2、定义结构体变量
    3、对结构体变量初始化
 
 */

int main(int argc, const char * argv[]) {
    
    // 定义结构体类型
    struct Person{
        char* name;
        int age;
        double height;
    
    };
    // 定义结构体变量
    // 先定义结构体变量,然后初始化
    struct Person p1;
    p1.name = "小杨";
    p1.age = 12;
    p1.height = 12.3;
    printf("name = %s ,age = %d, height = %.2lf \n",p1.name,p1.age,p1.height);
    
    // 整体赋值
    p1 = (struct Person){"小样",22,112.3};
    printf("name = %s ,age = %d, height = %.2lf \n",p1.name,p1.age,p1.height);
    
    // 定义结构体的同时进行初始化
    struct Person p2 = {"桂阳",111,2.3};
    printf("name = %s ,age = %d, height = %.2lf \n",p2.name,p2.age,p2.height);
    
    // 同种类型的结构体之间可以相互赋值
    p1 = p2;
    printf("name = %s ,age = %d, height = %.2lf \n",p1.name,p1.age,p1.height);
    
    return 0;
}






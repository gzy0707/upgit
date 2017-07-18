//
//  main.c
//  结构体定义的多种方式
//
//  Created by 罂粟 on 2017/7/11.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    第一种方式:
        1: 先定义结构体类型
        2: 定义结构体变量
 
 */
void test(){

    struct Person{
        char* name;
        int age;
    };
    struct Person p1;
    
}

// 第二种方式: 定义结构体类型的同时定义结构变量
void test1(){
    
    struct Person{
        char* name;
        int age;
    }p1,p2 = {"小红",99};
    printf("name = %s , age = %d\n",p2.name,p2.age);
    
    p1 = (struct Person){"小米",20};
    printf("name = %s , age = %d\n",p1.name,p1.age);
    
}

//第三种方式: 定义匿名结构类型同时定义结构体变量
int main(int argc, const char * argv[]) {
    
    struct{
        char* name;
        int age;
    } p1,p2 = {"BB",39};
    
    printf("name = %s , age = %d\n",p2.name,p2.age);
    
    p1.name = "AA";
    p1.age = 12;
    printf("name = %s , age = %d\n",p1.name,p1.age);
    //匿名的结构体不能整体赋值
    //结构体类型不能重复使用
    
    return 0;
}






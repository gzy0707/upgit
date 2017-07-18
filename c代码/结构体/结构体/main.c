//
//  main.c
//  结构体
//
//  Created by 罂粟 on 2017/7/11.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、结构体: 用来存放表示某种特定含义的一种数据
            它是对数据的封装
            函数是对功能的封装
        好处: 提高代码的可读性
         提高数据的易用性,提高代码的可维护性
    
       定义结构体: 
            1、定义结构体类型
                struct 结构体类型名称{
                成员类型  成员名称;
                ....
            };//此处必须加分号
            2、通过结构体类型定义结构变量
                struct 结构类型名称 结构体变量名称;
 
 */
//  定义一个人结构体类型
struct Person{
    char* name;
    int age;
    char* sex;
    double height;
    double weight;
    
};

int main(int argc, const char * argv[]) {
 
    //  定义结构体变量
    struct Person child;
    
    //  给结构体成员初始化
    child.name = "小明";
    child.age = 10;
    child.sex = "男";
    child.height = 1.2;
    child.weight = 20.3;
    
    printf("name = %s,age = %d,sex = %s,height = %.2lf,weight = %.2lf \n",child.name,child.age,child.sex,child.height,child.weight);
    
    
    return 0;
}
















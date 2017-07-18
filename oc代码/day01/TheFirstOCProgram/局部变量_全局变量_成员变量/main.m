//
//  main.m
//  局部变量_全局变量_成员变量
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    // 注意: 成员变量只能在类的声明的大括号中.离开类之后不是成员变量\
            成员变量不能再定义的同时进行初始化
    // 存储: 堆
    // 存储在堆中的数据,不会被自动释放,只能程序员手动释放
    
    // int age = 10; 报错
    int age;
}

@end

@implementation Person



@end

// 写在函数和大括号外面的变量,称为全局变量
// 作用域: 从定义的那一行开始,一直到文件末尾
// 全局变量可以先定义在初始化,也可以定义的同时初始化
// 存储: 静态区
// 程序一启动就会分配存储空间,直到程序结束才会释放
int a;
int b = 10;

int main(int argc, const char * argv[]) {
    // 写在函数或者代码块中的变量,称为局部变量
    // 作用域: 从定义的那一行开始,一直遇到大括号或者return 结束
    // 局部变量可以先定义再初始化,也可以定义的同时初始化
    // 存储: 栈
    // 存储在栈中的数据有一个特点: 系统会自动给我释放
    int num = 10;
    {
        int value;
    }
    
    return 0;
}





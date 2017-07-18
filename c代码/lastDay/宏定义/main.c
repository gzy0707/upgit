//
//  main.c
//  宏定义
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    预处理指令:
    什么是预处理指令:
            在我们的文件翻译成0和1之前的操作我们称之为预处理指令
            一般情况预处理指令都是#开头
 
    宏定义
    条件编译
    文件包含
 */

/* 
    宏定义格式:
        1.不带参数的宏定义
            #define 宏名 值
        2.带参数的宏定义
    宏定义的作用:
        会在程序翻译成0和1之前,将所有宏名替换为 宏的值
    宏定义在什么时候替换:
        源代码--> 预处理 --> 汇编 --> 二进制 --> 可执行程序
 
 规范:
    一般情况宏名都大写,多个单词用_隔开
    
 注意:
    1、宏定义后面不要写分号
    2、宏定义也有作用域:
        从定义的那一行开始,一直到文件末尾,也可以通过#undef 宏名来提前结束宏定义的作用域
 
 宏定义的使用场景:
    http://192.168.1.1/login
    http://192.168.1.1/accesstoken
    http://192.168.1.1/file...
 #define BASE_URL "http://192.168.1.1/"

*/
#define COUNT 5 //不能写分号;
void test();
int main(int argc, const char * argv[]) {
   
    //int nums[5] = {1,3,5,7,9};
    int nums[COUNT] = {1,3,5,7,9};
    // 要求不能动态计算,并且要求需求变更只修改一个地方
    //int length = sizeof(nums) / sizeof(nums[0]);
    
    
    for (int i = 0; i < COUNT; i++) {
        printf("nums[%d] = %d\n",i,nums[i]);
    }

//提前结束宏定义的作用域
//#undef COUNT
    
    printf("--------------\n");
    test();

    return 0;
}

void test(){
    
    int ages[COUNT] = {2,4,6,8,10};
    for (int i = 0; i < COUNT; i++) {
        printf("ages[%d] = %d \n",i,ages[i]);
    }
    
}





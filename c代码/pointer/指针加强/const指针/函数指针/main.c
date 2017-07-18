//
//  main.c
//  函数指针
//
//  Created by 罂粟 on 2017/7/8.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

int func(int num){
    
    printf("函数指针!\n");
    
    return 100 + num;
    
}

int* funcc (int* b,int arr[],int nlength){
    
    return b;
}

int main(int argc, const char * argv[]) {
    
//    int* p(int a); //返回值为int* 的函数
//    int (*p2)(int a); //int(*)(int a) 的 函数指针
   
    
    int (*p2)(int); //p2 为 int(*)(int a) 类型的 函数指针
    // 函数名就是函数的首地址
    // 表示函数指针p2指向了函数func
    p2 = func;
    
    //使用函数指针访问函数
    //func(20);
    int result = (*p2)(50);
    printf("result = %d \n",result);
    
    
    
    //函数指针定义
    int* (*p3)(int* b,int arr[],int nlenght);
    p3 = funcc;
    
    
    
    return 0;
}

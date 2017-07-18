//
//  main.c
//  03-指针练习2
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
//  写一个函数返回两个数的和,差,积

// 指针可以让函数返回多个值
void sumAndMinus (int num1 ,int num2 , int* sum , int* minus, int* ji){
    
    *sum = num1 + num2;
    *minus = num1 - num2;
    *ji = num1 * num2;
    //return num1 + num2;
    //return num1 - num2;
}

int main(int argc, const char * argv[]) {
    
    int a = 10;
    int b = 20;
    int sum;
    // 定义一个变量来接收num1和num2的差
    int minus;
    int ji;
    
    
    sumAndMinus(a,b,&minus,&ji,&sum);
    printf("%d,%d,%d\n",sum,minus,ji);
    
    return 0;
}

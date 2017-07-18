//
//  main.c
//  函数指针的使用
//
//  Created by 罂粟 on 2017/7/9.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

int findMax(int a , int b){
    
    return a > b ? a : b;
}

int sum (int c , int d){
    
    return c + d;
    
}
void test(){    //函数名就是一个指针
    
    //需求: 定义一个求两个整数的最大值的函数,\
    并定义一个函数指针指向这个函数,使用指针来调用函数验证结果
    
    //定义一个函数指针
    int (*p)(int,int);
    p = findMax;
    int max = (*p)(10,5);
    printf("max = %d \n",max);
    
    //函数指针的指向可以改变,但必须指向同类型的函数\
    同类型的函数:返回值类型和形参列表都相同
    p = sum;
    int he = p(1,1);
    printf("he = %d \n",he);

}


int main(int argc, const char * argv[]) {
    test();
    //printf("test = %p \n",test);
    
    
    return 0;
}





//
//  main.c
//  指针数组
//
//  Created by 罂粟 on 2017/7/9.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
 指针数组: 存放指针变量的数组
	数据类型* 指针变量[指针个数]
 
 */
int main(int argc, const char * argv[]) {
    
//    int nums[3] = {10,20,30};
//    int* p[3] = {&nums[0],&nums[1],&nums[2]};
//    printf("%d,%d,%d \n",*p[0],*p[1],*p[2]);
    
    
//    int nums[3][2] = {{1,2},{3,4},{5,6}};
//    int* p[3] = {nums[0],nums[1],nums[2]};
//    printf("%d,%d,%d \n",*p[0],*p[1],*p[2]);
    
    int a = 1;
    int b = 2;
    int c = 3;
    int* p[] ={&a,&b,&c};
    printf("%d,%d,%d \n",*p[0],*p[1],*p[2]);
    
    
    return 0;
}

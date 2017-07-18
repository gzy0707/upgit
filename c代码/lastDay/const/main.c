//
//  main.c
//  const
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    const好处:
        1: 可以节省内存空间,避免不必要的内存分配
        2: 可以使用const把数据定义为常量,防止别人随意修改
 
 */
void test(){
    
    // const对基本数据类型的作用: 可以让基本数据类型的变量 变成 常量
    // const 有两种写法: 1. 写在数据类型的左边 2.写在数据类型的右边
    const int num = 10;
    // int const num = 10;
    printf("num = %d \n",num);
    // num = 20; //此时报错
    printf("num = %d \n",num);
    
}

int main(int argc, const char * argv[]) {
    /*
        1. 如果const写在指针类型的左边,那么意味着指针指向可以改变,但是指向的内存空间中的值不能改变
        2. const在*右边,表示指针值（指针指向的位置）不可以改变，但指针指向的值可以改变。
     */
//    const char* name = "gzy";
//    printf("name = %s \n",name);
//    name = "lk";
//    printf("name= %s \n",name);
    int num = 10;
    int num2 = 20;
    const int* p = &num;
    //可以修改指向
    p = &num2;
    //*p = 20; 报错,不能更改值
    printf("num2= %d \n",num2);
    
    int a = 10;
    int b = 23;
    //const在*右边
    int* const pp = &a;
    //报错,不能更改指向
    //pp = &b;
    
    //可以更改指向的内存空间中存储的值\
    *pp = 222;
    printf("b = %d\n",b);
    
    
    return 0;
}



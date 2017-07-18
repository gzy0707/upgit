//
//  main.c
//  指针运算
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

void test(){
    
    // char + 1 加的是一个字节数
    // int 类型的指针变量+1 加的是4个字节数(和指针类型的字节数有关)
    int cData = 1;
    int* p = &cData;
    printf("p = %p \n",p);
    printf("p+1 = %p \n",p+1);
    
}

void test1(){
    //pn + pn1 == (pn + pn1) / sizeof(指针指向的类型);
    
    double* p1 = NULL;
    double array[5] = {1.0,2.0,3.0,4.0,5.0};
    p1 = &array[0];
    printf("p1 = %p \n",p1);
    
    p1 = p1 + 1;
    printf("p1 = %p \n",p1);
    //printf("%d \n",*p1);  //3
    
}

int main(int argc, const char * argv[]) {
    //test();
    test1();
    return 0;
}

//
//  main.c
//  05-指针为什么要区分类型
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    所有指针类型都是占用8个字节的存储空间
 
 */

void test(){
    printf("%lu",sizeof(int *));
    printf("%lu",sizeof(short *));
    printf("%lu",sizeof(long *));
    printf("%lu",sizeof(double *));
    
}
int main(int argc, const char * argv[]) {
    //test();
    /*
        1: 变量的地址是变量所在占存储空间的首地址
        2: 指针变量仅仅可以存储一个地址编号,如果没有类型,当通过指针就不知道访问多少个字节的存储空间
        3: 指针区分类型是为了在通过指针访问它所指向的存储空间的时候,能够正确访问
        4: 如果通过一个char类型指针操作一个int类型的变量,如果这个值得二进制数据超过1个字节,那么就会造成错误
        5: 如果通过一个int 类型的指针操作一个char变量,那么你舅会修改了你不该修改的内存,造成程序的逻辑错误
     */
    int num = 0;
    char *p = &num;
    *(int*)p = 256;
    printf("%d\n",num);
    
    return 0;
}






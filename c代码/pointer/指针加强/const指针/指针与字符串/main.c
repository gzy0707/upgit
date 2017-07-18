//
//  main.c
//  指针与字符串
//
//  Created by 罂粟 on 2017/7/8.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    总结:
        1、字符数组存储的字符在栈中,栈是可读可写的,所以字符的内容可以任意修改
        2、使用char类型的指针定义的字符串,它是在常量区的,常量区是一个只读区,它所指向的内容不能修改
    使用场景:
        当你定义的字符串中中的内容,在后面需要修改的时候,就使用 字符数组
 
 
    当你定义的字符串不需要修改的时候,就使用 字符指针来定义字符串
    1、常量区的东西,无论使用多少次,在内存中只有一份
    2、效率高,省内存
    3、里面内容不可以修改,可以保证程序的安全性
 
 */

void test(){
    
    // char* str = "hello"; 等价于 char* str = NULL; str="hello";
    //用字符指针指向一个字符串,也可以表示一个字符串(指针指向的是字符串的首地址)
    char* str = "hello";    //str指针变量指向"hello"的首地址,通过str+1,+2,%s来查找ello
   // str[1] = 'E'; //报错  因为这个指针指向的是常量区的字符串,不能修改所指向的内容
    printf("%s \n",str);
    
    
    char str1[10] = "hello";    //分配10个存储空间,依次存入每个字符
    str1[1] = 'E';
    printf("str的地址--%s \n",str1);
}

void test1(){
    
//    int a;
//    scanf("%d",&a);
    char* str = NULL;
    char myStr[100] = "";
    scanf("%s",myStr);
    str = myStr; //str = &myStr[0];
    printf("%s\n",str);
    
    
}

int main(int argc, const char * argv[]) {
    
    //test();
    test1();
    return 0;
}

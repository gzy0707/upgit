//
//  main.c
//  typedef
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、什么是typedef,它有什么作用?
    typedef可以给一个已知的数据类型起别名(外号)
    
    2、利用typedf给数据类型起别名的格式:
        typedef 原有的数据类型 别名
    
    注意点: 
        1. typedef 不仅能给系统原有的数据类型取别名,也可以给一个自定义的数据类型起别名
        2. 利用typedef 给数据类型起别名,并不会生成一个新的数据类型,仅仅是给原有的数据类型起了一个别名而已
 
 */

//-----------------------给基本数据类型起别名---------------------
// Integer == int
typedef int Integer;
typedef Integer myInt;
void test(){
    
    Integer num = 10;
    printf("num = %d \n",num);
    
    myInt num2 = 20;
    printf("num2 = %d \n",num2);
}
//-----------------------给结构体类型起别名-----------------------
// 1. 先定义结构体类型,再给类型起别名
/*
 struct Person {
 int age;
 double height;
 char* name;
 };
 // SPerson == struct Person
 typedef struct Person SPerson;
 */

// 2. 定义结构体类型的同时,给结构体类型起别名
/*
 typedef struct Person {
 int age;
 double height;
 char* name;
 } SPerson;
 */

// 3. 定义类型的同时定义变量,并且省略原有类型名称
typedef struct{
    int age;
    double height;
    char* name;
} SPerson;

void test2(){
    
    // 给构造类型起别名
    
    SPerson sp;
    SPerson sp1;
    SPerson sp2;
    /*
     结构体类型定义方式
     1. 先定义类型再定义变量
     2. 定义类型的同时定义变量
     3. 定义类型的同时定义变量,并且省略类型名称
     
     */
}

//-----------------------给枚举类型起别名-----------------------
/*
 1. 先定义枚举类型再定义变量
 2. 定义枚举类型的同时定义变量
 3. 定义枚举类型的同时定义变量,并且省略枚举类型名称
 */

// 1.先定义枚举类型再定义变量
//enum Gender{
//
//    kGenderMale,
//    kGenderFemale
//};
//typedef enum Gender SEX;

// 2.定义枚举类型的同时定义变量
//typedef enum Gender{
//
//    kGenderMale,
//    kGenderFemale
//
//} SEX;

// 3.定义枚举类型的同时定义变量,并且省略枚举类型名称
typedef enum {
    
    kGenderMale,
    kGenderFemale
    
} SEX;

void test3(){
    
    //给枚举取别名
    // enum Gender sex;
    // 枚举类型变量名sex
    SEX sex;
    sex = kGenderMale;
    
}

//-----------------------给指针类型起别名-----------------------
typedef char* String;
void test4(){
    
    //char* name = "阳仔";
    //给指针起别名
    //注意: 如果给指针起别名之后,理由别名定义变量就不用再加*了
    String name = "阳仔";
    printf("name = %s \n",name);
    
}

//-----------------------给函数指针(指向函数的指针)起别名-----------------------
int sum(int v1,int v2){
    
    return v1 + v2;
    
}
int minus(int v1,int v2){
    
    return v1 - v2;
}

//注意点: 如果是给指向函数的指针起别名,那么指向函数的指针的指针名称就是它的别名
// functionPointer == int(* functionPointer)(int,int)
typedef int(*functionPointer)(int,int);
int main(int argc, const char * argv[]) {
    //定义一个函数指针
    // 没起别名的写法
    /*
    int (*sumP)(int,int );
    sumP = sum;
    printf("sum = %d \n",sum(10, 20));
    
    int (*minusP)(int ,int) = minus;
    minusP = minus;
    printf("minus = %d \n",minus(20, 10)); 
     */
    
    // 起别名的写法
    functionPointer sumP = sum;
    printf("sump =%d \n",sumP(10,20));
    
    functionPointer minusP = minus;
    printf("minusP =%d \n",minusP(20,10));
    
    return 0;
}






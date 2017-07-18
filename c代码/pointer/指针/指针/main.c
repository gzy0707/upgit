//
//  main.c
//  指针
//
//  Created by 罂粟 on 2017/7/6.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
void test(){
    
    int nData = 100;
    int* pnData = &nData;
    
    printf("&nData = %p \n",&nData);
    printf("pnData = %p \n",pnData);
    
    printf("*pnData = %d \n",*pnData); //此时的*号,表示取出指针变量pnData所指向的nData地址的值
    
    *pnData = 200;
    //printf("*pnData = %d \n",*pnData);
    printf("nData = %d \n",nData);
    
}

//指针练习题
void test1(){
    
    double* head = NULL;
    double salary = 800.75;
    head = &salary;
    
    printf("&salary = %p \n",&salary);
    printf("head = %p \n",head);
    if (head == &salary) {
        printf("相同!\n");
    }
    printf("salary = %.2lf \n",salary);
    printf("*head = %.2lf \n", *head);
    
    
    double* tail = NULL;
    tail = head;    // tail = &salary;
    printf("tail = %p \n",tail);
    
    printf("*tail = %.2lf \n",*tail);
    
    *tail = 3023.25;
    printf("*head = %.2lf \n", *head);
    
    //int age = 28;
    //head = &age;    //error 类型不符合
    
    *tail += 100;
    printf("salary = %.2lf \n",salary);
    
    printf("sizeOf head %ld \n",sizeof(head));
    printf("sizeOf tail %ld \n",sizeof(tail));
    printf("sizeOf salary %ld \n",sizeof(salary));
    
}


void test3(){
    
    //定义所有基本数据类型变量,并初始化
    int num1 = 10;
    short num2 = 11;
    long num3 = 12;
    double num4 = 12.5;
    float num5 = 3.14f;
    char num6 = 'A';
    
    //定义所有基本数据类型指针变量,并初始化
    int *p1 = &num1;
    short *p2 = &num2;
    long *p3 = &num3;
    double *p4 = &num4;
    float *p5 = &num5;
    char *p6 = &num6;
    printf("*p1 = %d \n",*p1);
    printf("*p2 = %hd \n",*p2);
    printf("*p3 = %ld \n",*p3);
    printf("*p4 = %.1lf \n",*p4);
    printf("*p5 = %.2f \n",*p5);
    printf("*p6 = %c \n",*p6);

    //使用指针改变各变量值,使用变量重新输出
    *p1 = 20;
    *p2 = 31;
    *p3 = 42;
    *p4 = 55.2;
    *p5 = 6.14f;
    *p6 = 'B';
    
    printf("num1 = %d \n",*p1);
    printf("num2 = %hd \n",num2);
    printf("num3 = %ld \n",num3);
    printf("num4 = %.1lf \n",num4);
    printf("num5 = %.2f \n",num5);
    printf("num6 = %c \n",num6);
}



int main(int argc, const char * argv[]) {
    //test();
    //test1();
    //test3();
    test2();
    
   
    
    return 0;
}







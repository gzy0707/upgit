//
//  main.c
//  指针与一维数组练习
//
//  Created by 罂粟 on 2017/7/8.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

void test(){
    
    double salary[5] = {1500,2000.43,1202.78,8000.32,5000};
    double* p = salary;
    for (int i = 0; i < (sizeof(salary) / sizeof(double)); i++) {
        printf("%.2lf,",*(p+i));
    }
    printf("\n");
    
    //显示数组中第一个元素地址
    printf("显示数组中第一个元素地址\n");
    double* ps = &salary[1];
    printf("salary = %p \n",salary);
    printf("&salary[0] = %p \n",&salary[0]);
    printf("p = %p \n",p);
    printf("ps-1 = %p \n",ps-1);
    
    //显示数组中最后一个元素的地址
    printf("显示数组中最后一个元素地址\n");
    //ps = &salary[4];
    printf("ps+3 = %p \n",ps+3);
    printf("salary = %p \n",salary+4);
    
    double* head = salary;
    printf("*head = %.2lf \n",*head);
    double* tail = &salary[4];
    printf("*tail = %.2lf \n",*tail);
    printf("tail - head = %ld \n",(tail-head));
    
    head++;
    head++;
    printf("*head = %.2f \n",*head);
    
    head -= 2;
    for (int i = 0; i<5; i++) {
        printf("*(head+%d) = %.2f \n",i,*(head+i));
    }
    
    for (int i = 0; i<=4; i++) {
        printf("*(tail-%d)  = %.2f \n",i,*(tail-i));
    }
}

int main(int argc, const char * argv[]) {
    test();
    
    
    return 0;
}

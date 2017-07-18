//
//  main.c
//  结构体存储细节
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、结构体变量的地址就是第一个成员的地址
    2、结构体类型本身是不占存储空间的,就如同int
    3、对于相同数据类型的结构体所占用的存储空间为所有成员之和
 
 */
void test(){
   
    // 结构体类型本身不占存储空间
    struct Date{
        int year;
        int month;
        int day;
        
    };
    struct Date date;
    
    printf("%p \n",&date);
    printf("%p \n",&date.year);
    
    size_t size = sizeof(struct Date);
    printf("%lu \n",size);
    
}

/*
    为了快速访问数据,结构体内部有一个补齐算法,默认情况它一定占用存储空间最大的成员的倍数
    1、默认情况下一组占用多少个字节,取决于最大成员所占用的存储空间
 
 */
int main(int argc, const char * argv[]) {

    struct Person{
    
        int age;
        char sex;
        
    };
    size_t size = sizeof(struct Person);
    printf("%lu\n",size);
    return 0;
}










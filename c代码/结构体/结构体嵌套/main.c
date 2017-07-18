//
//  main.c
//  结构体嵌套
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
     结构体嵌套： 一个结构体内部可以有其他类型的结构体成员
 
 */


//再定义一个time的结构体
struct Time{
    int hour;
    int minute;
    int second;
    
    
};
//定义一个日期的结构体
struct Date{
    int year;
    int month;
    int day;
    struct Time time;
};

//定义一个员工的结构体
struct Employee{
    int id;
    char* name;
    struct Date inDate; //入职如期
    struct Date birthday; //生日
    struct Date outDate; //离职
};
void test(){
    
    struct Employee emp = {1,"张三",{2014,10,1,{12,12,12}},{1998,10,2},{2017,7,12}};
    printf("id = %d ,name=%s,入职日期=%d.%d.%d %d:%d:%d \n",emp.id,emp.name,emp.inDate.year,emp.inDate.month,emp.inDate.day,
           emp.inDate.time.hour,emp.inDate.time.minute,emp.inDate.time.second);
    
}
/**
    注意点:
    1、结构体不可以嵌套自己,不能有自己这样类型的成员
    2、结构体可以嵌套自己类型的指针
 
 */

struct Person{
    char* name;
    // struct person son;  不能嵌套自己
    struct Person* son;
};

int main(int argc, const char * argv[]) {
    //test();
    struct Person father ={"father"};
    struct Person son = {"son"};
    father.son = &son;
    printf("son name = %s\n",father.son->name);
    
    return 0;
}

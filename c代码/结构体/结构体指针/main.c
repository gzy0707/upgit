//
//  main.c
//  结构体指针
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/**
    结构体指针: 指向结构体的指针
    
    结构类型* 指针变量名称
 
 */

struct Student{
    char* name;
    int id; //学号
    double score; //成绩

};
int main(int argc, const char * argv[]) {
    
    struct Student stu = {"洋洋",1,89.0};
    printf("name = %s,id = %d,score = %.2lf \n",stu.name,stu.id,stu.score);
    
    //定义结构体指针
    struct Student* sp = &stu;
    //通过指针访问结构体成员的第一种方式
    (*sp).name = "😋";
    printf("name = %s,id = %d,score = %.2lf \n",stu.name,stu.id,stu.score);
    
    //第二种方式(重点)
    sp->name = "桂阳";
    sp->id = 2;
    sp->score = 22.3;
    printf("name = %s,id = %d,score = %.2lf \n",stu.name,stu.id,stu.score);
    
    return 0;
}

//
//  main.c
//  结构体与函数
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    1、结构体变量作为函数参数
 */
struct Person{
    char* name;
    int age;
    float height;
};

// 写一个函数打印结构体Person
void printPerson(struct Person person){
    
    printf("name = %s,age=%d,height =%.2f\n",person.name,person.age,person.height);
    
}
//结构体作为函数参数传递是值传递
void changePerson(struct Person person){
    
    person.age = 100;
}

//结构体指针作为函数参数是地址传递
void changePerson2(struct Person *personPointer){
    
    personPointer->age = 23;
}

//结构体数组作为函数参数是地址传递
void changePersons(struct Person persons[]){
    
    persons[1].age = 57;
}

//写一个函数遍历结构体数组
void printPersons(struct Person persons[],int length){
    
    for (int i = 0; i < length; i++) {
        printf("name = %s,age = %d,height = %.2f \n",persons[i].name,persons[i].age,persons[i].height);
    }
    
}
int main(int argc, const char * argv[]) {
    
    struct Person p = {"雨",12,1.2};
    printPerson(p);
    
    //结构体作为函数参数传递是值传递
    changePerson(p);
    printPerson(p);
    
    //结构体指针作为函数参数是地址传递
    changePerson2(&p);
    printPerson(p);
    
    //结构体数组作为函数参数是地址传递
    struct Person ps[] = {{"小李",88,2.3},{"小王",92,8.3}};
    changePersons(ps);
    printPerson(ps[1]);
    
    //写一个函数遍历结构体数组
    int len = sizeof(ps) / sizeof(struct Person);
    printPersons(ps, len);
    

    return 0;
}

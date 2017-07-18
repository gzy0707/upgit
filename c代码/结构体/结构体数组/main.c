//
//  main.c
//  结构体数组
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    结构体数组: 数组元素为结构体数组
    定义结构体数组:
    结构体类型   数组名称[元素个数]

 */

//一般情况下结构体类型都是定义在函数外部
struct Dog{
    char* name;
    int age;

};

void test(){
    
    // 如果没有显式初始化的结构体,那么这个结构体中所有成员都会被初始化为0
    struct Dog dogs[2] = {{"大黄",1},{"小黄",2}};
    //计算数组的元素个数
    int len = sizeof(dogs) / sizeof(struct Dog);
    for (int i = 0; i < len; i++) {
        printf("age = %d , name = %s \n",dogs[i].age,dogs[i].name);
    }
    
}


int main(int argc, const char * argv[]) {
    
    test();
    
    
    
    return 0;
}






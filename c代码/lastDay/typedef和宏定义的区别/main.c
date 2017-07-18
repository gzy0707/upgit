//
//  main.c
//  typedef和宏定义的区别
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
typedef int myInt;
#define Integer int

typedef char* String;
#define STRING char*
//一般情况下如果要给数据类型起一个名称建议用typedef,不要用define
int main(int argc, const char * argv[]) {
    /*
    int num = 10;
    printf("num = %d \n",num);
    myInt num2 = 20;
    printf("num2 = %d \n",num2);
    
    // int 替换 Integer
    Integer score = 99;
    printf("score = %d \n",score);
    */
    
   /*
    char* name = "gzy";
    printf("name = %s \n",name);
    
    String name2 = "gcy";
    printf("name2 = %s \n",name2);
    
    STRING name3 = "ggg";
    printf("name3 = %s \n",name3);
    */
    
    String name1,name2;
    name1 = "gzy";
    name2 = "gcy";
    printf("name1 = %s,name2 = %s \n",name1,name2);
    
    //STRING name3,name4; //此处相当于 char* name3; char name4;
    STRING name3,name4;
    name3 = "ggg";
    name4 = "yyy";
    printf("name3 = %s,name4 = %s \n",name3,name4); //程序崩溃
    
    return 0;
}

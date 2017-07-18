//
//  main.c
//  04-多级指针(了解)
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
void test(){
    
    int num = 10;
    //指针变量p指向num的内存地址
    int *p = &num;
    *p = 20;    //每个指针变量也有内存
    printf("%d\n",num);
    
    //再定义一个指针来指向变量p
    int **pp = &p;
    **pp = 30;  //二级指针指向一级指针变量的内存地址
    printf("%d\n",num);
    
    int ***ppp = &pp;
    ***ppp = 40;
    printf("%d\n",num);
    
}

//多级指针使用
void readFile(char **error){
    
    *error = "读取错误!";
    
}
int main(int argc, const char * argv[]) {
   
    char *error;
    readFile(&error);
    printf("%s\n",error);
    
    return 0;
}





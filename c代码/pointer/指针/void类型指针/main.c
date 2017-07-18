//
//  main.c
//  void类型指针
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

void test(){
    
    int nData = 10;
    
    void* p = &nData;
    *(int*)p = 20;
    printf("nData = %d \n",*(int*)p);
    
    
    char temp = 'a';
    p = &temp;
    *(char*)p = 'c';
    
    printf("nData = %c \n",*(char*)p);
    
}

void test1(){
   
    char cData = 'a';
    void* p = NULL;
    p = &cData;
    
    printf("%c \n",*(char*)p);
    printf("%p \n",p);
}

int main(int argc, const char * argv[]) {
    //test();
    test1();
    
    return 0;
}

//
//  main.c
//  函数与指针
//
//  Created by 罂粟 on 2017/7/8.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//函数的返回值是一个指针: 函数的返回值类型必须定义为指针类型
int* test(int a ,int b){

    if (a > b) {
        return &a;
    }
    return &b;
    
}

//冒泡排序
void sortWithArray(char* arr){
    //int length = sizeof(arr) / sizeof(char);
    int length = (int)strlen(arr);
    
    for (int i = 0; i < length -1 ; i++) {
        int flag = 0;   //标记
        for (int j = 0; j < length -1 -i;j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int* p = test(2, 1);
    printf("%p \n",p);
    
    char arr[] = "";
    scanf("%s",arr);
    sortWithArray(arr);
    printf("冒泡排序:%s\n",arr);
    
    return 0;
}







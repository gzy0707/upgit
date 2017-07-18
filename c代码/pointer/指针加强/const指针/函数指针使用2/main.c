//
//  main.c
//  函数指针使用2
//
//  Created by 罂粟 on 2017/7/9.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

void showMessage(void (*p)()){
    
    printf("内容如下: 由调用者指定\n");
    p();
}
void showFunc(){
    
    printf("今天下雨,明天不上班!\n");
}
void showFunc2(){
    printf("今天一起河边吟诗作对可好?\n");
}



void loadView(void (*pView)()){
    
    printf("展示用户定制的视图如下!\n");
    pView();
}
void imageView(){
    printf("加载了一张图片!\n");
}
void labelView(){
    printf("加载了一个标签!\n");
}



int mysortgz(int a ,int b){
    if (a < b) {
        return 1;
    }else{
        return -1;
    }
}
// 函数作为参数传递(灵活)
void sortArrayFunc(int array[], int length, int (*sortgz)(int a , int b) ){
    
    for (int i = 1; i<=length; i++) {
        for (int j = 0; j < length-i; j++) {
            if (sortgz(array[j],array[j+1]) > 0) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
//打印数组
void printArr(int arr[],int length){
    for (int i = 0 ; i < length; i++) {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    
    //showMessage(showFunc2);
    //loadView(imageView);
    
    int arr[10] = {1,5,4,3,9,6,0,2,8,7};
    sortArrayFunc(arr, 10, mysortgz);
    printArr(arr, 10);
    return 0;
}








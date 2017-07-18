//
//  main.c
//  指针与一维数组
//
//  Created by 罂粟 on 2017/7/7.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

void test(){
    
    int arr[5] = {1,2,3,4,5};
    
    //1 数组的地址就是数组所占存储空间的首地址
    int* p = &arr[0];   //0x7fff5fbff720
    int* p1 = arr;      //0x7fff5fbff720
    printf("数组第一个元素地址:%p \n",p);
    printf("数组名地址: %p \n",p1);
    
    //2 在实际数组元素前面加一个& 与使用变量相同
    p = &arr[1];
    *p = arr[1];
    //    *p == arr[1];
    *(p+1) =arr[1];
    printf("%d \n",arr[1]);
    printf("%d \n",*p);
    printf("*(p+1) = %d \n",*(p+1));
    
    //3 在数组名后面加偏移量,改变指向的数组元素
    p = &arr[0];
    p++;
    printf("*p = %d \n",*p);
    p++;
    printf("*p = %d \n",*p);
    
}

//定义整形数组长度为10,分别用指针和数组名访问数组中的元素\
(利用for循环输出数组值,指针指向数组首地址)
void test2(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arr;
    int count = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < count; i++) {
        printf("arr[%d] = %d \n",i,arr[i]);
        printf("p[%d] = %d \n",i,p[i]);
        printf("*(array+%d) = %d \n",i,*(arr+i));
        printf("*(p+%d) = %d \n",i,*(p+i));
        printf("----------------\n");
    }
    printf("\n");
    
}

int main(int argc, const char * argv[]) {
    //test();
    // 数组名 和 指针 都是地址
//    int array[5] = {1,2,3,4,5};
//    int* p = array; //指针变量指向数组地址
//    printf("p = %p  array = %p \n",p,array);
//    /*
//        p[0] == *(p+0) == array[0] == *(array+0)
//        p[1] == *(p+1) == array[1] == *(array+1)
//        p[2] == *(p+2) == array[2] == *(array+2)
//     */
//
//    printf("array[0] = %d \n",array[0]);
//    printf("p[1] = %d\n",p[1]);
//    printf("*(array+2) = %d \n",*(array+2));
//    printf("*(p+3) = %d \n",*(p+3));
    
    /*
        1: 访问数组有两种方式
            1):下标法访问 数组名[下标]   2):指针[指针指向位置的偏移量]
        
        2: 指针法访问:
            *(array+0)  *(p+0)
     */
    
    test2();
    
    
    return 0;
}











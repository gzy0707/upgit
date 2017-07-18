//
//  main.c
//  数组指针
//
//  Created by 罂粟 on 2017/7/9.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    定义一个指向一维数组的指针:
    数据类型 (*指针名称)[所指向的一维数组的元素个数]
    
    指针 + 整数 === 指针中的值+所指向数据类型的长度 * 整数
 
 
    指针的指向可以改变
    数组的指针不可以改变
 
 //二维数组名实质是一个指向一维数组的指针
 */
int main(int argc, const char * argv[]) {
    
    //二维数组名实质是一个指向一维数组的指针
    int nums[3][2] = {{1,2},{3,4},{5,6}};
    //定义一个指向一维数组的指针
    int (*ps)[3] = NULL;
    ps = nums;  //可以认为ps 与 nums是等价的
    
    int rs = ps[0][1];
    printf("rs = %d \n",rs);
    
    printf("%p \n",nums);
    printf("%p \n",nums+1); //加一个一维数组的长度
    printf("%p \n",ps);
    
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<2; j++) {
            printf("%d ",ps[i][j]);
        }
        printf("\n");
    }
    return 0;
}

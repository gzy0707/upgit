//
//  main.c
//  带参宏定义
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
int sum(int v1,int v2){
    
    return v1 + v2;
}
/*
 #define 代表要定义一个宏
 SUM 宏名
 (v1,v2)参数,不需要写数据类型
 v1+v2 用于替换的内容
 
 宏定义并不会做任何运算,无论是有参数还是没有参数都仅仅是在翻译成0和1之前做一个简单的"替换"
 
 带参数的宏定义的注意点:
    1. 一般情况下建议写带参数的宏的时候,让每个参数都加上一个()
    2. 一般情况下建议写带参数的宏的时候,给结果也加上一个()
 */


/*
    什么时候使用带参数宏定义,什么时候使用函数
        如果函数内部功能比较简单,仅仅是做一些简单的运算,那么可以使用宏定义,使用宏定义效率
    更高,运行速度更快
        如果函数内部的功能比较浮渣,不仅仅是一些简单的运算,那么建议使用函数
 */


#define SUM(v1,v2) v1+v2
// 要求定义一个带参数的宏,用于计算两个变量的乘积
//#define CF(v1,v2) v1*v2
#define CF(v1,v2) (v1)*(v2)

// 要求定义一个带参数的宏,用于计算某个数的平方
//#define PF(v1) (v1)*(v1)
#define PFF(v1) ((v1)*(v1))
int main(int argc, const char * argv[]) {
    
//    int a = 10;
//    int b = 15;
////    int result = sum(a,b);
//    int result = SUM(a, b);
//    printf("result = %d\n",result);
    
// 要求定义一个带参数的宏,用于计算两个变量的乘积
    int rs = CF(4+4, 5+5);
    printf("rs = %d \n",rs);

// 要求定义一个带参数的宏,用于计算某个数的平方
//    int rs = PF(3)/PF(3)*PF(3); //我们想要的结果为9/9*9=9,但是结果为81
//    printf("rs = %d \n",rs);
//    int rs = PFF(3)/PFF(3)*PFF(3);
//    printf("rs = %d \n",rs);
    
    return 0;
}




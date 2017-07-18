//
//  main.c
//  文件包含
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#include "zs.h"
//#include "zs.h" //重复倒入会降低编译效率
/*
    #include<>
    <>会先去编译器环境下查找,找不到再去系统的环境下查找
    
    #include ""
    ""会先在当前文件查找,找不到再去编译器环境下查找,找不到再去系统的环境下查找
    
    作用:
    将""或者<>中的内容完全拷贝过来
 
    注意点:
    如何正确编写.h文件  (头文件卫士,防止重复声明)
    如何防止循环拷贝    (A拷贝B,B拷贝A)
    间接拷贝问题       
 */
int main(int argc, const char * argv[]) {
    
    int rs = sum(3, 3);
    printf("rs = %d\n",rs);
    
    return 0;
}




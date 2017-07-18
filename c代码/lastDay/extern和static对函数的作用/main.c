//
//  main.c
//  extern和static对函数的作用
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#include "zs.h"
/*
    只要在函数的返回值前面加上static就可以让函数变为内部函数,其他文件就不能访问了
 
 */
int main(int argc, const char * argv[]) {
    
    test();

    return 0;
}

//
//  main.c
//  二维数组的指针
//
//  Created by 罂粟 on 2017/7/9.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //二维数组实质是一个 指向一维数组的指针
    int array[2][3] = {{1,2,3},{4,5,6}};
    int(*p)[2][3] = NULL;
    p = &array;
    
    
    return 0;
}

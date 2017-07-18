//
//  main.c
//  条件编译的其他写法
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#define SCORE 100
#define COUNT 50

int main(int argc, const char * argv[]) {
    
#ifdef SCORE
    printf("score \n");
#elif COUNT
    printf("count \n");
#else
    printf("OTHER \n");
    
#endif
    
//#ifndef SCORE   //如果没有定义SCORE会输出no score
//    printf("no score \n");
//#else
//    printf("score \n");
//#endif
    return 0;
}

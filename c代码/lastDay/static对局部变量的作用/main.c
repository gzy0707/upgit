//
//  main.c
//  static对局部变量的作用
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    static应用场景:
            当某个方法的调用频率非常高,而该方法中更有些变量的值是固定不变的
            那么这个时候就可以使用static来修饰该变量,让该变量只开辟一次存储空间,
            那么可以提高程序的效率和性能
 
 */

void test(){
    
    int a = 0;//局部变量
    //当使用static修饰局部变量,那么会延长局部变量的声明周期,并且会更改局部变量存储的位置,\
        将局部变量从栈转移到静态区
    //只要修饰static修饰局部变量之后,当执行到定义局部变量的代码就会分配存储空间,程序结束后\
        才会释放该存储空间
    static int b = 0;
    a++;
    b++;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    printf("----------\n");
}
int main(int argc, const char * argv[]) {
    
    test();
    test();
    
    
    return 0;
}

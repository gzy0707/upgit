//
//  main.c
//  动态存储区
//
//  Created by 罂粟 on 2017/7/10.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
    堆: 动态存储区
    1、它的内存由程序猿管理
    使用动态存储区
    1、导入stdilib.h
        malloc(size_t size)
    向操作系统申请堆中一块空间,如果操作系统分配成功,就会返回这个存储空间的地址,否则返回为NULL
 
    2、 free(void *);   告诉操作系统这块存储空间不再使用了
        有一个malloc 就必须有一个free与之对应,否则造成内存泄漏
        释放过的指针就不能再释放了,否则程序会崩溃了
 
 */
int main(int argc, const char * argv[]) {
    
    //向系统申请一块int类型的存储空间
    int* pi = malloc(sizeof(int));
    if (pi != NULL) {
        // 使用内存
        *pi = 20;
        printf("%d \n",*pi);
        
        //释放所申请的内存
        free(pi);
        printf("%d \n",*pi);
        
        //清空指针
        pi = NULL;
        
        //清空后的指针再使用free不会有任何效果,free对空指针是无效的
        // free(pi) 不能重复释放
    }
    
    return 0;
}






//
//  main.m
//  TheFirstOCProgram
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

// Foundation.h称为主头文件,主头文件中包括所有工具头文件,避免每次使用某个工具都要导入这个工具的.h
// 工具箱地址: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/Frameworks
// 所有的主头文件的名称都和工具箱的名称一致\
    所有的主头文件都是导入了该工具箱中所有的头文件
#import <Foundation/Foundation.h>
#include <stdio.h>
#import "zs.h"
/*
    1. import 的功能和include一样,是将右边的文件拷贝到当前import的位置
    2. 为了降低程序员的负担,防止重复导入,避免程序员去书写头文件卫士,oc给了一个新的预处理指令import
    3. import优点: 会自动防止重复拷贝
 
     因为OC完全兼容C,所以可以在OC程序中编写C语言代码
    并且可以将C语言的源文件和OC的源文件组合在一起生成可执行文件
 */
int main(int argc, const char * argv[]) {
    
    NSLog(@"HelloWorld!");
    /*
     printf和NSLog的区别:
     1. NSLog会自动换行
     2. NSLog会输出内容时会附加一些系统信息
     3. NSLog和printf接收的参数不一样
     
     */
    printf("helloWorld");
    int rs = sum(1, 1);
    NSLog(@"sum = %d",rs);
    return 0;
}

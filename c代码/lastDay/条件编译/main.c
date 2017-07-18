//
//  main.c
//  条件编译
//
//  Created by 罂粟 on 2017/7/13.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
#define SCORE 90
/*
    1、条件编译和选择结构if的共同点:
        都可以对给定的条件进行判断,添加满足或者不满足都可以执行特定的代码
    2、不同点:
        2.1 声明周期不同
            if 运行时期
            #if 编译之前
        2.2 #if需要一个明确的结束符号 #endif
            为什么 需要一个明确的结束符号?
                如果省略#endif,那么系统就不知道条件编译的范围,那么会将满足条件之后的第二个
                    条件之后的所有内容清除
        2.3 if会将if语句所有的代码都编译到二进制中
            #if只会将满足条件的部分一直到下一个条件的部分 编译到二进制中
    
    条件编译的优点:
    1、缩小应用程序的大小
    
    应用场景:
        一般用于调试和发布阶段进行测试
    调试阶段: 程序写代码的阶段
    发布阶段: 上传到AppStore的阶段
 
 */
int main(int argc, const char * argv[]) {
    // 条件编译 和 if非常相似
    // if选择结构会对给定条件进行判断,如果条件满足就执行if后面括号的内容
    // 条件编译也一样,会对给定的条件进行判断,如果条件满足就编译条件后面的内容
    
//    int score = 90;
//    if (score == 100) {
//        printf("厉害\n");
//        printf("大红花\n");
//    }else if (score == 90){
//        printf("牛X\n");
//        printf("小红花\n");
//    }else{
//        printf("加油\n");
//        printf("别哭\n");
//    }
    /*
        预处理指令什么时候执行? 编译之前
        变量什么时候定义? 执行了才会定义
     
        注意点: 条件编译不能用来判断变量,因为不在同一个生命周期
        一般情况下,条件编译和宏定义结合在一起使用
     
     */
    
#if SCORE == 100
    printf("厉害\n");
    printf("大红花\n");
#elif SCORE == 90
    printf("牛X\n");
    printf("小红花\n");
#else
    printf("加油\n");
    printf("别哭\n");
#endif  //作为结束符号
    
    return 0;
}

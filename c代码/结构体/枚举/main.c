//
//  main.c
//  枚举
//
//  Created by 罂粟 on 2017/7/12.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
    枚举: 一个一个列举出来
    枚举作用: 消除魔法数字
    使用场景: 当某个东西只有那么几个取值的时候,就使用枚举
    定义枚举的格式:
        enum 枚举类型的名称{
        元素,//逗号分隔
        };
 */

// 定义性别的枚举类型
enum Sex{
    MAN,
    WOMAN,
    OTHER,
};

/*
    注意点:
    1、枚举类型定义中: 所有元素都是整形常量
    2、枚举类型的本质就是整形
 
    int MAN = 12; //枚举定义之后,后面不可定义与成员相同变量
 */
void test(){
    
    // 在代码中出现的这种表示特殊含义的数字,我们称为魔法数字
    //枚举类型的变量gender
    enum Sex gender;
    gender = MAN;
    printf("%d\n",gender);
    
    //   gender = 1;   //这里不能把数字赋值给一个枚举变量,这样枚举存在的意义就没有了
    
}

// 可以指定枚举中每一个元素的值
enum Season{
    Spring = 1,
    Summer,
    Autumn = 5,
    Winter
};

void printSeason(enum Season season){
    
    switch (season) {
        case Spring:
            printf("现在是春季!\n");
            break;
        case Summer:
            printf("现在是夏季!\n");
            break;
        case Autumn:
            printf("现在是秋季!\n");
            break;
        case Winter:
            printf("现在是冬季!\n");
            break;
        default:
            break;
    }
    
}
int main(int argc, const char * argv[]) {

    printf("%d,%d,%d \n",MAN,WOMAN,OTHER);
    printf("%d,%d,%d,%d \n",Spring,Summer,Autumn,Winter);
    
    //枚举类型的变量season
    enum Season season = Spring;
    printSeason(season);
    
    return 0;
}





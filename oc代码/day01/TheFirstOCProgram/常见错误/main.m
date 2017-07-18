//
//  main.m
//  常见错误
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    常见错误:
    1. 只有类的声明,没有类的实现
    2. 漏掉@end0
    3. @interface 和 implementation嵌套
    4. 成员变量没有写在大括号里面
    5. 方法的声明写在大括号里面
    6. 成语变量不能在{}中进行初始化,不能被直接拿出去访问
    7. 方法不能当做函数一样使用
    8. OC方法只能声明在@interface和@end之间,只能实现在@implementation和@end之间
        也就是说OC方法不能独立于类存在
    9. C函数不属于类,跟类没有联系,C函数只归定义函数的文件所有
    10. C函数不能访问OC对象的成员
    11. 低级错误: 方法有声明,实现的时候写成了函数
    12. OC可以没有@interface同样可以定义一个类
    13. 成员变量和方法不能用static等关键字修饰,不要和C语言混淆
 
 */

int main(int argc, const char * argv[]) {
    
    return 0;
}

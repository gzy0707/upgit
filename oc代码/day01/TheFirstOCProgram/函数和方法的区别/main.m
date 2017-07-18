//
//  main.m
//  函数和方法的区别
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    方法和函数的区别:
    1. 函数属于整个文件,文件属于某一个类
        方法只能定义再类中
    2. 函数可以直接调用,方法必须使用对象或者类来调用
        注意: 虽然函数属于整个文件,但是如果把函数写在类的声明中不会被识别
    3. 不能把函数当做方法来用,也不能把方法当中函数来用

    方法的注意点:
    > 方法可以没有声明只有实现
    > 方法可以只有声明没有实现,编译不会保存,但是运行会报错
    如果方法只有声明没有实现,那么运行时会报错:
    reason: '+[Person demo]: unrecognized selector sent to class 0x100001140'
    发送了一个不能识别的消息,在Person类中没有+开头的demo方法
    reason: '-[Person test]: unrecognized selector sent to instance 0x1003026b0'
 
 
    类的注意点:
    类也可以没有声明只有实现:
    注意: 开发中不建议这样写!!
 
 */
@interface Person : NSObject
- (void) test;
+ (void) demo;
@end

@implementation Person

- (void) test
{
    NSLog(@"test");
}
+ (void) demo
{
    NSLog(@"demo");
}

@end

extern void sum();
static void minus();
// 外部函数
extern void sum()
{
    printf("sum \n");
}

// 内部函数
static void minus()
{
    printf("minus \n");
}


int main(int argc, const char * argv[]) {
    
    //[Person demo];
    Person *p = [Person new];
    [p test];
    
    return 0;
}




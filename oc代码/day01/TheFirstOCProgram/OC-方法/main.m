//
//  main.m
//  第一个OC类
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>


//1. 如何编写类的声明

@interface Iphone : NSObject
//成员变量(属性)
{

@public
    float _model; // 型号
    int _cpu;
    double _size;
    char* _color;
}
// 行为
// OC中的行为和C语言中的函数一样,都是用来保存一段特定功能的代码
// C语言中定义一个函数,分为声明和实现
// OC中定义一个方法,也分为声明和实现,声明写在@interface中,实现写在@implementation中

/*
    C语言的函数分为: 内部函数和外部函数
    OC中的方法也分为两种: 类方法 和 对象方法
    OC中的类方法用 + 表示,对象方法用 - 表示
 
 */

// 编写C语言函数的规律: 1. 确定函数名称 2.确定形参 3.确定返回值 4.确定返回值类型
// 编写OC方法: 和C语言一样
// 注意: OC中的方法,如果没有形参不需要写(),直接写一个; \
        因为OC方法中的()有特殊用途,用来括住数据类型的
- (void) about;

@end

//2. 如何编写类的实现
@implementation Iphone

// 行为的实现
- (void) about{
    
//    NSLog(@"打印本机信息");
    // 如果在对象方法中想访问该对象的属性,直接写_属性名称即可
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %s",_model,_size,_cpu,_color);
}

@end


int main(int argc, const char * argv[]) {
//OC中的类其实本质就是一个结构体,所有p这个指针其实就是指向了一个结构体
    
    // 通过类创建对象
    Iphone *p = [Iphone new];
    // 修改对象的属性
    p->_model = 4;
    p->_cpu = 3;
    p->_size = 5.5;
    p->_color = "黑色";
    
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %s",p->_model,p->_size,p->_cpu,p->_color);

    //如果给对象发消息(调用方法)
    // [类名/对象名称 方法名];
    [p about];
    
    return 0;
}







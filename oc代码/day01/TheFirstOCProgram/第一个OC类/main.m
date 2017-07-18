//
//  main.m
//  第一个OC类
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    C语言中函数分为声明和实现
    OC中定义一个类也分为声明和实现,也就是说以后我们在OC中定义类,就是在写类的声明和实现
 */


//1. 如何编写类的声明
//声明一个类的目的,就是为了告诉系统,这个类中有哪些属性和行为
//OC类声明中的属性只能写在@interface和@end之间的{}中\
注意: 编写OC类属性的时,建议将所有属性的名称前都加上 _
@interface Iphone : NSObject    //类名后面的:NSObject是为了让我们的类具备创建对象的能力
//成员变量(属性)
{
    // 注意: 默认情况下,OC对象中的属性是不能直接访问的
    @public // 只要让类中的属性公开,以后就可以直接通过一个指向结构体的指针来操作对象中的属性
    float _model; // 型号
    int _cpu;
    double _size;
    char* _color;
}
// 行为

@end

//2. 如何编写类的实现
@implementation Iphone

// 行为的实现

@end


int main(int argc, const char * argv[]) {
    // 如何通过一个类来创建对象
    // 在OC中想要通过一个类来创建一个对象,必须给类发送一个消息(好比C语言中调用方法一样)
    // 如何发送消息? 在OC中想要发送消息先写上    [类名称/对象名称 new];
    /*
        只要通过一个类调用类的new方法,也就是给类发送一个叫做new的消息之后,
        系统内部就会做三件事情
     1. 在堆内存中开辟一份存储空间给Iphone对象p
     2. 初始化Iphone类创建出来的对象中的属性
     3. 返回Iphone类创建出来的对象对应的地址
     */
    // 通过一个Iphone类型的指针接收了 Iphone对象的地址
    // 如果使用给一个指针保存了某一个对象的地址,那么我们就称这个指针位置为某个类型的对象
    // 利用Iphone类型的指针保存了Iphone对象的地址,那么我们就称Iphone类型的指针p为Iphone的对象
    Iphone *p = [Iphone new];
    p->_model = 4;
    p->_cpu = 3;
    p->_size = 5.5;
    p->_color = "黑色";
    //OC中的类其实本质就是一个结构体,所有p这个指针其实就是指向了一个结构体
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %s",p->_model,p->_size,p->_cpu,p->_color);
    
    
    
    struct Person{
        int age;
        char *name;
    };
    struct Person pp;
    struct Person *sp = &pp;
//    (*sp).age = 12;
//    (*sp).name = "gg";
    sp->age = 12;
    sp->name = "gg";
    printf("age = %d,name = %s \n",sp->age,sp->name);
    
    
    return 0;
}







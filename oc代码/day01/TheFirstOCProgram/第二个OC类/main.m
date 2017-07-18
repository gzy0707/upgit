//
//  main.m
//  第二个OC类
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    要求定义一个人类
    事物的名称: 人
    属性: 年龄(age),身高(height),体重(weight)
    行为: 吃饭(eat),睡觉(sleep),散步(walk)
 */
@interface Person : NSObject
{
    @public
    int _age;
    double _height;
    double _weight;
}

- (void) eat:(NSString*) food;

- (void) sleep;

- (void) walk;

@end

@implementation Person

- (void) eat:(NSString*) food
{
    NSLog(@"%@",food);
}

- (void) sleep
{
    NSLog(@"开始睡觉");
}

- (void) walk
{
    NSLog(@"开始散步");
}

@end

int main(int argc, const char * argv[]) {
    
    // 通过类创建对象
    /*
        1. new一块存储空间
        2. 初始化所有属性
        3. 返回指针地址
     
        创建对象的时候返回的地址其实就是类第0个属性的地址
        但是需要注意的是: 类的第0个属性并不是我们编写的_age,而是一个叫做isa属性
        isa是一个指针,占8个字节
     
        其实类也是一个对象,也就意味着Person类也是一个对象
        我们创建对象其实就是通过 类对象 来创建一个 新的对象
        类对象是系统自动帮我们创建的,里面保存了当前对象的所有方法
        而实例对象是程序手动通过new来创建的,而实例对象中有一个隐藏指针指向了创建它的那个类的对象
     */
    Person *p = [Person new];
    p->_age = 18;
    p->_height = 1.75;
    p->_weight = 70.3;
    NSLog(@"age = %i,height = %.2lf,weight = %.2lf",p->_age,p->_height,p->_weight);

    /*
        每次new都会创建一个新的对象,分配一块新的存储空间
        如果修改A的属性,不会影响到B的属性
        一个类可以创建多个对象
     */
    Person *p2 = [Person new];
    p2->_age = 19;
    p2->_height = 1.78;
    p2->_weight = 70.0;
    
    return 0;
}




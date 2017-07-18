//
//  main.m
//  第一个OC类
//
//  Created by 罂粟 on 2017/7/15.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 事物名称: iphone
 属性: 颜色,型号,cpu,尺寸   --- 成员变量
 行为: 打电话,发短信,上网    --- 成员方法
 
 */

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
// 无返回无参数
- (void) about;
// 有返回值没有参数的,读取短信
- (char*) loadMessage;
- (int)call:(int)number;
//- (int)sendMessage:(int) number :(char*) content;
- (int)sendMessageWithNumber:(int) number andContent:(char*) content;

// 计算器
// 如果你不想每次使用方法都需要创建对象开辟存储空间,并且该方法中没有\
    使用到成员变量,那么你可以把这个方法定义为类方法
//- (int)sumWithValue1:(int)value1 andValue2:(int)value2;

//类方法
+ (int)sumWithValue1:(int)value1 andValue2:(int)value2;
+ (void)demo;

@end


//2. 如何编写类的实现
@implementation Iphone

// 行为的实现
- (void) about{
    
    //    NSLog(@"打印本机信息");
    
    // 如果在对象方法中想访问该对象的属性,直接写_属性名称即可
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %s",_model,_size,_cpu,_color);
    
    // 实例方法中调用类方法
//    NSLog(@"sum = %d",[Iphone sumWithValue1:10 andValue2:20]);
    // 实例方法中调用实例方法
    Iphone * o = [Iphone new];
    char* c = [o loadMessage];
    NSLog(@"c = %s",c);
    
    // 实例方法中调用实例方法
    //NSLog(@"%s",[self loadMessage]);

}

- (char*) loadMessage{
    
    return "无语!";
}

- (int)call:(int)number{
    
    NSLog(@"打电话给%d",number);
    return 1;
}
//- (int)sendMessage:(int) number :(char*) content{
- (int)sendMessageWithNumber:(int) number andContent:(char*) content{
    
    NSLog(@"我的电话是:%d,内容:%s",number,content);
    return 1;
}

//注意: 如果声明的是对象方法那么就必须实现对象方法\
        如果声明的是类方法,必须实现类方法
/*
    类方法和对象方法的区别: 
    0. 对象方法以 - 开头
       类方法以 + 开头
    1. 对象方法必须用对象调用
       类方法必须用类名调用
    2. 对象方法中可以直接访问属性(成员变量)
       类方法中不可以直接访问属性(成员变量)
    3. 类方法优点: 调用类方法的效率会比调用对象方法高
    4. 类方法和对象方法可以相互调用
        4.1 对象方法中可以直接调用类方法
        4.2 可以在类方法中间接调用对象方法(注意: 不建议这样使用)
        4.3 类方法可以直接调用其他类方法
        4.4 对象方法中可以直接调用对象方法
 
 类方法的应用场景:
    1. 如果方法中没有使用到属性(成员变量),那么能用类方法就用类方法
 类方法的执行效率比对象方法高
 
    2. 类方法一般用于定义工具方法
    字符串查找
    文件查找
    数据库操作
 
 */
+ (int)sumWithValue1:(int)value1 andValue2:(int)value2{
    
    return value1+value2;
}
// 类方法调用类方法
+ (void)demo{
    
    NSLog(@"%d",[Iphone sumWithValue1:20 andValue2:20]);
    NSLog(@"demo");
    
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
    
    // 注意: OC中的NSLog对C语言的字符串支持不是很好,如果返回是中文的C语言字符串可能输出的是乱码.
    char* c = [p loadMessage];
    NSLog(@"c = %s",c);
    
    [p call:5210];
    //    int num = [p call:5210];
    //    NSLog(@"num = %d",num);
    //    [p sendMessage:1111 :"happyNear"];
    [p sendMessageWithNumber:111 andContent:"happNear"];
    
    int res = [Iphone sumWithValue1:10 andValue2:20];
    NSLog(@"res = %d",res);
    
    [Iphone demo];
    
    [p about];
    
    return 0;
}







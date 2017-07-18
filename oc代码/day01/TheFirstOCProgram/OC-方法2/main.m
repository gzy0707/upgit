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
/*
 C语言的函数:
 1. 没有返回值没有参数     2.有返回值没有参数的
 3. 有返回值有参数的       4. 没有返回值有参数的
 */

// 有返回值没有参数的,读取短信
- (char*) loadMessage;

// 有返回值有参数的, 打电话
// 注意: OC中方法如果有参数,那么每个参数的数据类型前面必须加上一个:
// 注意: 当前这个有参数的方法它的名称是 call:
//      冒号也是方法名称的一部分
- (int)call:(int)number;
// 有返回值,并且有多个参数-- 发短信
// 下面的方法的方法名是 sendMessage::
//- (int)sendMessage:(int) number :(char*) content;

// 为了提高我们的阅读性,OC方法允许我们给每个参数添加一个标签来说明当前参数的含义
// 注意: 标签也是方法名的一部分
// 方法名是: sendMessageWithNumber:andContent:
- (int)sendMessageWithNumber:(int) number andContent:(char*) content;

@end


//2. 如何编写类的实现
@implementation Iphone

// 行为的实现
- (void) about{
    
    //    NSLog(@"打印本机信息");
    // 如果在对象方法中想访问该对象的属性,直接写_属性名称即可
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %s",_model,_size,_cpu,_color);
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
    
    return 0;
}







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

typedef enum{

    kIColorBlack,
    kIColorWhite,
    kIColorTuHaoJ
    
}IColor;

//1. 如何编写类的声明
@interface Iphone : NSObject
//成员变量(属性)
{
    
@public
    float _model; // 型号
    int _cpu;
    double _size;
//    int _color; // 0代表黑色 1代表白色 2代表土豪金
    IColor _color;
}

- (void) about;
- (char*) loadMessage;
- (int) call:(int) number;
- (int) sendMessageWithNumber:(int) number andContent:(char*) content;
+ (int) sumWithValue1:(int) value1 andValue2:(int) value2;
//- (NSString *) colorWithNumber:(IColor)number;
+ (NSString *) colorWithNumber:(IColor)number;

@end


//2. 如何编写类的实现
@implementation Iphone

// 行为的实现
- (void) about
{
    /*
    NSString *name;
    switch (_color) {
        case 0:
            name= @"黑色";
            break;
        case 1:
            name = @"白色";
            break;
        case 2:
            name = @"土豪金";
            break;
        default:
            break;
    }
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %@",_model,_size,_cpu,name);
    */
//    Iphone *p = [Iphone new];
//    NSString *name = [p colorWithNumber:_color];
    NSString *name = [Iphone colorWithNumber:_color];
    NSLog(@"model = %.2f,size = %.2lf,cpu = %d,color = %@",_model,_size,_cpu,name);
    // 实例方法中调用实例方法
    //NSLog(@"%s",[self loadMessage]);
}
// 工具方法. 根据传入的整数返回对应的字符串
+ (NSString *) colorWithNumber:(IColor)number
{
    NSString *name;
    switch (number) {
        case 0:
            name= @"黑色";
            break;
        case 1:
            name = @"白色";
            break;
        case 2:
            name = @"土豪金";
            break;
        default:
            break;
    }
    return name;
}

- (char*) loadMessage
{

    return "无语!";
}
- (int) call:(int) number
{
    
    NSLog(@"打电话给%d",number);
    return 1;
}
- (int) sendMessageWithNumber:(int) number andContent:(char*) content
{
    
    NSLog(@"我的电话是:%d,内容:%s",number,content);
    return 1;
}

/*
 类方法的应用场景:
 1. 如果方法中没有使用到属性(成员变量),那么能用类方法就用类方法
 类方法的执行效率比对象方法高
 
 2. 类方法一般用于定义工具方法
 字符串查找
 文件查找
 数据库操作
 */
+ (int) sumWithValue1:(int) value1 andValue2:(int) value2
{
    
    return value1+value2;
}
// 类方法调用类方法
+ (void)demo
{
    
    NSLog(@"%d",[Iphone sumWithValue1:20 andValue2:20]);
    NSLog(@"demo");
    
}
@end


int main(int argc, const char * argv[]) {
    
    // 创建对象
    Iphone *p = [Iphone new];
    p->_color = kIColorTuHaoJ;
    p->_cpu = 1;
    p->_model = 4;
    p->_size = 5.5;
    
    // 给对象方法消息
    [p about];
    
    return 0;
}







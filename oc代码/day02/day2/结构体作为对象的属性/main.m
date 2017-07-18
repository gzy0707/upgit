//
//  main.m
//  结构体作为对象的属性
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 合理的设计一个”学生“类
 学生有* 姓名* 生日两个属性和说出自己姓名生日方法
 要求利用设计的学生类创建学生对象，并说出自己的姓名和年龄
 
 
 描述学生类
 
 事物名称: 学生(Student)
 属性: 姓名(name),生日(birthday)
 行为: 说出自己的姓名和生日方法(say)
 */
typedef struct{
    int year;
    int month;
    int day;
}Date;

@interface Student : NSObject
{
    @public
    NSString *_name;
    
    Date _birthday; // 结构体作为对象的属性
}

- (void) say;

@end

@implementation Student

- (void) say
{
    NSLog(@"name = %@,year = %i,month = %i,day = %i",_name,_birthday.year,_birthday.month,_birthday.day);
}

@end
int main(int argc, const char * argv[]) {
    
    //1. 创建学生对象
    Student *stu = [Student new];
    //2. 设置学生对象的属性
    stu->_name = @"桂阳";
    
    //1. 结构体只能在定义的时候初始化
    //2. 系统并不清楚它是数组还是结构体
//    stu->_birthday = {1998,2,10};   //报错 因为结构体在创建对象的时候已经被初始化为0了\
                                            不能整体赋值,但是可以逐个赋值
    stu->_birthday = (Date){1998,2,10};
    
//    stu->_birthday.year = 1998;
//    stu->_birthday.month = 2;
//    stu->_birthday.day = 10;
    
    //3. 让学生说出自己的姓名和生日
    [stu say];
    
    return 0;
}

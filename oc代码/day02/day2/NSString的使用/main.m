//
//  main.m
//  NSString的使用
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <string.h>

@interface Iphone : NSObject

- (NSString *) loadMessage;

@end

@implementation Iphone

- (NSString *)loadMessage
{
    // 只需要在C语言字符串前面加上@符号,系统就会自动将C语言字符串转换为OC字符串
    return @"呵呵哒";
}

@end
int main(int argc, const char * argv[]) {
    
    /*
    // C语言中的字符串不是对象
    char *name1 = "lnj";
    char name2[] = "lmj";
    
    // OC中的字符串是一个对象
    // 正是因为OC中的字符串是一个对象,所以它就具备了很多功能
    NSString *str = @"lk";

    Iphone *p = [Iphone new];
    
    // 输出OC字符串使用%@,%@专门用于输出对象类型的
    NSLog(@"%@",[p loadMessage]);
     */
    
    //1. 如何创建OC字符串
//    NSString *str = @"gzy";
    
   // printf("age = %i,height = %f\n",30,1.75);
    // 格式化字符串
    NSString *string = [NSString stringWithFormat:@"age = %i,height = %f\n",30,1.75];
    NSLog(@"string = %@",string);
    
    //2. 如何计算字符串长度
    //C语言
    char name[] = "lnj";
    size_t size = sizeof(name);
    printf("size = %lu \n",size);
    
    size_t lenght = strlen(name);
    printf("lenght = %lu \n",lenght);
    
    //OC
    // 不包含 \0
//    NSString *str = @"lnj";   // 3
    NSString *str = @"桂朝阳";
    NSUInteger len = [str length];
    NSLog(@"len = %lu",len);
    
    return 0;
}




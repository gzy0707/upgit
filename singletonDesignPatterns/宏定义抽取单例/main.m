//
//  main.m
//  宏定义抽取单例
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tools.h"
#import "Person.h"
int main(int argc, const char * argv[]) {

     Tools *t1 = [[Tools alloc] init]; //内部会调用 allocWithZone
     Tools *t2 = [Tools new];// [[alloc] init]  allocWithZone
     Tools *t3 = [Tools shareTools];
     Tools *t4 = [t3 copy];
     Tools *t5 = [t3 mutableCopy];
    NSLog(@"%p, %p, %p, %p, %p", t1, t2, t3, t4, t5);
    
    Person *p1 = [Person sharePerson];
    Person *p2 = [Person sharePerson];
    NSLog(@"%p, %p", p1, p2);
 
    
    // 如何判断当前是ARC还是MRC
    // 可以在编译的时候判断当前是否是ARC
#if __has_feature(objc_arc)
    NSLog(@"ARC");
#else
    NSLog(@"MRC");
#endif
    return 0;
}

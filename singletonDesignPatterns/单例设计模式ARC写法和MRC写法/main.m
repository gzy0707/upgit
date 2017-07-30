//
//  main.m
//  单例ARC写法和MRC写法
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tools.h"
int main(int argc, const char * argv[]) {
    
    // 单例就是无论怎么创建都只能有一个实例对象
    // 如果地址相同就代表着是同一个实例对象
    
    Tools *t1 = [[Tools alloc] init]; //内部会调用 allocWithZone
    Tools *t2 = [Tools new];// [[alloc] init]  allocWithZone
    Tools *t3 = [Tools shareInstance];
    NSLog(@"%p, %p, %p", t1, t2, t3);
     
    
//    Tools *t2 = [[Tools alloc] init];
//    [t2 retain];
//    [t2 retain];
//    [t2 retain];
//    [t2 retain];
//    NSLog(@"retainCount = %lu",[t2 retainCount]);
//    NSLog(@"t2 = %p",t2);
//    [t2 release];
//    
//    Tools *t1 = [Tools shareInstance];
//    NSLog(@"t1 = %p",t1);
//    [t1 release];
//    
    
    
    
    return 0;
}

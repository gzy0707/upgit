//
//  Baby.h
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BabyProtocol.h"
@class Nanny,Student;
@interface Baby : NSObject
// 饥饿值
@property(nonatomic,assign)int hungry;

// 睡意值
@property(nonatomic,assign)int sleep;

// 吃东西
- (void) food;

// 困了
- (void) sleepy;

// 让婴儿拥有一个保姆
//@property(nonatomic,strong)Nanny * nanny;
//@property(nonatomic,strong)Student * stu;
@property(nonatomic,strong)id<BabyProtocol> nanny;


@end

//
//  Tools.h
//  NSArray
//
//  Created by 罂粟 on 2017/7/29.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Singleton.h"
@interface Tools : NSObject <NSCopying,NSMutableCopying>

// 规范: share + 类名
//+ (instancetype)shareInstance;

interfaceSingleton(Tools);

@end

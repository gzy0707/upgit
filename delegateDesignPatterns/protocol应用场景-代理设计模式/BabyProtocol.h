//
//  BabyProtocol.h
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Baby;
@protocol BabyProtocol <NSObject>

// 喂婴儿吃饭
- (void) feedFood : (Baby *)baby;

// 哄婴儿睡觉
- (void) hongSleep : (Baby *)baby;

@end

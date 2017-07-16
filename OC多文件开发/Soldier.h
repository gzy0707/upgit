//
//  Soldier.h
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gun.h"

@interface Soldier : NSObject

{
@public
    NSString *_name;
    double _height;
    double _weigjt;
}
// 开火方法:参数1 有枪  参数2 有弹夹
- (void) fire : (Gun *)gun : (Clip *)clip;

@end

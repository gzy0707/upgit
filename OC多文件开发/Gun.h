//
//  Gun.h
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Clip.h" //多文件开发中,要使用谁就导入谁的.h文件
                // 注意: 导入的一定是.h文件,不能是.m文件
                // 如果导入.m文件,会报重复定义的错

@interface Gun : NSObject
{
@public
    Clip *clip; //弹夹
}

// 想要射击必须传递一个弹夹
- (void) shoot: (Clip *) c;

@end

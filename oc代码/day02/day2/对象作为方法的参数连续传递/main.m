
//  main.m
//  对象作为方法的参数传递
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 士兵
 事物名称: 士兵(Soldier)
 属性: 姓名(name),身高(height),体重(weight)
 行为: 开火(fire),打电话(callPhone)
 
 枪
 事物名称: 枪(Gun)
 属性: 弹夹(clip),型号(model)
 行为: 上弹夹(addClip)
 
 弹夹
 事物名称: 弹夹(Clip)
 属性: 子弹(Bullet)
 行为: 上子弹(addBullet)
 */

#pragma mark - 弹夹
@interface Clip : NSObject
{
    @public
    int _bullet; // 子弹
}

//上子弹的方法
- (void) addBullet;

@end

@implementation Clip

- (void)addBullet
{
    // 上子弹
    _bullet = 5;
}

@end

#pragma mark - 枪
// 声明和实现 枪类
@interface Gun : NSObject
{
    @public
    Clip *clip; //弹夹
}

// 想要射击必须传递一个弹夹
- (void) shoot: (Clip *) c;
@end

@implementation Gun

- (void)shoot:(Clip *)c
{
    // 判断有没有弹夹
    if (c != nil) {
        // 判断有没有子弹
        if (c->_bullet > 0) {
            c->_bullet -= 1;
            NSLog(@"打了一枪 %i",c->_bullet);
        }else{
            NSLog(@"没有子弹了,请装子弹!");
        }
    }else{
        NSLog(@"没有弹夹,请换弹夹!");
    }
    
}

@end


#pragma mark - 士兵
// 声明和实现士兵类
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

@implementation Soldier

- (void)fire:(Gun *)gun :(Clip *)clip
{
    // 判断是否有枪和弹夹
    if (gun != nil && clip != nil) {
            [gun shoot:clip];
    }
}

@end


#pragma mark - 程序入口
int main(int argc, const char * argv[]) {
    
    // 创建一个士兵
    Soldier *sp = [Soldier new];
    sp->_name = @"飞虎队";
    sp->_height = 1.88;
    sp->_weigjt = 100.0;
    
    // 创建一把枪
    Gun *gp = [Gun new];
    // 创建弹夹
    Clip *c = [Clip new];
    [c addBullet];
    
    //士兵开火
    [sp fire:gp :c];

    
    return 0;
}






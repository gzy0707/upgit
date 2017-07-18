//
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
// 声明和实现枪类
@interface Gun : NSObject
{
    @public
    int _bullet; //子弹
}
//射击
- (void) shoot;
@end

@implementation Gun

// 实现射击的方法
- (void)shoot
{
    if (_bullet > 0) {
        _bullet--;
        NSLog(@"打了一枪!,%d",_bullet);
    }else{
        NSLog(@"没有子弹了,请换弹夹!");
    }
    
}
@end



// 声明和实现士兵类
@interface Soldier : NSObject
{
    @public
    NSString *_name;
    double _height;
    double _weigjt;
}
- (void) fire :(Gun *)gun;
@end

@implementation Soldier

- (void)fire:(Gun *)gun
{
//    NSLog(@"打了一枪!");
    
    [gun shoot];
}
@end



int main(int argc, const char * argv[]) {
    
    Soldier *sp = [Soldier new];
    sp->_name = @"飞虎队";
    sp->_height = 1.88;
    sp->_weigjt = 100.0;
    
    // 创建一把枪
    Gun *gp = [Gun new];
    gp->_bullet = 10;
    //让士兵开枪
//    [sp fire];
    // 让对象作为方法的参数传递
    [sp fire:gp];
    [sp fire:gp];
    [sp fire:gp];
    
    return 0;
}






//
//  main.m
//  OC多文件开发
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Soldier.h"
#import "Shop.h"
int main(int argc, const char * argv[]) {
    
    //1 创建一个士兵
    Soldier *sp = [Soldier new];
    sp->_name = @"飞虎队";
    sp->_height = 1.88;
    sp->_weigjt = 100.0;
    
    //2 购买一把枪
    Gun *gp = [Shop buyGun:888];
    
    //3 购买弹夹
    Clip *c = [Shop buyClip:222];
    
    //4 士兵开火
    [sp fire:gp :c];

    return 0;
}

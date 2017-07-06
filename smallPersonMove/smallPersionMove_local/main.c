//
//  main.c
//  02-走出迷宫游戏
//
//  Created by 罂粟 on 2017/7/3.
//  Copyright © 2017年 sunny. All rights reserved.
//

#include <stdio.h>
/*
 游戏说明: 玩家通过键盘录入w,s,a,d控制小人向不同方向移动,其中w代表向上移动,s向下,a向左,d向右移动\
 当小人移动到出口位置,玩家胜利
 
 地图如下:
 
 ######
 #0#
 # ## #
 #  # #
 ##   #
 ######
 
 说明: # 代表墙,0代表小人, ' '代表路
 
 分析:
 1: 打印地图
 1.1: 保存地图
 1.2: 打印
 2: 让玩家移动小人
 2.1: 提示玩家如何如何移动小人
 2.2: 接收玩家的录入
 2.3: 根据玩家录入来移动小人
 3: 判断输赢
 
 */
#include "printMap.h"

int main(int argc, const char * argv[]) {
    
    //1:   1.1 保存地图
    char map[6][6] = {
        
        {'#','#','#','#','#','#'},
        {'#','0','#',' ',' ',' '},
        {'#',' ','#','#',' ','#'},
        {'#',' ',' ','#',' ','#'},
        {'#','#',' ',' ',' ','#'},
        {'#','#','#','#','#','#'}
        
    };
    //    char map[6][6] = {
    //
    //        "######",
    //        "#0#   ",
    //        "# ## #",
    //        "#  # #",
    //        "##   #",
    //        "######"
    //
    //    };
    
    //  1.2 打印地图
    printMap(map,6);
    
    //  2.3 根据玩家录入来移动小人
    //为了判断小人的移动,我们需要定义变量来表示路
    char street = ' ';
    //小人的初始坐标
    int currentX = 1;
    int currentY = 1;
    while (1) {
        //  2.1 提示玩家如何如何移动小人
        printf("请移动小人,w表示向上,s表示向下,a表示向左,d表示向右\n");
        
        //  2.2 接收用户的录入
        //定义一个变量
        char direction;
        //%c 前面加一个空格,来吃掉后面的回车
        scanf(" %c",&direction);
        
        //根据不同方向来计算下一个要移动的位置
        //假设下一个位置就是当前位置
        int nextX = currentX;
        int nextY = currentY;
        
        switch (direction) {
            case 'w':{
                nextX = currentX - 1; //小人下一步的位置
                break;
            }
            case 's':{
                nextX = currentX + 1;
                break;
            }
            case 'a':{
                nextY = currentY - 1;
                break;
            }
            case 'd':{
                nextY = currentY + 1;
                break;
            }
            default:
                break;
        }
        //移动小人
        //判断下一个位置是不是路
        if (map[nextX][nextY] == street) {
            //交换位置
            char temp = map[currentX][currentY];
            map[currentX][currentY] = map[nextX][nextY];
            map[nextX][nextY] = temp;
            //改变位置
            currentX = nextX;
            currentY = nextY;
        }
        
        printMap(map,6);
        
        if (currentX == 1 && currentY == 5) {
            printf("恭喜你,成功走出迷宫!\n");
            break;
        }
    }
    
    return 0;
}








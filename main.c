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
int main(int argc, const char * argv[]) {
    
    //1:   1.1 保存地图
    //    char map[6][6] = {
    //
    //        {'#','#','#','#','#','#'},
    //        {'#','0','#',' ',' ',' '},
    //        {'#',' ','#','#',' ','#'},
    //        {'#',' ',' ','#',' ','#'},
    //        {'#','#',' ',' ',' ','#'},
    //        {'#','#','#','#','#','#'}
    //
    //    };
    char map[6][6] = {
        
        "######",
        "#0#   ",
        "# ## #",
        "#  # #",
        "##   #",
        "######"
        
    };
    //  1.2 打印地图
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    
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
        
        switch (direction) {
            case 'w':{
                int nextX = currentX - 1;
                if (map[nextX][currentY] == street) {
                    char temp = map[currentX][currentY];
                    
                    map[currentX][currentY] = map[nextX][currentY];
                    
                    map[nextX][currentY] = temp;
                    //改变小人位置
                    currentX = nextX;
                }
                break;
            }
            case 's':{
                int nextX = currentX + 1;
                //如果小人的下一个位置是路,就移动小人
                if (map[nextX][currentY] == street) {
                    //定义中间变量记录小人的当前位置
                    char temp = map[currentX][currentY];
                    
                    map[currentX][currentY] = map[nextX][currentY];
                    
                    map[nextX][currentY] = temp;
                    
                    //改变小人的位置
                    currentX = nextX;
                }
                break;
            }
            case 'a':{
                int nextY = currentY - 1;
                if (map[currentX][nextY] == street) {
                    //定义中间变量记录小人的当前位置
                    char temp = map[currentX][currentY];
                    
                    map[currentX][currentY] = map[currentX][nextY];
                    
                    map[currentX][nextY] = temp;
                    
                    //改变小人的位置
                    currentY = nextY;
                }
                break;
            }
            case 'd':{
                int nextY = currentY + 1;
                if (map[currentX][nextY] == street) {
                    //定义中间变量记录小人的当前位置
                    char temp = map[currentX][currentY];
                    
                    map[currentX][currentY] = map[currentX][nextY];
                    
                    map[currentX][nextY] = temp;
                    
                    //改变小人的位置
                    currentY = nextY;
                }
                break;
            }
            default:
                break;
        }
        
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                printf("%c",map[i][j]);
            }
            printf("\n");
        }
        if (currentX == 1 && currentY == 5) {
            printf("恭喜你,成功走出迷宫!\n");
            break;
        }
    }
    
    return 0;
}











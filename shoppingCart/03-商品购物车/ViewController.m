//
//  ViewController.m
//  03-商品购物车
//
//  Created by 罂粟 on 2017/8/3.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "ViewController.h"
#import "ZYShop.h"
#import "ZYShopView.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIView *shopCarView;

// 全局的下标
//@property (nonatomic,assign) NSInteger index;

@property (weak, nonatomic) IBOutlet UIButton *addButton;

@property (weak, nonatomic) IBOutlet UIButton *removeButton;

// 数据数组
@property (nonatomic,strong) NSArray *dataArray;

// 提示文字
@property (weak, nonatomic) IBOutlet UILabel *showHUB;

@end

@implementation ViewController

#pragma -mark 懒加载

// 重写dataArray的get方法
- (NSArray *)dataArray
{
    if (_dataArray == nil) {
        //1. 加载数据
        //2. 获取全路径
        NSString *dataPath = [[NSBundle mainBundle] pathForResource:@"shopData" ofType:@"plist"];
        //2.1 读取数据
        self.dataArray = [NSArray arrayWithContentsOfFile:dataPath];
        
        //1. 字典转模型
        //2. 创建一个临时数组
        NSMutableArray *tempArray = [NSMutableArray array];
        
        //3. 取出dataArray中的所有字典
        for (NSDictionary *dict in self.dataArray) {
            
            //2. 创建ZYShop对象
//            ZYShop *shop = [[ZYShop alloc] initWithDict:dict];
            ZYShop *shop = [ZYShop shopWithDict:dict];
            
            //3. 把模型装入数组
            [tempArray addObject:shop];
        }
        // dataArray中装的就是模型
        self.dataArray = tempArray;
        
    }
    return _dataArray;
}


#pragma -mark 加载控制器View入口

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

#pragma -mark 添加商品
/**
 添加到购物车
 
 @param button 按钮
 */
- (IBAction)add:(UIButton *)button {
    /***********************1.定义一些变量*****************************/
    //1. 总列数
    NSInteger allCols = 3;
    
    //2. 商品宽度 和 高度
    CGFloat width = 80;
    CGFloat height = 100;
    
    //3. 间距(水平间距spJJ) 和 垂直间距(czJJ)
    // 水平间距 = (购物车宽度 - 商品宽度*商品个数) / (列数 - 1);
    CGFloat spJJ = (self.shopCarView.frame.size.width - width*allCols) / (allCols - 1);
    // 垂直间距 = (购物车高度 - 商品高度*商品个数) / (行数 - 1);
    CGFloat szJJ = (self.shopCarView.frame.size.height - height*2) / 1;
    
    //4. 定义一个索引来表示shopCarView中subView这个数组的长度
    NSInteger index = self.shopCarView.subviews.count;
    
    //5. 求出X值 和 Y值
    CGFloat x = (spJJ + width) * (index % allCols);
    CGFloat y = (szJJ + height) * (index / allCols);
    
    /***********************2.创建一个商品*****************************/

    /*
    ZYShopView *shopView = [[ZYShopView alloc] init];
    shopView.frame = CGRectMake(x, y, width, height);
    //设置数据
    ZYShop *shop = self.dataArray[index];
    //把数据 赋值 给  商品模型
    shopView.shop = shop;
    [self.shopCarView addSubview:shopView];
     */
     
    
    ZYShopView *shopView = [ZYShopView shopWith];
    // 设置数据
    shopView.shop = self.dataArray[index];
    
    shopView.frame = CGRectMake(x, y, width, height);
    [self.shopCarView addSubview:shopView];
    

    /***********************3.设置按钮的状态*****************************/
    //1. 购物车满了,添加按钮不可用
    // 当数组的index=5的时候,为NO.(可用if判断,可读性好.)
    button.enabled = (index != 5);
    
    //2. 设置按钮的删除状态
    self.removeButton.enabled = YES;
    
    /***********************4.设置HUB的状态*****************************/
    if (index == 5) {
        
        [self showWithInfo:@"购物车已满,快点付款!"];
        
    }
    
}

#pragma -mark 删除商品
/**
 从购物车中删除
 
 @param button 按钮
 */
- (IBAction)remove:(UIButton *)button {
    //1. 删除购物车中最后一个商品
    //1.1 先获取最后一个商品
    UIView *lastView = [self.shopCarView.subviews lastObject];
    //1.2 删除
    [lastView removeFromSuperview];
    
    //2. 让索引值递减(因为索引值没变,删除商品后,addButton还是不可用的)
    //    self.index -= 1;
    
    //3. 设置,添加商品按钮可用
    self.addButton.enabled = YES;
    
    //4. 当购物车清空时,删除按钮设为不可用
    self.removeButton.enabled = (self.shopCarView.subviews.count != 0);
    
    //5. 设置HUB(弹框)的状态
    if (self.shopCarView.subviews.count == 0) {
        
        [self showWithInfo:@"当前购物车已空,墨迹,快买~"];
    }
    
}

- (void)showWithInfo : (NSString *)info
{
    [UIView animateWithDuration:2.0 animations:^{
        // 执行动画
        self.showHUB.text = info;
        self.showHUB.alpha = 1.f;
    } completion:^(BOOL finished) {
        //完成动画
        [UIView animateWithDuration:1.5 delay:1.0 options:UIViewAnimationOptionCurveLinear animations:^{
            self.showHUB.alpha = 0;
            
        } completion:nil];
        
    }];
    
}
@end

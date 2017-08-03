//
//  ViewController.m
//  KOF
//
//  Created by 罂粟 on 2017/8/3.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import "ViewController.h"
#import <AVFoundation/AVFoundation.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

// 站立图片数组
@property (nonatomic,strong) NSArray *standImgs;

// 小招1图片数组
@property (nonatomic,strong) NSArray *smallImgs1;
// 小招2图片数组
@property (nonatomic,strong) NSArray *smallImgs2;
// 小招3图片数组
@property (nonatomic,strong) NSArray *smallImgs3;
// 大招图片数组
@property (nonatomic,strong) NSArray *bigImgs;
// 装逼图片数组
@property (nonatomic,strong) NSArray *ZBImgs;
// 死亡图片数组
@property (nonatomic,strong) NSArray *deadImgs;

// 创建背景音乐
@property (nonatomic,strong) AVPlayer *bgPlayer;

// 创建动画音乐
@property (nonatomic,strong) AVPlayer *AnimationPlayer;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // 加载站立的图片
    self.standImgs = [self loadAllImages:@"stand" count:10];
    
    // 加载小招1的图片
    self.smallImgs1 = [self loadAllImages:@"xiaozhao1" count:21];
    // 加载小招2的图片
    self.smallImgs2 = [self loadAllImages:@"xiaozhao2" count:35];
    // 加载小招3的图片
    self.smallImgs3 = [self loadAllImages:@"xiaozhao3" count:39];
    // 加载大招的图片
    self.bigImgs = [self loadAllImages:@"dazhao" count:87];
    // 加载装逼的图片
    self.ZBImgs = [self loadAllImages:@"install_b" count:29];
    // 加载死亡的图片
    self.deadImgs = [self loadAllImages:@"dead" count:23];
    
    // 只要一加载就在站立状态
    [self stand];
    
    // 添加背景音乐
    NSURL *url = [[NSBundle mainBundle] URLForResource:@"bgMusic.mp3" withExtension:nil];
    AVPlayerItem *playerItem = [[AVPlayerItem alloc] initWithURL: url];
    self.bgPlayer = [[AVPlayer alloc] initWithPlayerItem:playerItem];
    [self.bgPlayer play];
    
    // 创建动画播放器
    self.AnimationPlayer = [[AVPlayer alloc] init];
    
}


/**
 加载图片

 @param imagePrefix 图片的前缀
 @param count       图片的数量
 @return            返回数组
 */
- (NSArray *)loadAllImages :(NSString *)imagePrefix  count:(NSUInteger)count{
    //1. 创建一个空可变数组来保存图片对象
    NSMutableArray<UIImage *> *imagesArr = [NSMutableArray array];
    for (int i = 0; i < count; ++i) {
        //1.2 获取所有图片的名字
        NSString *imageName = [NSString stringWithFormat:@"%@_%d",imagePrefix,i+1];
        //1.3 根据名字取图片
//        UIImage *images = [UIImage imageNamed:imageName];
        NSString *path = [[NSBundle mainBundle] pathForResource:imageName ofType:@"png"];
        UIImage *images = [UIImage imageWithContentsOfFile:path];
        //1.4 把图片放入到数组中
        [imagesArr addObject:images];
    }
    
        return imagesArr;
}

- (IBAction)stand {
    
    /*
    // 设置动画图片
    self.imageView.animationImages = self.standImgs;
    // 设置动画时间
    self.imageView.animationDuration = 1;
    // 设置动画次数
    self.imageView.animationRepeatCount = 0;
    
    [self.imageView startAnimating];
     */
    [self playAnimation:self.standImgs duration:1 andCount:0 isStand:YES musicName:nil];
    
}

#pragma mark - 小招1
- (IBAction)smallZhao1 {
    
    /*
    self.imageView.animationImages = self.smallImgs1;
    self.imageView.animationDuration = 1.6;
    self.imageView.animationRepeatCount = 1;
    [self.imageView startAnimating];
     */
    [self playAnimation:_smallImgs1 duration:1.5 andCount:1 isStand:NO musicName:@"xiaozhao1.mp3"];
    
    
    
}


#pragma mark - 小招2
- (IBAction)smallZhao2 {

    [self playAnimation:_smallImgs1 duration:1.5 andCount:1 isStand:NO musicName:@"xiaozhao2.mp3"];
    
}

#pragma mark - 小招3
- (IBAction)smallZhao3 {
    
    [self playAnimation:self.smallImgs3 duration:1.5 andCount:1 isStand:NO musicName:@"xiaozhao3.mp3"];
    
}

#pragma mark - 大招
- (IBAction)bigZhao {
    
    [self playAnimation:self.bigImgs duration:2.8 andCount:1 isStand:NO musicName:@"dazhao.mp3"];
    
}

#pragma mark - 装逼
- (IBAction)ZB {
    
    [self playAnimation:self.ZBImgs duration:0.8 andCount:1 isStand:NO musicName:nil];
    
}

#pragma mark - 死亡
- (IBAction)dead {
    
    [self playAnimation:self.deadImgs duration:1.5 andCount:1 isStand:NO musicName:nil];
    
}

#pragma mark - 结束游戏
- (IBAction)gameOver {
    // 把指向图片数组的指向置为nil
    self.standImgs = nil;
    self.smallImgs1 = nil;
    self.bigImgs = nil;
    self.smallImgs2 = nil;
    self.smallImgs3 = nil;
    self.ZBImgs = nil;
    self.deadImgs = nil;
    
    //结束游戏后,使人物不在站立状态并关掉背景音乐
    self.imageView.animationImages = nil;
    self.bgPlayer = nil;
    self.AnimationPlayer = nil;
    

    
}

/**
 开始动画

 @param imagesArr 加载的数组
 @param duration  动画时间
 @param count     动画次数
 */
- (void)playAnimation : (NSArray *)imagesArr  duration:(NSTimeInterval)duration andCount:(NSUInteger)count isStand: (BOOL)isStand musicName:(NSString *)musicName{
    
    // 设置动画图片
    self.imageView.animationImages = imagesArr;
    // 设置动画时间
    self.imageView.animationDuration = duration;
    // 设置动画次数
    self.imageView.animationRepeatCount = count;
    
    [self.imageView startAnimating];
    
    // 技能结束后,保持站立状态
    if (!isStand) {
        [self performSelector:@selector(stand) withObject:nil afterDelay:self.imageView.animationDuration];
    }
    
    NSURL *url = [[NSBundle mainBundle] URLForResource:musicName withExtension:nil];
    AVPlayerItem *playerItem = [[AVPlayerItem alloc] initWithURL: url];
    self.AnimationPlayer = [[AVPlayer alloc] initWithPlayerItem:playerItem];
    [self.AnimationPlayer play];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

}


@end

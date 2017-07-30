//
//  Student.h
//  day7
//
//  Created by 罂粟 on 2017/7/26.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StudentProtocol.h"
@interface Student : NSObject

- (void)findHouse;

@property(nonatomic,strong)id<StudentProtocol> delegate;

@end

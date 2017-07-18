//
//  Person.h
//  day2
//
//  Created by 罂粟 on 2017/7/16.
//  Copyright © 2017年 sunny. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "iPhone.h"

@interface Person : NSObject
{
    @public
    int _age;
    NSString *_name;
}

- (void) say;

- (void) signal : (iPhone *)phone;

@end

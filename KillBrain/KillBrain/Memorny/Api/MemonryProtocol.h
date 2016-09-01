//
//  MemonryProtocol.h
//  KillBrain
//
//  Created by Li Kelin on 16/9/1.
//  Copyright © 2016年 Li Kelin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MemonryNumsView.h"
#import "MemonryController.h"
@interface MemonryProtocol : NSObject<MemonryNumsViewDelegate>
@property (nonatomic, strong) MemonryController *controller;
@end

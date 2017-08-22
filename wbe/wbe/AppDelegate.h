//
//  AppDelegate.h
//  wbe
//
//  Created by qinxianjin on 2017/8/22.
//  Copyright © 2017年 qinxianjin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


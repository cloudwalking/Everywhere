//
//  everywhereAppDelegate.h
//  everywhere
//
//  Created by Reed Morse on 10/27/11.
//  Copyright 2011 Punchd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class everywhereViewController;

@interface everywhereAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet everywhereViewController *viewController;

@end

//
//  DDPageControlAppDelegate.h
//  DDPageControl
//
//  Created by Damien DeVille on 1/14/11.
//  Copyright 2011 Snappy Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DDPageControlViewController ;

@interface DDPageControlAppDelegate : NSObject <UIApplicationDelegate>
{
	UIWindow *window ;
	DDPageControlViewController *viewController ;
}

@property (nonatomic, retain) IBOutlet UIWindow *window ;
@property (nonatomic, retain) IBOutlet DDPageControlViewController *viewController ;


@end


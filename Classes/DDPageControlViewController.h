//
//  DDPageControlViewController.h
//  DDPageControl
//
//  Created by Damien DeVille on 1/14/11.
//  Copyright 2011 Snappy Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DDPageControl ;

@interface DDPageControlViewController : UIViewController <UIScrollViewDelegate>
{
	IBOutlet UIScrollView *scrollView ;
	
	DDPageControl *pageControl ;
}

@property (nonatomic,retain) IBOutlet UIScrollView *scrollView ;


@end


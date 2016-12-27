/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol VideosExtrasVideoPlaybackViewController;
@class UIViewController, NSLayoutConstraint, VideosExtrasContext, UIView;

@interface VideosExtrasFeatureContainerViewController : UIViewController {

	UIViewController*<VideosExtrasVideoPlaybackViewController> _videoPlaybackViewController;
	NSLayoutConstraint* _overlayViewAdjustmentConstraint;
	VideosExtrasContext* _context;
	UIView* _menuBarView;
	double _collectionViewHeight;

}

@property (assign,nonatomic) double collectionViewHeight;                                 //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController * videoPlaybackViewController;              //@synthesize videoPlaybackViewController=_videoPlaybackViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuBarView;                                 //@synthesize menuBarView=_menuBarView - In the implementation block
-(void)dealloc;
-(VideosExtrasContext *)context;
-(void)viewDidLoad;
-(id)initWithContext:(id)arg1 ;
-(UIView *)menuBarView;
-(void)_menuBarHeightChange:(id)arg1 ;
-(void)setVideoPlaybackViewController:(UIViewController *)arg1 ;
-(void)setMenuBarView:(UIView *)arg1 ;
-(UIViewController *)videoPlaybackViewController;
-(double)collectionViewHeight;
-(void)setCollectionViewHeight:(double)arg1 ;
@end

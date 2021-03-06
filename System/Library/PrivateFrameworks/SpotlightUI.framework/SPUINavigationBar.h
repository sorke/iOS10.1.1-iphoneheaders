/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIView;

@interface SPUINavigationBar : UINavigationBar {

	UIView* _topDividerView;
	double _currentBlurProgress;

}

@property (retain) UIView * topDividerView;                 //@synthesize topDividerView=_topDividerView - In the implementation block
@property (assign) double currentBlurProgress;              //@synthesize currentBlurProgress=_currentBlurProgress - In the implementation block
+(BOOL)_supportsCanvasView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLocked;
-(void)didAddSubview:(id)arg1 ;
-(void)pushNavigationItem:(id)arg1 ;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)setTopDividerView:(UIView *)arg1 ;
-(UIView *)topDividerView;
-(void)showSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateBackgroundViewVisibility;
-(void)performShowSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)performUpdateBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)currentBlurProgress;
-(void)setCurrentBlurProgress:(double)arg1 ;
-(void)updateBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
@end


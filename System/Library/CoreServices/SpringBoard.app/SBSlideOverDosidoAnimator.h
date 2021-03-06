/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDosidoAnimator.h>

@class UIView;

@interface SBSlideOverDosidoAnimator : SBDosidoAnimator {

	unsigned long long _slideOverDirection;
	UIView* _fromContainerView;
	UIView* _toContainerView;
	UIView* _fromDimmingView;
	UIView* _toDimmingView;

}

@property (nonatomic,readonly) UIView * fromContainerView;                       //@synthesize fromContainerView=_fromContainerView - In the implementation block
@property (nonatomic,readonly) UIView * toContainerView;                         //@synthesize toContainerView=_toContainerView - In the implementation block
@property (nonatomic,readonly) UIView * fromDimmingView;                         //@synthesize fromDimmingView=_fromDimmingView - In the implementation block
@property (nonatomic,readonly) UIView * toDimmingView;                           //@synthesize toDimmingView=_toDimmingView - In the implementation block
@property (assign,nonatomic) unsigned long long slideOverDirection;              //@synthesize slideOverDirection=_slideOverDirection - In the implementation block
+(double)defaultDuration;
-(void)_cleanupDosido;
-(void)_prepareDosido;
-(void)_animateDosidoWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2 ;
-(void)_rotateViewIfNecessary:(id)arg1 inverted:(BOOL)arg2 ;
-(unsigned long long)slideOverDirection;
-(void)setSlideOverDirection:(unsigned long long)arg1 ;
-(UIView *)fromContainerView;
-(UIView *)toContainerView;
-(UIView *)fromDimmingView;
-(UIView *)toDimmingView;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
@end


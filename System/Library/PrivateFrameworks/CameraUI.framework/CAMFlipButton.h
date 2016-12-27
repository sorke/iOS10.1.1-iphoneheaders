/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMFlipButton : UIButton {

	long long _layoutStyle;
	long long _orientation;
	UIImageView* __padBackgroundView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _padBackgroundView;              //@synthesize _padBackgroundView=__padBackgroundView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                 //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
+(id)flipButtonWithLayoutStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)_updateImages;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_updateForLayoutStyle;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(UIImageView *)_padBackgroundView;
@end

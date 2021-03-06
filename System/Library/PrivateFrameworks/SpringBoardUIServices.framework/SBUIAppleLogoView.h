/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>

@class UIView, PUIProgressWindow;

@interface SBUIAppleLogoView : UIView {

	UIView* _layerView;
	PUIProgressWindow* _progressWindow;
	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(id)initWithFrame:(CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 ;
@end


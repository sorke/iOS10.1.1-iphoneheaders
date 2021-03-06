/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIAppIconForceTouchControllerDataSource;
#import <SpringBoardUI/SpringBoardUI-Structs.h>
@class SBUIAppIconForceTouchController, SBUIForceTouchGestureRecognizer, NSString, NSURL, NSArray, SBFParallaxSettings, UIView;

@interface SBUIAppIconForceTouchControllerDataProvider : NSObject {

	SCD_Struct_SB6 _dataSourceRespondsTo;
	id<SBUIAppIconForceTouchControllerDataSource> _dataSource;
	SBUIAppIconForceTouchController* _controller;
	SBUIForceTouchGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) id<SBUIAppIconForceTouchControllerDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) SBUIAppIconForceTouchController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (nonatomic,__weak,readonly) SBUIForceTouchGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) CGRect iconViewFrame; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSURL * applicationBundleURL; 
@property (nonatomic,readonly) NSString * applicationShortcutWidgetBundleIdentifier; 
@property (nonatomic,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,readonly) UIEdgeInsets iconImageInsets; 
@property (nonatomic,readonly) double iconImageCornerRadius; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings; 
@property (nonatomic,readonly) UIView * zoomDownView; 
@property (nonatomic,readonly) CGPoint zoomDownCenter; 
-(id)init;
-(id<SBUIAppIconForceTouchControllerDataSource>)dataSource;
-(SBUIForceTouchGestureRecognizer *)gestureRecognizer;
-(SBUIAppIconForceTouchController *)controller;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(SBFParallaxSettings *)parallaxSettings;
-(id)newIconViewCopy;
-(double)iconImageCornerRadius;
-(CGRect)iconViewFrame;
-(UIEdgeInsets)iconImageInsets;
-(UIView *)zoomDownView;
-(CGPoint)zoomDownCenter;
-(id)initWithDataSource:(id)arg1 controller:(id)arg2 gestureRecognizer:(id)arg3 ;
-(NSArray *)applicationShortcutItems;
-(NSURL *)applicationBundleURL;
-(NSString *)applicationBundleIdentifier;
@end


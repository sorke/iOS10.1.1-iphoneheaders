/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol BlockableScrollViewDelegate;
@class NSObject;

@interface BlockableScrollView : UIScrollView {

	BOOL _isResizing;
	NSObject*<BlockableScrollViewDelegate> _blockableDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<BlockableScrollViewDelegate> blockableDelegate;              //@synthesize blockableDelegate=_blockableDelegate - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                              //@synthesize isResizing=_isResizing - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setIsResizing:(BOOL)arg1 ;
-(NSObject*<BlockableScrollViewDelegate>)blockableDelegate;
-(void)setBlockableDelegate:(NSObject*<BlockableScrollViewDelegate>)arg1 ;
-(BOOL)isResizing;
@end


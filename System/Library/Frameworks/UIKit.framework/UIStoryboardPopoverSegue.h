/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStoryboardSegue.h>

@class UIPopoverController, NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {

	UIPopoverController* _popoverController;
	NSArray* _passthroughViews;
	unsigned long long _permittedArrowDirections;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;
	CGRect _anchorRect;

}

@property (setter=_setPassthroughViews:,nonatomic,copy) NSArray * _passthroughViews;                                         //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,setter=_setPermittedArrowDirections:,nonatomic) unsigned long long _permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (setter=_setAnchorBarButtonItem:,nonatomic,retain) UIBarButtonItem * _anchorBarButtonItem;                         //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
@property (setter=_setAnchorView:,nonatomic,retain) UIView * _anchorView;                                                    //@synthesize anchorView=_anchorView - In the implementation block
@property (assign,setter=_setAnchorRect:,nonatomic) CGRect _anchorRect;                                                      //@synthesize anchorRect=_anchorRect - In the implementation block
@property (nonatomic,readonly) UIPopoverController * popoverController;                                                      //@synthesize popoverController=_popoverController - In the implementation block
-(NSArray *)_passthroughViews;
-(UIPopoverController *)popoverController;
-(unsigned long long)_permittedArrowDirections;
-(UIView *)_anchorView;
-(UIBarButtonItem *)_anchorBarButtonItem;
-(void)perform;
-(void)_setPassthroughViews:(id)arg1 ;
-(void)_setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)_setAnchorBarButtonItem:(id)arg1 ;
-(void)_setAnchorView:(id)arg1 ;
-(void)_setAnchorRect:(CGRect)arg1 ;
-(CGRect)_anchorRect;
@end

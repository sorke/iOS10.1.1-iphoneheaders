/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SidebarContentDimmingViewDelegate;
@class UITapGestureRecognizer, UIView, NSString;

@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _dismissRecognizer;
	UIView* _dimmingView;
	UIView* _passthroughView;
	id<SidebarContentDimmingViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * passthroughView;                                           //@synthesize passthroughView=_passthroughView - In the implementation block
@property (assign,nonatomic,__weak) id<SidebarContentDimmingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 dimmedContentFrame:(CGRect)arg2 ;
-(void)setPassthroughView:(UIView *)arg1 ;
-(void)setDimmedContentFrame:(CGRect)arg1 ;
-(void)_dismissRecognized:(id)arg1 ;
-(UIView *)passthroughView;
-(void)setDelegate:(id<SidebarContentDimmingViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SidebarContentDimmingViewDelegate>)delegate;
-(void)setTransparent:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIView;

@interface ASMSRevealPresentationController : UIPresentationController {

	BOOL _presenting;
	BOOL _dismissing;
	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                             //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;              //@synthesize dismissing=_dismissing - In the implementation block
-(id)_viewsToApplyTransform;
-(void)dimmingViewTapped:(id)arg1 ;
-(id)_viewsToApplyCornerRadius;
-(void)setDismissing:(BOOL)arg1 ;
-(void)_prepareViewHierarchyForPresentation;
-(void)_configureViewsForPresentedState;
-(void)_configureViewsForDismissedState;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)containerViewDidLayoutSubviews;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_shouldGrabPresentersView;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_cleanupPresentation;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(BOOL)isPresenting;
-(BOOL)isDismissing;
@end

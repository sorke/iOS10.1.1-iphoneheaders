/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>

@class UIViewController, UIView, SKUIProxyScrollView, NSString;

@interface MusicSplitViewController : UIViewController <SKUIProxyScrollViewDelegate> {

	UIViewController* _detailViewController;
	UIEdgeInsets _detailViewControllerContentInsetAdditions;
	UIView* _gutterView;
	BOOL _isHorizontallyCompact;
	UIViewController* _preservedDetailViewController;
	UIEdgeInsets _primaryViewControllerContentInsetAdditions;
	SKUIProxyScrollView* _proxyScrollView;
	UIViewController* _primaryViewController;
	double _staticPrimaryColumnWidth;

}

@property (nonatomic,readonly) UIViewController * _detailViewController;              //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,readonly) BOOL _supportsDetailViewController; 
@property (nonatomic,retain) UIViewController * primaryViewController;                //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (assign,nonatomic) double staticPrimaryColumnWidth;                         //@synthesize staticPrimaryColumnWidth=_staticPrimaryColumnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(void)_willChangeDetailViewController:(id)arg1 ;
-(void)_willChangePrimaryViewController:(id)arg1 ;
-(UIViewController *)primaryViewController;
-(UIViewController *)_detailViewController;
-(void)_requestInitialStateDetailViewController;
-(void)setPrimaryViewController:(UIViewController *)arg1 ;
-(void)clearDetailViewController;
-(void)setStaticPrimaryColumnWidth:(double)arg1 ;
-(void)_handleDetailViewController:(id)arg1 ;
-(SCD_Struct_Mu22)_childrenLayoutResultsForBounds:(CGRect)arg1 ;
-(void)_updateHorizontallyCompactState;
-(void)_applyContentInsetsForChildViewControllers;
-(id)_primaryViewControllerOverrideTraitCollection;
-(void)_didChangePrimaryViewController;
-(BOOL)_supportsDetailViewController;
-(double)_preferredPrimaryColumnWidthWhenWithDetailForWidth:(double)arg1 ;
-(void)_setDetailViewController:(id)arg1 shouldChangeParents:(BOOL)arg2 ;
-(id)_detailViewControllerOverrideTraitCollection;
-(void)_didChangeDetailViewController;
-(double)staticPrimaryColumnWidth;
@end


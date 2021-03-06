/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol PKAddPaymentPassViewControllerDelegate;
@class PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController;

@interface PKAddPaymentPassViewController : UIViewController {

	id<PKAddPaymentPassViewControllerDelegate> _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddPaymentPassViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPaymentPass;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)modalTransitionStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
@end


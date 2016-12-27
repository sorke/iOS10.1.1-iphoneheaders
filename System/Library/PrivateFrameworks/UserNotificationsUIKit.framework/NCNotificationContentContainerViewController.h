/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationCustomContentDelegate.h>
#import <libobjc.A.dylib/NCNotificationTextInputViewDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate, NCNotificationCustomContent;
@class NSString, NCNotificationAction, NCNotificationRequest, UIViewController, NCNotificationTextInputView;

@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent> {

	id<NCNotificationCustomContentDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;
	UIViewController*<NCNotificationCustomContent> _contentViewController;
	NCNotificationTextInputView* _inputAccessoryView;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                                     //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (nonatomic,retain) UIViewController*<NCNotificationCustomContent> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NCNotificationTextInputView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@property (assign,nonatomic,__weak) NCNotificationAction * presentationSourceAction; 
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController*<NCNotificationCustomContent>)contentViewController;
-(void)viewDidLoad;
-(NCNotificationTextInputView *)inputAccessoryView;
-(void)setInputAccessoryView:(NCNotificationTextInputView *)arg1 ;
-(void)setContentViewController:(UIViewController*<NCNotificationCustomContent>)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 ;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 ;
-(void)customContentRequestsDismiss:(id)arg1 ;
-(void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2 ;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(void)_loadContentViewControllerForNotificationRequest:(id)arg1 ;
-(void)_setupContentViewController:(id)arg1 ;
-(BOOL)_shouldShowTextInputOnAppearance;
-(void)_setupQuickReplyForNotificationRequest:(id)arg1 ;
-(void)_setupQuickReplyForNotificationAction:(id)arg1 ;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(void)loadAudioAccessoryView;
-(void)loadExtension;
-(NSString *)contentExtensionIdentifier;
-(void)playAudioMessage;
-(id)_textInputActionInNotification:(id)arg1 ;
-(void)_removeInputAccessoryView:(id)arg1 ;
-(void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3 ;
-(BOOL)allowManualDismiss;
@end

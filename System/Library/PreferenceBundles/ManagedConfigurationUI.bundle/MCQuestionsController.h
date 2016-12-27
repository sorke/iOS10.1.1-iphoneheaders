/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSDetailController.h>

@protocol MCQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UIAlertView;

@interface MCQuestionsController : PSDetailController {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	BOOL _waitingForPasscodePreflight;
	id<MCQuestionsControllerDelegate> _delegate;
	int _outDirection;
	UIAlertView* _activeAlert;
	BOOL _showingKeyboard;

}

@property (assign,nonatomic,__weak) id<MCQuestionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int outDirection;                                               //@synthesize outDirection=_outDirection - In the implementation block
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)setDelegate:(id<MCQuestionsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MCQuestionsControllerDelegate>)delegate;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(void)_showKeyboard:(BOOL)arg1 ;
-(int)outDirection;
-(void)_updateNavigationBar;
-(void)_showProgressIndicator;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(id)initWithUserInput:(id)arg1 ;
-(void)stopWaitingForMoreInput;
-(void)updateWithUserInput:(id)arg1 ;
-(void)waitForMoreInput;
-(void)_questionFieldEmpty:(id)arg1 ;
-(void)_questionFieldNotEmpty:(id)arg1 ;
-(void)_hideKeyboard:(BOOL)arg1 ;
-(id)_panePropertiesForField:(id)arg1 ;
-(void)_continueOrFinish;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_cancelInput;
-(void)_nextButtonClicked;
-(void)_cancelButtonClicked;
-(void)_disableRightButton;
-(void)_showNavButtonsAnimated:(BOOL)arg1 ;
-(void)_enableRightButton;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(void)_continueWithCurrentField;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryWithCurrentField;
-(void)_retryPayload;
-(void)_skipPayload;
-(void)_cancelPaylod;
-(void)setPane:(id)arg1 ;
@end

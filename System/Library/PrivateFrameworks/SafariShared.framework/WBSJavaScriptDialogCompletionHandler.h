/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSJavaScriptDialogCompletionHandler : NSObject {

	long long _dialogMode;
	/*^block*/id _alertCompletionHandler;
	/*^block*/id _confirmCompletionHandler;
	/*^block*/id _promptCompletionHandler;

}

@property (assign,nonatomic) long long dialogMode;                   //@synthesize dialogMode=_dialogMode - In the implementation block
@property (nonatomic,copy) id alertCompletionHandler;                //@synthesize alertCompletionHandler=_alertCompletionHandler - In the implementation block
@property (nonatomic,copy) id confirmCompletionHandler;              //@synthesize confirmCompletionHandler=_confirmCompletionHandler - In the implementation block
@property (nonatomic,copy) id promptCompletionHandler;               //@synthesize promptCompletionHandler=_promptCompletionHandler - In the implementation block
-(void)cancel;
-(id)initWithAlertCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithConfirmCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPromptCompletionHandler:(/*^block*/id)arg1 ;
-(long long)dialogMode;
-(void)setDialogMode:(long long)arg1 ;
-(id)alertCompletionHandler;
-(void)setAlertCompletionHandler:(id)arg1 ;
-(id)confirmCompletionHandler;
-(void)setConfirmCompletionHandler:(id)arg1 ;
-(id)promptCompletionHandler;
-(void)setPromptCompletionHandler:(id)arg1 ;
@end

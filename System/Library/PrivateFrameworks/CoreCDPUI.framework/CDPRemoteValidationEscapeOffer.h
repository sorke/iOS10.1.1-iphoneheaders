/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController, NSString;

@interface CDPRemoteValidationEscapeOffer : NSObject {

	NSMutableArray* _escapeOptions;
	UIViewController* _presentingViewController;
	NSString* _escapeOfferName;
	NSString* _title;
	NSString* _message;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSString * escapeOfferName;                                      //@synthesize escapeOfferName=_escapeOfferName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                              //@synthesize message=_message - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIViewController *)presentingViewController;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setEscapeOfferName:(NSString *)arg1 ;
-(void)addEscapeOptionsObject:(id)arg1 ;
-(id)escapeOptions;
-(void)handleEscapeAction:(id)arg1 ;
-(NSString *)escapeOfferName;
-(id)_actionFromEscapeOption:(id)arg1 ;
-(long long)_styleForEscapeOption:(id)arg1 ;
-(void)dismissOfferAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end


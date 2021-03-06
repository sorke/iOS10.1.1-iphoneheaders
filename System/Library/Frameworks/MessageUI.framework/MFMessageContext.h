/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray, MFMessagePayload;


@protocol MFMessageContext <NSObject>
@property (nonatomic,readonly) NSUUID * senderIdentifier; 
@property (nonatomic,readonly) NSArray * recipientIdentifiers; 
@property (nonatomic,readonly) MFMessagePayload * inputMessagePayload; 
@required
-(NSArray *)recipientIdentifiers;
-(void)updateMessagePayload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertImage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertStickerWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSUUID *)senderIdentifier;
-(MFMessagePayload *)inputMessagePayload;

@end


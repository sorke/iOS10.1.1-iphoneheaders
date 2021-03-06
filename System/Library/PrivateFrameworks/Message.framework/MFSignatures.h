/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)signaturePlainTextFormat:(id)arg1 ;
+(id)stripSignatureMarkup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
-(id)defaultSignature;
-(void)_setValue:(id)arg1 value:(void*)arg2 ;
-(id)signatureForAccount:(id)arg1 ;
-(BOOL)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
-(void)setSignature:(id)arg1 ;
-(id)signature;
@end


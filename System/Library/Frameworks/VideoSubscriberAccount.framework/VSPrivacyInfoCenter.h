/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSPrivacyFacade;

@interface VSPrivacyInfoCenter : NSObject {

	int _registrationToken;
	VSPrivacyFacade* _privacyFacade;
	unsigned long long _privacyAccessStatus;

}

@property (assign,nonatomic) int registrationToken;                               //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,retain) VSPrivacyFacade * privacyFacade;                     //@synthesize privacyFacade=_privacyFacade - In the implementation block
@property (assign,nonatomic) unsigned long long privacyAccessStatus;              //@synthesize privacyAccessStatus=_privacyAccessStatus - In the implementation block
@property (nonatomic,readonly) long long accountAccessStatus; 
+(id)sharedPrivacyInfoCenter;
-(id)init;
-(void)dealloc;
-(long long)accountAccessStatus;
-(void)updateAccountAccessStatusWithResponse:(id)arg1 ;
-(id)updateAccountAccessStatusWithError:(id)arg1 ;
-(VSPrivacyFacade *)privacyFacade;
-(void)_invalidateAccountAccessStatus;
-(void)setPrivacyAccessStatus:(unsigned long long)arg1 ;
-(unsigned long long)privacyAccessStatus;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
-(void)setPrivacyFacade:(VSPrivacyFacade *)arg1 ;
@end

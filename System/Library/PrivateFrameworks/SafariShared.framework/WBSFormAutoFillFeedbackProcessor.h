/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider; 
@required
-(void)sendFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTRegUtilities : NSObject
+(id)serviceWithType:(long long)arg1 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2 ;
+(void)changePasswordControllerDidCancel:(id)arg1 ;
+(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
+(void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2 ;
@end


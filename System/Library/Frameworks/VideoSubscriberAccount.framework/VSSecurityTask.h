/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@interface VSSecurityTask : NSObject {

	unsigned long long _kind;
	SCD_Struct_VS3 _auditToken;
	/*function pointer*/void* _createWithAuditToken;
	/*function pointer*/void* _createFromSelf;
	/*function pointer*/void* _copyValueForEntitlement;

}
+(id)currentSecurityTask;
+(id)securityTaskWithAuditToken:(SCD_Struct_VS3)arg1 ;
-(id)init;
-(BOOL)getValue:(id*)arg1 forEntitlement:(id)arg2 error:(id*)arg3 ;
-(id)initWithCreateFromSelfProc:(/*function pointer*/void*)arg1 copyValueForEntitlementProc:(/*function pointer*/void*)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_VS3)arg1 createWithAuditTokenProc:(/*function pointer*/void*)arg2 copyValueForEntitlementProc:(/*function pointer*/void*)arg3 ;
@end


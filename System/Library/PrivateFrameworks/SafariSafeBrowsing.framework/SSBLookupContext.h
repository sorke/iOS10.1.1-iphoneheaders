/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@interface SSBLookupContext : NSObject {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}
+(id)sharedLookupContext;
-(id)init;
-(void)dealloc;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
@end

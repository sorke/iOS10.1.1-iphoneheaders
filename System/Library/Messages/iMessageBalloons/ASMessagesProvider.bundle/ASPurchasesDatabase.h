/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HSCloudClient, SSAppPurchaseHistoryDatabase, NSObject;

@interface ASPurchasesDatabase : NSObject {

	HSCloudClient* _cloudClient;
	SSAppPurchaseHistoryDatabase* _database;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)sharedPurchasesDatabase;
-(void)updateActiveAccountWithReason:(long long)arg1 ;
-(void)hideItemWithStoreIdentifier:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)itemsWithPredicate:(id)arg1 sortColumn:(id)arg2 sortAscending:(BOOL)arg3 familyMember:(id)arg4 ;
-(void)updateForFamilyMember:(id)arg1 withReason:(long long)arg2 ;
-(void)_updateForFamilyMember:(id)arg1 withReason:(long long)arg2 ;
-(id)init;
-(void)dealloc;
@end


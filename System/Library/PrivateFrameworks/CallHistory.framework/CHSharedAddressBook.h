/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	void* _addressBook;
	NSMutableDictionary* _addressBookCache;

}

@property (assign) void* addressBook;                                   //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAddressBook:(void*)arg1 ;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)createAddressBook;
-(void)cleanUpAddressBookCache_sync;
-(NSMutableDictionary *)addressBookCache;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)revertAddressBook:(BOOL)arg1 ;
-(void)performQuery_sync:(/*^block*/id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
-(void*)addressBook;
@end


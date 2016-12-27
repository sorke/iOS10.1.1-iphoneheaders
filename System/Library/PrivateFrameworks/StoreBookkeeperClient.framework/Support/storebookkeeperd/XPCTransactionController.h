/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:47:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface XPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _openTransactions;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSMutableArray * openTransactions;               //@synthesize openTransactions=_openTransactions - In the implementation block
+(id)sharedInstance;
-(id)beginTransactionWithIdentifier:(id)arg1 ;
-(NSMutableArray *)openTransactions;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)endTransaction:(id)arg1 ;
-(BOOL)isInTransaction;
@end

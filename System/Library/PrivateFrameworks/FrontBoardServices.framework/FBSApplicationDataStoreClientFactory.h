/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;
@class NSObject, NSArray;

@interface FBSApplicationDataStoreClientFactory : NSObject {

	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBSApplicationDataStoreRepositoryClient> _sharedClient;
	Class _dataStoreClientClass;
	NSArray* _prefetchedKeys;

}

@property (nonatomic,retain) NSArray * prefetchedKeys;              //@synthesize prefetchedKeys=_prefetchedKeys - In the implementation block
+(id)sharedInstance;
-(NSArray *)prefetchedKeys;
-(void)setPrefetchedKeys:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)checkin;
-(id)checkout;
-(void)registerClientClass:(Class)arg1 ;
@end


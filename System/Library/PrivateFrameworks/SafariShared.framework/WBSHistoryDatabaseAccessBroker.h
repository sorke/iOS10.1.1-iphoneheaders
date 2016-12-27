/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface WBSHistoryDatabaseAccessBroker : NSObject {

	NSURL* _historyDatabaseURL;
	NSObject*<OS_dispatch_queue> _writeRequestQueue;

}
-(id)init;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(/*^block*/id)arg3 ;
-(void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)initWithHistoryDatabaseURL:(id)arg1 ;
-(id)databaseLastModifiedDate;
@end

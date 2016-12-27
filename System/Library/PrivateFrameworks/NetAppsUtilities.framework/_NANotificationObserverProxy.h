/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/_NAObserverProxy.h>

@class NSOperationQueue, NSString;

@interface _NANotificationObserverProxy : _NAObserverProxy {

	id _notificationObserver;
	NSOperationQueue* _observerQueue;
	/*^block*/id _observerBlock;
	NSString* _notificationName;

}

@property (nonatomic,readonly) NSOperationQueue * observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(void)invalidate;
-(id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)performObserverBlock;
-(NSOperationQueue *)observerQueue;
-(NSString *)notificationName;
-(id)observerBlock;
@end

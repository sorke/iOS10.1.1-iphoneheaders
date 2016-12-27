/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface AVDispatchGroup : NSObject {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSArray* _notifyBlocks;
	long long _outstandingOperations;

}
-(id)init;
-(void)dealloc;
-(void)enter;
-(void)notifyUsingBlock:(/*^block*/id)arg1 ;
-(void)leave;
-(void)finalize;
@end

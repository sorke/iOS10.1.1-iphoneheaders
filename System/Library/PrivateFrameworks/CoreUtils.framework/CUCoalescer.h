/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CUCoalescer : NSObject {

	BOOL _invalidateCalled;
	double _startTime;
	NSObject*<OS_dispatch_source> _timer;
	int _triggered;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	double _leeway;
	double _maxDelay;
	double _minDelay;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (assign,nonatomic) double maxDelay;                                         //@synthesize maxDelay=_maxDelay - In the implementation block
@property (assign,nonatomic) double minDelay;                                         //@synthesize minDelay=_minDelay - In the implementation block
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)_trigger;
-(void)trigger;
-(void)_invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_cancel;
-(void)setLeeway:(double)arg1 ;
-(double)leeway;
-(void)_timerFired;
-(double)maxDelay;
-(void)setMaxDelay:(double)arg1 ;
-(double)minDelay;
-(void)setMinDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
@end


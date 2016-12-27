/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;
@class NSOperationQueue, NSObject, NSDate;

@interface _HDDemoDataModule : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	id<_HDDemoDataModuleDelegate> _delegate;
	NSDate* _lastFireDate;

}

@property (nonatomic,readonly) NSDate * lastFireDate;                                    //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,readonly) double nextFireInterval; 
@property (assign,nonatomic,__weak) id<_HDDemoDataModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_HDDemoDataModuleDelegate>)arg1 ;
-(id<_HDDemoDataModuleDelegate>)delegate;
-(void)stop;
-(void)start;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)scheduleNextFire;
-(double)nextFireInterval;
-(void)scheduleNextFireWithInterval:(double)arg1 ;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)handleDataObject:(id)arg1 ;
-(NSDate *)lastFireDate;
@end

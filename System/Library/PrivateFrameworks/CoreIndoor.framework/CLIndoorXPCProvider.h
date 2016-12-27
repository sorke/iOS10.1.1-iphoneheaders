/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSObject, NSXPCConnection;

@interface CLIndoorXPCProvider : NSObject {

	NSObject*<OS_dispatch_queue> _frameworkQueue;
	NSXPCConnection* _connection;
	optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > _lastReconnectTime;
	NSObject*<OS_dispatch_source> _interruptReconnection;

}
+(id)newConnectionFor:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithConnection:(id)arg1 ;
-(/*^block*/id)_defaultErrHandler:(/*^block*/id)arg1 forCaller:(id)arg2 ;
-(/*^block*/id)_defaultErrHandlerForCaller:(id)arg1 ;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueInitializeConnection;
-(void)withinQueueInvalidate;
-(void)withinQueueHandleReconnect:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(int)withinQueueShouldReinitializeRemote:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)withinQueueScheduleReconnect:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1 reason:(id)arg2 reinitializeConnection:(BOOL)arg3 ;
-(void)withinQueueInterruptionHandler;
-(void)withinQueueReconnectInvalidatedConnection;
-(id)impl;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMNebulaDaemonClientProtocol.h>
#import <libobjc.A.dylib/CAMNebulaDaemonProtocol.h>

@protocol CAMNebulaDaemonTimelapseClientProtocol, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol> {

	id<CAMNebulaDaemonTimelapseClientProtocol> _timelapseClientDelegate;
	NSObject*<OS_dispatch_queue> __queue;
	NSXPCConnection* __connection;
	long long __connectionCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                                  //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * _connection;                                                        //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,readonly) long long _connectionCount;                                                           //@synthesize _connectionCount=__connectionCount - In the implementation block
@property (assign,nonatomic,__weak) id<CAMNebulaDaemonTimelapseClientProtocol> timelapseClientDelegate;              //@synthesize timelapseClientDelegate=_timelapseClientDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonProtocolInterface;
+(id)_clientProtocolInterface;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(NSXPCConnection *)_connection;
-(void)startTimelapseWithUUID:(id)arg1 ;
-(void)resumeTimelapseWithUUID:(id)arg1 ;
-(void)updateTimelapseWithUUID:(id)arg1 ;
-(void)finishCaptureForTimelapseWithUUID:(id)arg1 ;
-(void)stopTimelapseWithUUID:(id)arg1 ;
-(void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1 ;
-(void)enqueueIrisVideoJobs:(id)arg1 ;
-(void)performIrisCrashRecovery;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(void)_getProxyForExecutingBlock:(/*^block*/id)arg1 ;
-(void)_ensureConnectionToDaemon;
-(void)_closeConnectionToDaemon;
-(void)ensureConnectionToDaemon;
-(void)closeConnectionToDaemon;
-(void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)arg1 ;
-(id<CAMNebulaDaemonTimelapseClientProtocol>)timelapseClientDelegate;
-(void)setTimelapseClientDelegate:(id<CAMNebulaDaemonTimelapseClientProtocol>)arg1 ;
-(long long)_connectionCount;
@end


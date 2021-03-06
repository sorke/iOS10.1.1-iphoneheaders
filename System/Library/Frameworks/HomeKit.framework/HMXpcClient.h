/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>

@protocol OS_dispatch_queue;
@class HMFMessageDispatcher, NSXPCConnection, NSObject, NSString;

@interface HMXpcClient : HMFMessageTransport <HMXPCMessageTransport> {

	BOOL _connectionValid;
	BOOL _requiresCheckin;
	BOOL _notifyRegistered;
	int _notifyRegisterToken;
	HMFMessageDispatcher* _messageDispatcher;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _reconnectionHandler;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL connectionValid;                                    //@synthesize connectionValid=_connectionValid - In the implementation block
@property (assign,nonatomic) BOOL requiresCheckin;                                    //@synthesize requiresCheckin=_requiresCheckin - In the implementation block
@property (assign,nonatomic) int notifyRegisterToken;                                 //@synthesize notifyRegisterToken=_notifyRegisterToken - In the implementation block
@property (assign,nonatomic) BOOL notifyRegistered;                                   //@synthesize notifyRegistered=_notifyRegistered - In the implementation block
@property (nonatomic,copy) id reconnectionHandler;                                    //@synthesize reconnectionHandler=_reconnectionHandler - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)connection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)notifyRegistered;
-(int)notifyRegisterToken;
-(BOOL)connectionValid;
-(id)reconnectionHandler;
-(void)setRequiresCheckin:(BOOL)arg1 ;
-(void)setConnectionValid:(BOOL)arg1 ;
-(void)setNotifyRegisterToken:(int)arg1 ;
-(void)setNotifyRegistered:(BOOL)arg1 ;
-(void)setReconnectionHandler:(id)arg1 ;
-(void)recheckinIfRequired:(id)arg1 ;
-(BOOL)requiresCheckin;
-(void)registerReconnectionHandler:(/*^block*/id)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end


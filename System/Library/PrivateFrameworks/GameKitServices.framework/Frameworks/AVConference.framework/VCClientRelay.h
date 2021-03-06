/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCClientRelay : NSObject {

	int _vtpSocket;
	int _idsSocket;
	NSObject*<OS_dispatch_source> _idsReadSource;
	NSObject*<OS_dispatch_queue> _idsReadQueue;
	BOOL _isConnectionResultSet;
	tagCONNRESULT* _connectionResult;
	sockaddr_storage _vtpDestination;
	unsigned _vtpDestinationLength;
	OpaqueFigThreadRef _vtpReceiveTID;
	BOOL _stopVTPReceiveThread;

}

@property (readonly) BOOL stopVTPReceiveThread;              //@synthesize stopVTPReceiveThread=_stopVTPReceiveThread - In the implementation block
-(void)dealloc;
-(int)setupVTPSocket;
-(BOOL)relayIDSPacket;
-(int)stopRelay;
-(id)initWithIDSSocket:(int)arg1 ;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(int)startRelay;
-(BOOL)relayVTPPacket;
-(BOOL)stopVTPReceiveThread;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUIApplicationServiceDelegate;
@class FBSSerialQueue;

@interface FBUIApplicationService : NSObject {

	FBSSerialQueue* _queue;
	id<FBUIApplicationServiceDelegate> _delegate;

}

@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) id<FBUIApplicationServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)setDelegate:(id<FBUIApplicationServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<FBUIApplicationServiceDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(FBSSerialQueue *)queue;
-(void)handleGetActiveInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)handleApplication:(id)arg1 setBadgeValue:(id)arg2 ;
-(void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(/*^block*/id)arg2 ;
-(void)handleDeleteAllSnapshotsForApplication:(id)arg1 ;
-(void)handleSuspendApplicationProcess:(id)arg1 ;
-(void)handleApplicationProcess:(id)arg1 requestBrightness:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)handleApplicationProcess:(id)arg1 setNextWakeInterval:(double)arg2 ;
@end


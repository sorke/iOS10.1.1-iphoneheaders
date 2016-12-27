/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FMDispatchTimer;

@interface FMNanoIDSRequest : NSObject {

	NSString* _idsMessageID;
	/*^block*/id _responseHandler;
	FMDispatchTimer* _timer;

}

@property (nonatomic,retain) NSString * idsMessageID;              //@synthesize idsMessageID=_idsMessageID - In the implementation block
@property (nonatomic,copy) id responseHandler;                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) FMDispatchTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(FMDispatchTimer *)timer;
-(void)setTimer:(FMDispatchTimer *)arg1 ;
-(NSString *)idsMessageID;
-(void)setIdsMessageID:(NSString *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
@end

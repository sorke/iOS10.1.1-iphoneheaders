/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	/*^block*/id _logParsedObjectBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
@property (nonatomic,copy) id logParsedObjectBlock;                                  //@synthesize logParsedObjectBlock=_logParsedObjectBlock - In the implementation block
-(NSError *)parserError;
-(id)initWithRequest:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)setLogParsedObjectBlock:(id)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(void)setParserError:(NSError *)arg1 ;
-(id)logParsedObjectBlock;
-(id)objectParsedBlock;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCStreaming.h>

@protocol FCStreaming;
@class NSString;

@interface FCTransformedResultsStream : NSObject <FCStreaming> {

	id<FCStreaming> _stream;
	/*^block*/id _asyncTransformBlock;

}

@property (nonatomic,retain) id<FCStreaming> stream;                         //@synthesize stream=_stream - In the implementation block
@property (nonatomic,copy) id asyncTransformBlock;                           //@synthesize asyncTransformBlock=_asyncTransformBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
-(BOOL)isFinished;
-(id<FCStreaming>)stream;
-(id)initWithStream:(id)arg1 asyncTransformBlock:(/*^block*/id)arg2 ;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)asyncTransformBlock;
-(void)setStream:(id<FCStreaming>)arg1 ;
-(void)setAsyncTransformBlock:(id)arg1 ;
@end


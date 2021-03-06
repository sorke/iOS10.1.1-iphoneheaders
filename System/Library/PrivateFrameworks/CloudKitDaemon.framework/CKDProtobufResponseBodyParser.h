/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDResponseBodyParser.h>

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser {

	BOOL _isParsing;
	Class _messageClass;
	NSMutableData* _tailParserData;
	unsigned long long _curObjectLength;
	CC_SHA256state_st _mescalSignature;

}

@property (nonatomic,retain) NSMutableData * tailParserData;                  //@synthesize tailParserData=_tailParserData - In the implementation block
@property (assign,nonatomic) unsigned long long curObjectLength;              //@synthesize curObjectLength=_curObjectLength - In the implementation block
@property (assign,nonatomic) BOOL isParsing;                                  //@synthesize isParsing=_isParsing - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st mescalSignature;               //@synthesize mescalSignature=_mescalSignature - In the implementation block
@property (assign,nonatomic) Class messageClass;                              //@synthesize messageClass=_messageClass - In the implementation block
-(id)initWithRequest:(id)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(Class)messageClass;
-(unsigned long long)curObjectLength;
-(void)setCurObjectLength:(unsigned long long)arg1 ;
-(BOOL)_parseObjectFromData:(id)arg1 rawData:(id)arg2 ;
-(void)setTailParserData:(NSMutableData *)arg1 ;
-(BOOL)isParsing;
-(void)setIsParsing:(BOOL)arg1 ;
-(NSMutableData *)tailParserData;
-(BOOL)_parseObjects:(BOOL)arg1 ;
-(CC_SHA256state_st)mescalSignature;
-(void)setMescalSignature:(CC_SHA256state_st)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWiProxLeScanStartRequest : PBRequest <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataLength;
	unsigned _numPeers;
	NSData* _peers;
	NSString* _sessionId;
	int _type;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDataLength; 
@property (assign,nonatomic) unsigned dataLength;                       //@synthesize dataLength=_dataLength - In the implementation block
@property (assign,nonatomic) BOOL hasNumPeers; 
@property (assign,nonatomic) unsigned numPeers;                         //@synthesize numPeers=_numPeers - In the implementation block
@property (nonatomic,readonly) BOOL hasPeers; 
@property (nonatomic,retain) NSData * peers;                            //@synthesize peers=_peers - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(NSString *)sessionId;
-(unsigned)dataLength;
-(void)setHasDataLength:(BOOL)arg1 ;
-(BOOL)hasDataLength;
-(void)setPeers:(NSData *)arg1 ;
-(void)setNumPeers:(unsigned)arg1 ;
-(void)setHasNumPeers:(BOOL)arg1 ;
-(BOOL)hasNumPeers;
-(BOOL)hasPeers;
-(unsigned)numPeers;
-(NSData *)peers;
-(void)setDataLength:(unsigned)arg1 ;
@end


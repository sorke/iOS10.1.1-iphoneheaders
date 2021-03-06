/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCarouselLowerButtonLongPressed : PBCodable <NSCopying> {

	unsigned long long _durationMs;
	unsigned long long _timestamp;
	BOOL _isOnWrist;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned long long durationMs;              //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasIsOnWrist; 
@property (assign,nonatomic) BOOL isOnWrist;                             //@synthesize isOnWrist=_isOnWrist - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIsOnWrist:(BOOL)arg1 ;
-(void)setHasIsOnWrist:(BOOL)arg1 ;
-(BOOL)hasIsOnWrist;
-(BOOL)isOnWrist;
-(void)setDurationMs:(unsigned long long)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(unsigned long long)durationMs;
@end


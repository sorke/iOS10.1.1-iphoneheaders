/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HealthUIAWDHealthUIOrganDonationFlowImpressionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _sourceOfFlowImpression;
	SCD_Struct_He10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSourceOfFlowImpression; 
@property (assign,nonatomic) int sourceOfFlowImpression;                  //@synthesize sourceOfFlowImpression=_sourceOfFlowImpression - In the implementation block
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
-(int)sourceOfFlowImpression;
-(void)setSourceOfFlowImpression:(int)arg1 ;
-(void)setHasSourceOfFlowImpression:(BOOL)arg1 ;
-(BOOL)hasSourceOfFlowImpression;
-(id)sourceOfFlowImpressionAsString:(int)arg1 ;
-(int)StringAsSourceOfFlowImpression:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionFeedbacks;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionFeedbacks;              //@synthesize stateTransitionFeedbacks=_stateTransitionFeedbacks - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                              //@synthesize durationInOldState=_durationInOldState - In the implementation block
+(Class)stateTransitionFeedbackType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearStateTransitionFeedbacks;
-(void)addStateTransitionFeedback:(id)arg1 ;
-(unsigned long long)stateTransitionFeedbacksCount;
-(id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(NSMutableArray *)stateTransitionFeedbacks;
-(void)setStateTransitionFeedbacks:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
@end


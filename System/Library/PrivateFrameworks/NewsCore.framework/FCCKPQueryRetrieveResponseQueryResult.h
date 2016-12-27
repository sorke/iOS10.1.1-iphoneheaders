/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPRecordIdentifier, FCCKPRecord;

@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {

	NSString* _etag;
	FCCKPRecordIdentifier* _identifier;
	FCCKPRecord* _record;
	int _type;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) FCCKPRecord * record;                            //@synthesize record=_record - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FCCKPRecordIdentifier *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasEtag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(FCCKPRecord *)record;
-(void)setRecord:(FCCKPRecord *)arg1 ;
-(BOOL)hasRecord;
@end

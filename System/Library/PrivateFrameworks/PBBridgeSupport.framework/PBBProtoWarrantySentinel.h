/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSString* _deviceName;
	BOOL _removeSentinel;
	BOOL _sentinelExists;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasSentinelExists; 
@property (assign,nonatomic) BOOL sentinelExists;                          //@synthesize sentinelExists=_sentinelExists - In the implementation block
@property (assign,nonatomic) BOOL hasRemoveSentinel; 
@property (assign,nonatomic) BOOL removeSentinel;                          //@synthesize removeSentinel=_removeSentinel - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(void)setSentinelExists:(BOOL)arg1 ;
-(void)setHasSentinelExists:(BOOL)arg1 ;
-(BOOL)hasSentinelExists;
-(void)setRemoveSentinel:(BOOL)arg1 ;
-(void)setHasRemoveSentinel:(BOOL)arg1 ;
-(BOOL)hasRemoveSentinel;
-(BOOL)hasAppleLocale;
-(BOOL)sentinelExists;
-(BOOL)removeSentinel;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(NSString *)deviceName;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPShare;

@interface CKDPShareSaveRequest : PBRequest <NSCopying> {

	NSData* _protectedFullToken;
	CKDPShare* _share;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;                         //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                   //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;               //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSData *)protectedFullToken;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(BOOL)hasProtectedFullToken;
-(BOOL)hasShare;
@end


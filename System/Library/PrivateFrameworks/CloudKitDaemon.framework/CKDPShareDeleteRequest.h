/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareDeleteRequest : PBRequest <NSCopying> {

	NSString* _etag;
	CKDPProtectionInfo* _oBSOLETESelfAddedPcs;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                          //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                        //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETESelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * oBSOLETESelfAddedPcs;              //@synthesize oBSOLETESelfAddedPcs=_oBSOLETESelfAddedPcs - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)etag;
-(BOOL)hasEtag;
-(void)setEtag:(NSString *)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setOBSOLETESelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasOBSOLETESelfAddedPcs;
-(CKDPProtectionInfo *)oBSOLETESelfAddedPcs;
@end

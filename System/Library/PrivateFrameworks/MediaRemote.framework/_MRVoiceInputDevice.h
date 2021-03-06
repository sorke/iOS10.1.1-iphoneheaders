/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {

	_MRVoiceInputDeviceDescriptorProtobuf* _descriptor;
	unsigned _deviceID;
	int _recordingState;
	SCD_Struct_MR3 _has;

}

@property (assign,nonatomic) BOOL hasDeviceID; 
@property (assign,nonatomic) unsigned deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) _MRVoiceInputDeviceDescriptorProtobuf * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL hasRecordingState; 
@property (assign,nonatomic) int recordingState;                                              //@synthesize recordingState=_recordingState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDescriptor:(_MRVoiceInputDeviceDescriptorProtobuf *)arg1 ;
-(_MRVoiceInputDeviceDescriptorProtobuf *)descriptor;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)recordingState;
-(void)setRecordingState:(int)arg1 ;
-(BOOL)hasDescriptor;
-(void)setHasDeviceID:(BOOL)arg1 ;
-(BOOL)hasDeviceID;
-(void)setHasRecordingState:(BOOL)arg1 ;
-(BOOL)hasRecordingState;
-(id)recordingStateAsString:(int)arg1 ;
-(int)StringAsRecordingState:(id)arg1 ;
-(void)setDeviceID:(unsigned)arg1 ;
-(unsigned)deviceID;
@end


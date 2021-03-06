/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHStyleOwnerUUIDEncoder : NSObject {

	unsigned char mUUID[16];
	unsigned long long mIndex;

}
+(id)styleOwnerBaseUUIDString;
+(id)UUIDEncoder;
+(id)styleOwnerBaseUUID;
+(id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg1 ;
-(BOOL)hasSpaceToEncodeNumberOfBytes:(unsigned long long)arg1 ;
-(void)encodeUInt64FromNSUInteger:(unsigned long long)arg1 ;
-(id)encodedUUID;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(id)init;
@end


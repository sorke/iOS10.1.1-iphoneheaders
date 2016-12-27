/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {

	BOOL _shouldReadRawEncryptedData;
	NSString* _UUID;
	NSString* _path;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;

}

@property (nonatomic,retain) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                            //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                      //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;              //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(NSString *)UUID;
-(void)setPath:(NSString *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(id)CKPropertiesDescription;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(BOOL)shouldReadRawEncryptedData;
-(void)setUUID:(NSString *)arg1 ;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
@end

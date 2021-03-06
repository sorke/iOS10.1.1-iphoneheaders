/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSURL, NSString, NSData, NSDictionary;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding> {

	BOOL _isSticker;
	UIImage* _image;
	NSURL* _mediaURL;
	NSString* _mediaType;
	NSString* _text;
	NSData* _mediaData;
	NSString* _mediaFilename;
	NSData* _data;
	NSString* _accessibilityLabel;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * mediaURL;                            //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,copy) NSData * mediaData;                          //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                        //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * mediaFilename;                    //@synthesize mediaFilename=_mediaFilename - In the implementation block
@property (nonatomic,copy) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;               //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (assign,nonatomic) BOOL isSticker;                            //@synthesize isSticker=_isSticker - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSString *)mediaType;
-(NSURL *)mediaURL;
-(void)setMediaType:(NSString *)arg1 ;
-(BOOL)isSticker;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(void)setIsSticker:(BOOL)arg1 ;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
-(id)initWithSticker:(id)arg1 ;
-(NSString *)mediaFilename;
-(void)setMediaFilename:(NSString *)arg1 ;
@end


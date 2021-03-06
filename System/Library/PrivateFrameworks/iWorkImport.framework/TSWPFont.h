/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSWPFont : NSObject {

	NSString* _fontName;
	NSString* _compatibilityName;
	NSString* _displayName;
	NSString* _familyName;
	unsigned long long _hash;

}

@property (nonatomic,copy) NSString * fontName;                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * compatibilityName;              //@synthesize compatibilityName=_compatibilityName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * familyName; 
+(id)fontWithName:(id)arg1 compatibilityName:(id)arg2 ;
+(id)fontForStyles:(id*)arg1 count:(unsigned long long)arg2 ;
+(BOOL)isKeyValueProxyLeafType;
+(id)fontWithName:(id)arg1 ;
-(id)initWithFontName:(id)arg1 compatibilityName:(id)arg2 ;
-(void)setCompatibilityName:(NSString *)arg1 ;
-(NSString *)compatibilityName;
-(id)initWithFontName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(NSString *)familyName;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)displayName;
@end


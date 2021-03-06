/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying> {

	BOOL _lodAverage;

}

@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
@property (assign,nonatomic) unsigned long long maxAnisotropy; 
@property (assign,nonatomic) unsigned long long sAddressMode; 
@property (assign,nonatomic) unsigned long long tAddressMode; 
@property (assign,nonatomic) unsigned long long rAddressMode; 
@property (assign,nonatomic) unsigned long long borderColor; 
@property (assign,nonatomic) BOOL normalizedCoordinates; 
@property (assign,nonatomic) float lodMinClamp; 
@property (assign,nonatomic) float lodMaxClamp; 
@property (assign,nonatomic) BOOL lodAverage;                                 //@synthesize lodAverage=_lodAverage - In the implementation block
@property (assign,nonatomic) unsigned long long compareFunction; 
@property (nonatomic,copy) NSString * label; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


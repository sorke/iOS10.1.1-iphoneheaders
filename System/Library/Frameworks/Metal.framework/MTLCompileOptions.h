/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (assign,nonatomic) BOOL glBufferBindPoints; 
@property (assign,nonatomic) BOOL debuggingEnabled; 
@property (nonatomic,copy) NSDictionary * preprocessorMacros; 
@property (assign,nonatomic) BOOL fastMathEnabled; 
@property (assign,nonatomic) unsigned long long languageVersion; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


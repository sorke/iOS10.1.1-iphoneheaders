/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MRUniform : MUPoolObject {

	float m[16];
	long long i;
	long long length;

}
+(BOOL)clearVars;
+(SCD_Struct_MU3*)poolInfo;
-(id)initWithVec2:(double)arg1 :(double)arg2 ;
-(id)initWithVec3:(double)arg1 :(double)arg2 :(double)arg3 ;
-(id)initWithMat4ForMat3:(float)arg1 ;
-(id)initWithVec4:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(id)initWithI:(long long)arg1 ;
-(id)initWithMat4:(float)arg1 ;
-(id)initWithFloat:(double)arg1 ;
@end


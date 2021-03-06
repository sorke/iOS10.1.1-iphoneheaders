/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSArray;

@interface ISCrossfadeItem : NSObject {

	int _firstImageOrientation;
	unsigned long long _numberOfFrames;
	double _crossfadeDuration;
	NSArray* _images;
	NSArray* _animations;
	SCD_Struct_IS4 _videoDuration;

}

@property (nonatomic,readonly) unsigned long long numberOfFrames;              //@synthesize numberOfFrames=_numberOfFrames - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 videoDuration;                   //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double crossfadeDuration;                       //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                          //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSArray * animations;                      //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) int firstImageOrientation;                      //@synthesize firstImageOrientation=_firstImageOrientation - In the implementation block
-(NSArray *)images;
-(NSArray *)animations;
-(SCD_Struct_IS4)videoDuration;
-(double)crossfadeDuration;
-(unsigned long long)numberOfFrames;
-(id)initWithImages:(id)arg1 firstImageOrientation:(int)arg2 animations:(id)arg3 videoDuration:(SCD_Struct_IS4)arg4 crossfadeDuration:(double)arg5 ;
-(int)firstImageOrientation;
@end


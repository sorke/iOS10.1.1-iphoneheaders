/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ISPlayerState : NSObject {

	NSString* _diagnosticLabel;
	double _scale;
	double _photoBlurRadius;
	double _videoAlpha;
	double _videoBlurRadius;
	double _crossfadeAlpha;
	double _crossfadeBlurRadius;

}

@property (nonatomic,readonly) NSString * diagnosticLabel;              //@synthesize diagnosticLabel=_diagnosticLabel - In the implementation block
@property (nonatomic,readonly) double scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double photoBlurRadius;                  //@synthesize photoBlurRadius=_photoBlurRadius - In the implementation block
@property (nonatomic,readonly) double videoAlpha;                       //@synthesize videoAlpha=_videoAlpha - In the implementation block
@property (nonatomic,readonly) double videoBlurRadius;                  //@synthesize videoBlurRadius=_videoBlurRadius - In the implementation block
@property (nonatomic,readonly) double crossfadeAlpha;                   //@synthesize crossfadeAlpha=_crossfadeAlpha - In the implementation block
@property (nonatomic,readonly) double crossfadeBlurRadius;              //@synthesize crossfadeBlurRadius=_crossfadeBlurRadius - In the implementation block
+(id)outputInfoWithScale:(double)arg1 photoBlurRadius:(double)arg2 videoAlpha:(double)arg3 videoBlurRadius:(double)arg4 crossfadeAlpha:(double)arg5 crossfadeBlurRadius:(double)arg6 label:(id)arg7 ;
-(id)description;
-(double)scale;
-(id)initWithScale:(double)arg1 photoBlurRadius:(double)arg2 videoAlpha:(double)arg3 videoBlurRadius:(double)arg4 crossfadeAlpha:(double)arg5 crossfadeBlurRadius:(double)arg6 label:(id)arg7 ;
-(double)photoBlurRadius;
-(NSString *)diagnosticLabel;
-(double)videoAlpha;
-(double)videoBlurRadius;
-(double)crossfadeAlpha;
-(double)crossfadeBlurRadius;
@end


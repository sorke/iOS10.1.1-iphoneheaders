/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCaptureResponse.h>

@class UIImage, NSData, NSString, NSMutableDictionary, CIFilter, NSDictionary;

@interface CMKStillImageCaptureResponse : CMKCaptureResponse {

	BOOL _transient;
	BOOL _finalResponse;
	UIImage* _stillImageOriginalImage;
	NSData* _stillImageJPEGData;
	NSString* _timelapseDestinationPath;
	NSString* _avalancheUUID;
	opaqueCMSampleBufferRef _stillImageOriginalSampleBuffer;
	IOSurfaceRef _stillImageOriginalSurface;
	unsigned long long _stillImageOriginalSurfaceSize;
	IOSurfaceRef _stillImageUnfilteredPreviewSurface;
	IOSurfaceRef _stillImageFilteredPreviewSurface;
	UIImage* _stillImageUnfilteredPreviewImage;
	UIImage* _stillImageFilteredPreviewImage;
	NSMutableDictionary* _stillImageJob;
	/*^block*/id _stillImageRequestEnqueuedBlock;
	/*^block*/id _stillImageCompletionBlock;
	CIFilter* _effectFilter;

}

@property (nonatomic,copy) NSString * timelapseDestinationPath;                                   //@synthesize timelapseDestinationPath=_timelapseDestinationPath - In the implementation block
@property (nonatomic,copy) NSString * avalancheUUID;                                              //@synthesize avalancheUUID=_avalancheUUID - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                   //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                           //@synthesize finalResponse=_finalResponse - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef stillImageOriginalSampleBuffer;              //@synthesize stillImageOriginalSampleBuffer=_stillImageOriginalSampleBuffer - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageOriginalSurface;                              //@synthesize stillImageOriginalSurface=_stillImageOriginalSurface - In the implementation block
@property (assign,nonatomic) unsigned long long stillImageOriginalSurfaceSize;                    //@synthesize stillImageOriginalSurfaceSize=_stillImageOriginalSurfaceSize - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageUnfilteredPreviewSurface;                     //@synthesize stillImageUnfilteredPreviewSurface=_stillImageUnfilteredPreviewSurface - In the implementation block
@property (assign,nonatomic) IOSurfaceRef stillImageFilteredPreviewSurface;                       //@synthesize stillImageFilteredPreviewSurface=_stillImageFilteredPreviewSurface - In the implementation block
@property (nonatomic,retain) UIImage * stillImageOriginalImage;                                   //@synthesize stillImageOriginalImage=_stillImageOriginalImage - In the implementation block
@property (nonatomic,retain) UIImage * stillImageUnfilteredPreviewImage;                          //@synthesize stillImageUnfilteredPreviewImage=_stillImageUnfilteredPreviewImage - In the implementation block
@property (nonatomic,retain) UIImage * stillImageFilteredPreviewImage;                            //@synthesize stillImageFilteredPreviewImage=_stillImageFilteredPreviewImage - In the implementation block
@property (nonatomic,retain) NSData * stillImageJPEGData;                                         //@synthesize stillImageJPEGData=_stillImageJPEGData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stillImageJob;                                 //@synthesize stillImageJob=_stillImageJob - In the implementation block
@property (nonatomic,copy) id stillImageRequestEnqueuedBlock;                                     //@synthesize stillImageRequestEnqueuedBlock=_stillImageRequestEnqueuedBlock - In the implementation block
@property (nonatomic,copy) id stillImageCompletionBlock;                                          //@synthesize stillImageCompletionBlock=_stillImageCompletionBlock - In the implementation block
@property (nonatomic,copy) CIFilter * effectFilter;                                               //@synthesize effectFilter=_effectFilter - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
-(id)init;
-(void)dealloc;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(void)setTimelapseDestinationPath:(NSString *)arg1 ;
-(UIImage *)stillImageUnfilteredPreviewImage;
-(UIImage *)stillImageFilteredPreviewImage;
-(void)setStillImageOriginalSurface:(IOSurfaceRef)arg1 ;
-(void)setStillImageFilteredPreviewSurface:(IOSurfaceRef)arg1 ;
-(void)setStillImageUnfilteredPreviewSurface:(IOSurfaceRef)arg1 ;
-(UIImage *)stillImageOriginalImage;
-(void)setStillImageOriginalImage:(UIImage *)arg1 ;
-(NSData *)stillImageJPEGData;
-(void)setStillImageJPEGData:(NSData *)arg1 ;
-(NSString *)timelapseDestinationPath;
-(opaqueCMSampleBufferRef)stillImageOriginalSampleBuffer;
-(void)setStillImageOriginalSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(IOSurfaceRef)stillImageOriginalSurface;
-(unsigned long long)stillImageOriginalSurfaceSize;
-(void)setStillImageOriginalSurfaceSize:(unsigned long long)arg1 ;
-(void)setStillImageUnfilteredPreviewImage:(UIImage *)arg1 ;
-(void)setStillImageFilteredPreviewImage:(UIImage *)arg1 ;
-(NSMutableDictionary *)stillImageJob;
-(void)setStillImageJob:(NSMutableDictionary *)arg1 ;
-(id)stillImageRequestEnqueuedBlock;
-(void)setStillImageRequestEnqueuedBlock:(id)arg1 ;
-(id)stillImageCompletionBlock;
-(void)setStillImageCompletionBlock:(id)arg1 ;
-(CIFilter *)effectFilter;
-(void)setEffectFilter:(CIFilter *)arg1 ;
-(NSString *)avalancheUUID;
-(void)setAvalancheUUID:(NSString *)arg1 ;
-(UIImage *)thumbnailImage;
-(NSDictionary *)stillImageMetadata;
-(IOSurfaceRef)stillImageUnfilteredPreviewSurface;
-(IOSurfaceRef)stillImageFilteredPreviewSurface;
-(void)releaseCachedImages;
@end


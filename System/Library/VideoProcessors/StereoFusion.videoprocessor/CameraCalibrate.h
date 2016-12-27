/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/StereoFusion.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SidecarWriter;
#import <StereoFusion.videoprocessor/StereoFusion.videoprocessor-Structs.h>
@class CalibrationADC, NSDictionary;

@interface CameraCalibrate : NSObject {

	SCD_Struct_Ca7 calibInfo;
	CalibrationADC* _calibrationADC;
	NSDictionary* _options;
	BOOL _adcAllowToFailOneTime;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
-(id)initWithMetalContext:(id)arg1 options:(id)arg2 ;
-(void)calibrateCamerasWithReferenceCamera:(int)arg1 outputCalib:(SCD_Struct_Ca6*)arg2 ;
-(void)calculateOverlapROIFromReferenceCamera:(int)arg1 outputRefROI:(SCD_Struct_Ca5*)arg2 outputWarpROI:(SCD_Struct_Ca5*)arg3 ;
-(SCD_Struct_Ca0)homographyAtDepth:(unsigned)arg1 referenceCamera:(int)arg2 referenceROI:(SCD_Struct_Ca5*)arg3 warpedCamera:(int)arg4 warpedROI:(SCD_Struct_Ca5*)arg5 ;
-(SCD_Struct_Ca0)homographyToCalibrationBaseAtDepth:(unsigned)arg1 fromCamera:(int)arg2 ;
-(void)warpROI:(SCD_Struct_Ca5*)arg1 homography:(SCD_Struct_Ca0)arg2 outROI:(SCD_Struct_Ca5*)arg3 ;
-(void)calculateOverlapROIFromCamera:(int)arg1 underHomography:(SCD_Struct_Ca0)arg2 toCamera:(int)arg3 outROI:(SCD_Struct_Ca5*)arg4 ;
-(int)allocateBuffersForWidth:(int)arg1 forHeight:(int)arg2 ;
-(void)releaseBuffers;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)calibrateUsingWideImage:(opaqueCMSampleBufferRef)arg1 andTeleImage:(opaqueCMSampleBufferRef)arg2 ;
-(int)adcAllowToFailOneTime;
-(id<SidecarWriter>)sidecarWriter;
@end

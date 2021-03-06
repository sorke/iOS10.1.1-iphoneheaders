/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	OpaqueVTPixelTransferSessionRef pixelTransferSession;
	CVBufferRef interimScaleBuffer;
	CVBufferRef scaleBuffer;
	SCD_Struct_CI36* CVMLFuncs;
	float* _perMeshPtr;
	void* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(id)initWithFallbackImplementation;
-(id)initWithVisionKitImplementation;
-(void)releaseResourcesVisionKit;
-(void)releaseResourcesFallBack;
-(id)featuresInImageVisionKit:(id)arg1 options:(id)arg2 ;
-(id)featuresInImageFallback:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(void)releaseResources;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)finalize;
@end


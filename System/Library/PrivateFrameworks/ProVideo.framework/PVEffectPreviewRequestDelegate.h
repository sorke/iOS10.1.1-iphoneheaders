/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderRequestDelegate.h>

@class PVEffect, UIImage, PVEffectPreviewGenerator, NSString, PVVideoCompositingContext;

@interface PVEffectPreviewRequestDelegate : NSObject <PVRenderRequestDelegate> {

	PVEffect* m_effect;
	SCD_Struct_PV14 m_time;
	UIImage* m_input;
	HGRef<HGNode>* m_inputHGNode;
	CGSize m_outputSize;
	/*^block*/id m_completionHandler;
	PVEffectPreviewGenerator* m_previewGenerator;
	HGRef<HGCVBitmap>* m_outputCVBitmap;
	PVImageProperties* m_imageCreationProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long requestTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned long long)requestTypeTag;
+(void)cleanupCaches;
-(int)requestPriority;
-(void)finishCancelledRequest;
-(unsigned long long)requestTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedRequest;
-(void)requestHandlerFinished:(HGRef<PVRenderRequestHandler>*)arg1 ;
-(void)_setupInputHGNode:(const HGRenderContext*)arg1 frameStats:(FrameStats*)arg2 ;
-(id)_makeResultImage;
-(id)initWEffect:(id)arg1 atTime:(SCD_Struct_PV14)arg2 inputImage:(id)arg3 outputSize:(CGSize)arg4 completionHandler:(/*^block*/id)arg5 generator:(id)arg6 ;
-(PVVideoCompositingContext *)videoCompositingContext;
@end

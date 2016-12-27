/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	BOOL _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	void* _callbackContextToken;
	NSObject*<OS_dispatch_queue> _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	BOOL _videoCompositionDidChange;
	NSObject*<OS_dispatch_queue> _clientCustomCompositorQ;
	id<AVVideoCompositing> _clientCustomCompositor;
	NSObject*<OS_dispatch_queue> _clientErrorQ;
	NSError* _clientError;
	NSObject*<OS_dispatch_queue> _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject*<OS_dispatch_queue> _finishedRequestQ;

}

@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
+(BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg1 ;
-(void)dealloc;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(BOOL)supportsWideColorSourceFrames;
-(void)_willDeallocOrFinalize;
-(id)initWithVideoComposition:(id)arg1 ;
-(int)_setupFigCallbacks;
-(void)_cleanupFigCallbacks;
-(void)request:(id)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)request:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 ;
-(int)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_AV2)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(void)finalize;
@end

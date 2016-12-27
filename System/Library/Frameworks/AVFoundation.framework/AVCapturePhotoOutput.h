/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, NSArray, AVCapturePhotoSettings;

@interface AVCapturePhotoOutput : AVCaptureOutput {

	AVCapturePhotoOutputInternal* _internal;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (nonatomic,readonly) BOOL isStillImageStabilizationScene; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) BOOL highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) BOOL lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) BOOL livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) BOOL livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) BOOL livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) BOOL livePhotoAutoTrimmingEnabled; 
+(void)initialize;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(SCD_Struct_AV34)maxLivePhotoMovieDimensions;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(unsigned long long)maxLivePhotoDataSize;
+(id)JPEGPhotoDataRepresentationForJPEGSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 previewPhotoSurface:(IOSurfaceRef)arg3 metadata:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(SCD_Struct_AV2)livePhotoMovieDuration;
-(SCD_Struct_AV2)livePhotoMovieVideoFrameDuration;
-(BOOL)isLivePhotoAutoTrimmingEnabled;
-(id)figCaptureIrisPreparedSettings;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(BOOL)isStillImageStabilizationScene;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(NSArray *)availablePhotoPixelFormatTypes;
-(NSArray *)availablePhotoCodecTypes;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(AVCapturePhotoSettings *)photoSettingsForSceneMonitoring;
-(void)_incrementObserverCountForKeyPath:(id)arg1 ;
-(void)_decrementObserverCountForKeyPath:(id)arg1 ;
-(id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2 ;
-(id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1 ;
-(void)_updateSceneMonitoringForSourceDevice:(id)arg1 ;
-(void)setFigCaptureSessionSectionProperty:(CFStringRef)arg1 withHostTime:(SCD_Struct_AV2)arg2 settingStateVaribleToNoOnFailure:(BOOL*)arg3 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(void)_resetLivePhotoMovieProcessingSuspended;
-(void)_resetLivePhotoCaptureSuspended;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(void)_updateSupportedHDRModesForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1 ;
-(void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_setIsFlashScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsHDRScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1 ;
-(void)_updateBravoImageFusionSupportedForSourceDevice:(id)arg1 ;
-(void)_updateSupportedFlashModesForSourceDevice:(id)arg1 ;
-(void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg1 ;
-(void)_toggleHDRSceneDetectionBasedOnObserverCountOnSourceDevice:(id)arg1 ;
-(void)_toggleFlashSceneDetectionBasedOnObserverCountForSourceDevice:(id)arg1 ;
-(void)_toggleStillImageStabilizationSceneDetectionBasedOnObserverCountOnSourceDevice:(id)arg1 ;
-(id)_sanitizedSettingsForSettings:(id)arg1 ;
-(id)_photoRequestForUniqueID:(long long)arg1 ;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleRawStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 request:(id)arg2 payload:(id)arg3 isOriginalMovie:(BOOL)arg4 ;
-(NSArray *)preparedPhotoSettingsArray;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLivePhotoAutoTrimmingEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg1 ;
-(BOOL)isBravoImageFusionSupported;
-(NSArray *)supportedFlashModes;
-(id)supportedHDRModes;
-(BOOL)isLivePhotoCaptureEnabled;
-(BOOL)isLivePhotoCaptureSuspended;
-(void)setLivePhotoCaptureSuspended:(BOOL)arg1 ;
-(BOOL)isHighResolutionCaptureEnabled;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isLivePhotoCaptureSupported;
-(void)removeConnection:(id)arg1 ;
-(void)setHighResolutionCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings *)arg1 ;
-(SCD_Struct_AV34)livePhotoMovieDimensions;
@end

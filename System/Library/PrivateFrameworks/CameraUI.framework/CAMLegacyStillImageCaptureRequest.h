/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/CAMPossibleOriginalRequest.h>
#import <libobjc.A.dylib/CAMEffectFilterTypeProvider.h>
#import <libobjc.A.dylib/CAMBurstIdentifierProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAMBurstRequest.h>

@protocol CAMLegacyStillImageCaptureRequestDelegate;
@class NSString;

@interface CAMLegacyStillImageCaptureRequest : CAMCaptureRequest <CAMPossibleOriginalRequest, CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest> {

	NSString* _originalPersistenceUUID;
	long long _effectFilterType;
	unsigned long long _maximumBurstLength;
	BOOL _transient;
	long long _flashMode;
	long long _hdrMode;
	BOOL _usesStillImageStabilization;
	BOOL _wantsAudioForCapture;
	NSString* _burstIdentifier;
	id<CAMLegacyStillImageCaptureRequestDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * originalPersistenceUUID;                                    //@synthesize originalPersistenceUUID=_originalPersistenceUUID - In the implementation block
@property (nonatomic,readonly) long long effectFilterType;                                                 //@synthesize effectFilterType=_effectFilterType - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBurstLength;                                      //@synthesize maximumBurstLength=_maximumBurstLength - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;                                          //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                        //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                                                          //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) BOOL usesStillImageStabilization;                                           //@synthesize usesStillImageStabilization=_usesStillImageStabilization - In the implementation block
@property (nonatomic,readonly) BOOL wantsAudioForCapture;                                                  //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                            //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMLegacyStillImageCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CAMLegacyStillImageCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTransient;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)burstIdentifier;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(long long)flashMode;
-(long long)hdrMode;
-(BOOL)usesStillImageStabilization;
-(BOOL)wantsAudioForCapture;
-(unsigned long long)maximumBurstLength;
-(long long)effectFilterType;
-(NSString *)originalPersistenceUUID;
-(id)captureRequest;
@end

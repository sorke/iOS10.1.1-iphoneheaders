/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError;

@interface AVAssetWriterHelper : NSObject {

	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;

}

@property (nonatomic,readonly) AVAssetWriterConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriter;                                  //@synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) AVMediaFileType * mediaFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV2 movieFragmentInterval; 
@property (assign,nonatomic) SCD_Struct_AV2 overallDurationHint; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (assign,nonatomic) int movieTimeScale; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) float preferredRate; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * inputGroups; 
-(id)init;
-(void)dealloc;
-(long long)status;
-(NSURL *)outputURL;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(SCD_Struct_AV2)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)overallDurationHint;
-(void)setOverallDurationHint:(SCD_Struct_AV2)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(NSArray *)inputGroups;
-(void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg1 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV2)arg1 ;
-(void)finishWriting;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(AVWeakReference *)weakReferenceToAssetWriter;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(NSError *)error;
-(CGAffineTransform)preferredTransform;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(NSArray *)inputs;
-(AVAssetWriterConfigurationState *)configurationState;
-(void)startSessionAtSourceTime:(SCD_Struct_AV2)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelWriting;
-(void)startWriting;
@end

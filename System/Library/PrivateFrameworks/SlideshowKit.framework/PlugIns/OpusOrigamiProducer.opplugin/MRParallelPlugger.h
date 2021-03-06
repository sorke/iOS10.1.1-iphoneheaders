/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCAnimationPath, MRAnimationPathScalar, MRAnimationContext, MCPlugParallel;

@interface MRParallelPlugger : NSObject {

	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	BOOL mPlugWasSetSinceLastRendering;
	unsigned char mCurrentLayoutIndex;
	BOOL mNeedsUpdate;
	MCPlugParallel* mPlug;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) BOOL needsUpdate; 
-(MCPlugParallel *)plug;
-(BOOL)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(void)setOpacityAnimationPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end


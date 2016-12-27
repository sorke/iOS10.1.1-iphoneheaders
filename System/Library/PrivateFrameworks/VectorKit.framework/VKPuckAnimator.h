/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKPuckAnimatorTarget, VKPuckAnimatorDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKTimedAnimation, VKRunningCurve, VKPuckAnimatorLocationProjector, GEORouteMatch;

@interface VKPuckAnimator : NSObject {

	id<VKPuckAnimatorTarget> _target;
	VKTimedAnimation* _animation;
	VKRunningCurve* _curve;
	VKPuckAnimatorLocationProjector* _locationProjector;
	double _vehicleHeading;
	id<VKPuckAnimatorDelegate> _delegate;
	long long _pausedCount;
	BOOL _suspended;
	double _tracePlaybackSpeedMultiplier;
	unsigned long long _behavior;
	Matrix<double, 3, 1> _lastProjectedPosition;
	GEORouteMatch* _lastProjectedLocation;

}

@property (nonatomic,retain) GEORouteMatch * lastProjectedLocation;              //@synthesize lastProjectedLocation=_lastProjectedLocation - In the implementation block
@property (nonatomic,retain) id<VKPuckAnimatorTarget> target;                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) id<VKPuckAnimatorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double tracePlaybackSpeedMultiplier;                //@synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                        //@synthesize behavior=_behavior - In the implementation block
-(id)init;
-(void)setDelegate:(id<VKPuckAnimatorDelegate>)arg1 ;
-(void)dealloc;
-(id<VKPuckAnimatorDelegate>)delegate;
-(void)stop;
-(void)setTarget:(id<VKPuckAnimatorTarget>)arg1 ;
-(id<VKPuckAnimatorTarget>)target;
-(void)start;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)resume;
-(void)pause;
-(void)_step;
-(GEORouteMatch *)lastProjectedLocation;
-(void)setLastProjectedLocation:(GEORouteMatch *)arg1 ;
-(double)tracePlaybackSpeedMultiplier;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)updateVehicleHeading:(double)arg1 ;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIAnimationControllerCoordinating;
@class BSTransaction;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject {

	BSTransaction*<SBUIAnimationControllerCoordinating> _coordinatingChildTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction*<SBUIAnimationControllerCoordinating> coordinatingChildTransaction;              //@synthesize coordinatingChildTransaction=_coordinatingChildTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;                                                           //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction*<SBUIAnimationControllerCoordinating>)coordinatingChildTransaction;
-(unsigned long long)schedulingPolicy;
@end

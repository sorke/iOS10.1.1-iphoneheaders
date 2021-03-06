/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource {

	double _squareSize;

}

@property (assign,nonatomic) double squareSize;              //@synthesize squareSize=_squareSize - In the implementation block
+(id)checkerboardNoiseWithSquareSize:(double)arg1 ;
-(id)init;
-(Module*)__newModule;
-(id)initWithSquareSize:(double)arg1 ;
-(void)setSquareSize:(double)arg1 ;
-(double)squareSize;
@end


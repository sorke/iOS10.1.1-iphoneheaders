/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SKReachConstraints : NSObject <NSCoding> {

	double _lowerAngleLimit;
	double _upperAngleLimit;

}

@property (assign,nonatomic) double lowerAngleLimit;              //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;              //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPUniformNoiseGenerator : NSObject {

	double _minValue;
	double _range;

}

@property (nonatomic,readonly) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) double range;                 //@synthesize range=_range - In the implementation block
+(id)generatorWithValueRange:(id)arg1 ;
-(id)init;
-(id)description;
-(double)minValue;
-(double)range;
-(double)sample;
-(id)initWithValueRange:(id)arg1 ;
@end

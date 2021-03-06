/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKValueRange;

@interface HKGraphSeriesDataBlock : NSObject {

	NSArray* _chartPoints;
	HKValueRange* _yValueRange;

}

@property (nonatomic,copy) NSArray * chartPoints;                       //@synthesize chartPoints=_chartPoints - In the implementation block
@property (nonatomic,readonly) HKValueRange * yValueRange;              //@synthesize yValueRange=_yValueRange - In the implementation block
-(NSArray *)chartPoints;
-(void)setChartPoints:(NSArray *)arg1 ;
-(HKValueRange *)yValueRange;
@end


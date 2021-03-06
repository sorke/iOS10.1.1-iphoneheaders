/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSDateComponents, HKValueRange;

@interface HKDateIntervalCache : NSObject {

	NSDate* _minAnchorDate;
	NSDate* _maxAnchorDate;
	double _previousTimeInterval;
	BOOL _datesInvalidated;
	NSArray* _cachedDates;
	unsigned long long _dateAnchorUnit;
	NSDateComponents* _dateSpacingComponents;
	HKValueRange* _dateRange;

}

@property (assign,nonatomic) unsigned long long dateAnchorUnit;                     //@synthesize dateAnchorUnit=_dateAnchorUnit - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateSpacingComponents;              //@synthesize dateSpacingComponents=_dateSpacingComponents - In the implementation block
@property (nonatomic,readonly) HKValueRange * dateRange;                            //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) NSArray * dates; 
-(id)init;
-(NSArray *)dates;
-(HKValueRange *)dateRange;
-(BOOL)setDateRange:(HKValueRange *)arg1 ;
-(void)_updateAnchorDates;
-(void)_invalidateCachedDates;
-(id)_minAnchorDateFromDate:(id)arg1 ;
-(id)_maxAnchorDateFromDate:(id)arg1 ;
-(id)_generateCachedDates;
-(void)setDateAnchorUnit:(unsigned long long)arg1 ;
-(void)setDateSpacingComponents:(NSDateComponents *)arg1 ;
-(unsigned long long)dateAnchorUnit;
-(NSDateComponents *)dateSpacingComponents;
@end


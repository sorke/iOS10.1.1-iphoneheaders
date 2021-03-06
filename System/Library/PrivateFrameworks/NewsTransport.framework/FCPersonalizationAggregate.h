/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol FCPersonalizationAggregate <NSObject>
@property (nonatomic,readonly) NSString * featureKey; 
@property (nonatomic,readonly) double clicks; 
@property (nonatomic,readonly) double impressions; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) double confidence; 
@required
-(double)confidence;
-(unsigned long long)eventCount;
-(NSString *)featureKey;
-(double)clicks;
-(double)impressions;
-(NSDate *)lastModified;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
-(double)powerWithDecayFactor:(double)arg1;
-(double)relativePersonalizationValueWithBaselineAggregate:(id)arg1 decayFactor:(double)arg2;

@end


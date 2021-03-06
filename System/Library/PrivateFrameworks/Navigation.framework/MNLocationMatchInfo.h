/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@interface MNLocationMatchInfo : NSObject {

	long long _matchQuality;
	CLLocationCoordinate2D _matchCoordinate;
	double _matchCourse;
	int _matchFormOfWay;
	int _matchRoadClass;
	BOOL _matchShifted;

}

@property (nonatomic,readonly) long long matchQuality;                              //@synthesize matchQuality=_matchQuality - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D matchCoordinate;              //@synthesize matchCoordinate=_matchCoordinate - In the implementation block
@property (nonatomic,readonly) double matchCourse;                                  //@synthesize matchCourse=_matchCourse - In the implementation block
@property (nonatomic,readonly) int matchFormOfWay;                                  //@synthesize matchFormOfWay=_matchFormOfWay - In the implementation block
@property (nonatomic,readonly) int matchRoadClass;                                  //@synthesize matchRoadClass=_matchRoadClass - In the implementation block
@property (nonatomic,readonly) BOOL matchShifted;                                   //@synthesize matchShifted=_matchShifted - In the implementation block
-(long long)matchQuality;
-(CLLocationCoordinate2D)matchCoordinate;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 ;
-(double)matchCourse;
-(int)matchFormOfWay;
-(int)matchRoadClass;
-(BOOL)matchShifted;
@end


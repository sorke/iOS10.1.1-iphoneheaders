/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTravelEngineUtilities : NSObject
+(id)effectiveTravelAdvisoryTravelTimeDateForHypothesis:(id)arg1 ;
+(id)geoTrafficDensityAsString:(unsigned long long)arg1 ;
+(BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2 ;
+(BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
+(id)formattedLocationCoordinates:(id)arg1 ;
+(long long)geoRouteHypothesisTravelStateForString:(id)arg1 ;
+(id)geoTransportTypeAsString:(int)arg1 ;
+(int)geoTransportTypeForString:(id)arg1 ;
+(unsigned long long)geoTrafficDensityForString:(id)arg1 ;
+(id)authorizationStatusAsString:(int)arg1 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2 ;
+(double)effectiveTravelAdvisoryTravelTimeForHypothesis:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {

	SCD_Struct_GE26 coord;
	double routeIdx;
	GEOTileKeyList* wantedTiles;
	double startTime;
	double endTime;
	unsigned bytesLoaded;
	unsigned bytesLoadedFromNetwork;
	unsigned generation;
	unsigned hasError : 1;
	unsigned hasLifetimeError : 1;
	unsigned nearManeuver : 1;
	unsigned loading : 1;
	unsigned loaded : 1;
	unsigned preempted : 1;

}
-(void)dealloc;
-(BOOL)okToLoad;
-(void)resetErrors;
-(double)dataRateKB;
-(double)networkDataRateKB;
@end


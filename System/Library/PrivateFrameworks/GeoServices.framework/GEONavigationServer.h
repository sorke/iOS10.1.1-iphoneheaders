/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData;

@interface GEONavigationServer : NSObject {

	NSMutableArray* _peers;
	NSData* _routeSummaryData;
	NSData* _transitSummaryData;
	NSData* _guidanceStateData;
	NSData* _activeRouteDetailsData;
	NSData* _stepIndexData;
	NSData* _selectedRideOptionData;

}
+(id)identifier;
-(id)init;
-(void)dealloc;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1 ;
-(void)setRouteSummaryWithSelectedRideOptionData:(id)arg1 ;
-(void)setRouteSummaryWithStepIndexData:(id)arg1 ;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1 ;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1 ;
-(void)_requestSelectedRideOptionWithPeer:(id)arg1 ;
-(void)_requestStepIndexWithPeer:(id)arg1 ;
-(void)_requestActiveRouteDetailsDataWithPeer:(id)arg1 ;
-(void)_requestGuidanceStateWithPeer:(id)arg1 ;
-(void)_requestTransitSummaryWithPeer:(id)arg1 ;
-(void)_requestRouteSummaryWithPeer:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2 ;
-(void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2 ;
-(void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3 ;
@end


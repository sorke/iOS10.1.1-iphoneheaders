/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RadioGetTracksResponse, NSMapTable, RadioStation, NSArray, NSDate;

@interface MPCRadioStationPreparationContext : NSObject {

	RadioGetTracksResponse* _getTracksResponse;
	NSMapTable* _preparedAdSlotByRadioTrack;
	RadioStation* _station;

}

@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks; 
@property (nonatomic,readonly) BOOL shouldIncrementSkipCount; 
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) RadioStation * station;                                   //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
-(RadioStation *)station;
-(NSArray *)tracks;
-(id)initWithGetTracksResponse:(id)arg1 station:(id)arg2 ;
-(BOOL)shouldIncrementSkipCount;
-(NSDate *)skipDate;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
@end

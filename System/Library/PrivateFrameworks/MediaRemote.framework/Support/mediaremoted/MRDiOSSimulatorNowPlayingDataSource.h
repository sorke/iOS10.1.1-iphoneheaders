/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingDataSource.h>

@class BKSApplicationStateMonitor;

@interface MRDiOSSimulatorNowPlayingDataSource : MRDNowPlayingDataSource {

	BKSApplicationStateMonitor* _appStateMonitor;

}
-(BOOL)shouldSendCommand:(id)arg1 ;
-(void)_frontmostApplicationDidChange:(id)arg1 ;
-(id)_mostRecentlyUpdatedClient;
-(int)nowPlayingApplicationPID;
-(BOOL)nowPlayingApplicationIsPlaying;
-(id)nowPlayingApplicationDisplayID;
-(BOOL)nowPlayingApplicationIsInterrupted;
-(BOOL)anyApplicationIsPlaying;
-(id)init;
-(void)dealloc;
@end


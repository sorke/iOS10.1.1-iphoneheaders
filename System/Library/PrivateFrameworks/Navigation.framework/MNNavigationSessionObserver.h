/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationSessionObserver <NSObject>
@optional
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
-(void)navigationSession:(id)arg1 didChangeGuidanceState:(id)arg2;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)navigationSessionDidArrive:(id)arg1;
-(void)navigationSessionWillPause:(id)arg1;
-(void)navigationSessionWillResumeFromPause:(id)arg1;
-(void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)navigationSession:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4;
-(void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
-(void)navigationSessionWillReroute:(id)arg1;
-(void)navigationSessionDidCancelReroute:(id)arg1;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
-(void)navigationSession:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)navigationSessionHideSecondaryStep:(id)arg1;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
-(void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
-(void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
-(void)navigationSession:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
-(void)navigationSession:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
-(void)navigationSession:(id)arg1 didActivateAudioSession:(BOOL)arg2;
-(void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;

@end


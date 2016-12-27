/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardNotificationDestination <SBDashBoardParticipating,SBNotificationExtensionVisibilityProviding>
@property (assign,nonatomic,__weak) id<SBDashBoardNotificationDispatcher> dispatcher; 
@required
-(void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
-(id<SBDashBoardNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id)arg1;
-(void)updateNotificationSectionSettings:(id)arg1;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

@end

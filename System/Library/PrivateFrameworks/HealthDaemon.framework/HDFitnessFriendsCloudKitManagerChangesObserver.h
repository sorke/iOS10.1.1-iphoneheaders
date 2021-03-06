/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDFitnessFriendsCloudKitManagerChangesObserver <NSObject>
@optional
-(void)cloudKitManagerDidBeginUpdates:(id)arg1;
-(void)cloudKitManagerDidEndUpdates:(id)arg1;
-(void)cloudKitManager:(id)arg1 didRecieveNewRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5;
-(void)cloudKitManager:(id)arg1 didRecieveNewRemoteRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5;
-(void)cloudKitManager:(id)arg1 didReceiveNewActivitySnapshotsForSelf:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewActivitySnapshots:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendWorkouts:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendAchievements:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4;
-(void)cloudKitManagerDidUpdateAccountStatus:(id)arg1;

@end


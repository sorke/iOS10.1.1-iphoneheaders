/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationSchedulerDelegate.h>

@class NSSet, UNSNotificationScheduler, NSString;

@interface MTNextAlarmManager : NSObject <UNSNotificationSchedulerDelegate> {

	NSSet* _nextAlarms;
	/*^block*/id _updateHandler;
	UNSNotificationScheduler* _scheduler;

}

@property (nonatomic,retain) NSSet * nextAlarms;                                //@synthesize nextAlarms=_nextAlarms - In the implementation block
@property (nonatomic,retain) UNSNotificationScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy) id updateHandler;                                    //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2 ;
-(id)initWithNotificationScheduler:(id)arg1 ;
-(void)setNextAlarms:(NSSet *)arg1 ;
-(void)calculateNextAlarmsFromNotifications:(id)arg1 ;
-(NSSet *)nextAlarms;
-(UNSNotificationScheduler *)scheduler;
-(void)setScheduler:(UNSNotificationScheduler *)arg1 ;
@end

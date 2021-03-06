/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTBatteryManager : RTNotifier {

	unsigned _battery;
	IONotificationPortRef _ioNotificationPort;
	unsigned _batteryInterestNotification;
	BOOL _monitorBatteryStatusChanges;
	long long _externalConnectionState;

}

@property (assign,nonatomic) BOOL monitorBatteryStatusChanges;               //@synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges - In the implementation block
@property (assign,nonatomic) long long externalConnectionState;              //@synthesize externalConnectionState=_externalConnectionState - In the implementation block
+(id)sharedInstance;
+(id)RTBatteryManagerExternalConnectionStateToString:(long long)arg1 ;
-(void)_unregisterForNotifications;
-(id)init;
-(void)dealloc;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setMonitorBatteryStatusChanges:(BOOL)arg1 ;
-(void)startMonitoringBatteryStatusChanges;
-(void)stopMonitoringBatteryStatusChanges;
-(void)matchedBattery:(unsigned)arg1 ;
-(void)updateBatteryStatus:(unsigned)arg1 ;
-(void)batteryStatusChange:(unsigned)arg1 messageType:(unsigned)arg2 messageArgument:(void*)arg3 ;
-(BOOL)monitorBatteryStatusChanges;
-(long long)externalConnectionState;
-(void)setExternalConnectionState:(long long)arg1 ;
@end


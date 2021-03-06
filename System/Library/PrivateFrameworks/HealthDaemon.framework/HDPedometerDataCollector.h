/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAggregateDataCollector.h>
#import <libobjc.A.dylib/HDUserCharacteristicsProfileObserver.h>

@class CMPedometer, NSNumber, NSString;

@interface HDPedometerDataCollector : HDAggregateDataCollector <HDUserCharacteristicsProfileObserver> {

	CMPedometer* _pedometer;
	NSNumber* _userCondition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createCollectorsForCurrentHardware:(id)arg1 ;
+(Class)sensorDatumClass;
-(void)dealloc;
-(id)initWithPrimaryProfile:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2 ;
-(id)_queue_pedometer;
-(BOOL)queue_userConditionIsSet;
-(id)quantitySamplesFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 containsWorkoutSamples:(BOOL)arg5 ;
-(void)beginUpdatesFromDatum:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1 ;
-(void)setPedometer:(id)arg1 ;
-(id)pedometer;
-(BOOL)queue_userIsAbleBodied;
@end


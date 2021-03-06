/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideStatusExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INRideCompletionStatus, INRideVehicle, INRideDriver, NSDate, CLPlacemark, NSArray, INRideOption, NSUserActivity;

@interface INRideStatus : NSObject <INCacheableContainer, INRideStatusExport, NSCopying, NSSecureCoding> {

	NSString* _rideIdentifier;
	long long _phase;
	INRideCompletionStatus* _completionStatus;
	INRideVehicle* _vehicle;
	INRideDriver* _driver;
	NSDate* _estimatedPickupDate;
	NSDate* _estimatedDropOffDate;
	NSDate* _estimatedPickupEndDate;
	CLPlacemark* _pickupLocation;
	NSArray* _waypoints;
	CLPlacemark* _dropOffLocation;
	INRideOption* _rideOption;
	NSUserActivity* _userActivityForCancelingInApplication;
	NSArray* _additionalActionActivities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * rideIdentifier;                                             //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (assign,nonatomic) long long phase;                                                     //@synthesize phase=_phase - In the implementation block
@property (nonatomic,copy) INRideCompletionStatus * completionStatus;                             //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,copy) INRideVehicle * vehicle;                                               //@synthesize vehicle=_vehicle - In the implementation block
@property (nonatomic,copy) INRideDriver * driver;                                                 //@synthesize driver=_driver - In the implementation block
@property (nonatomic,copy) NSDate * estimatedPickupDate;                                          //@synthesize estimatedPickupDate=_estimatedPickupDate - In the implementation block
@property (nonatomic,copy) NSDate * estimatedDropOffDate;                                         //@synthesize estimatedDropOffDate=_estimatedDropOffDate - In the implementation block
@property (nonatomic,copy) NSDate * estimatedPickupEndDate;                                       //@synthesize estimatedPickupEndDate=_estimatedPickupEndDate - In the implementation block
@property (nonatomic,copy) CLPlacemark * pickupLocation;                                          //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,copy) NSArray * waypoints;                                                   //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,copy) CLPlacemark * dropOffLocation;                                         //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
@property (nonatomic,copy) INRideOption * rideOption;                                             //@synthesize rideOption=_rideOption - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivityForCancelingInApplication;              //@synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication - In the implementation block
@property (nonatomic,copy) NSArray * additionalActionActivities;                                  //@synthesize additionalActionActivities=_additionalActionActivities - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(long long)phase;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(INRideCompletionStatus *)completionStatus;
-(void)setCompletionStatus:(INRideCompletionStatus *)arg1 ;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(NSDate *)arg1 ;
-(INRideDriver *)driver;
-(void)setDriver:(INRideDriver *)arg1 ;
-(id)cacheableObjects;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;
-(NSString *)rideIdentifier;
-(void)setRideIdentifier:(NSString *)arg1 ;
-(INRideVehicle *)vehicle;
-(void)setVehicle:(INRideVehicle *)arg1 ;
-(NSDate *)estimatedDropOffDate;
-(void)setEstimatedDropOffDate:(NSDate *)arg1 ;
-(NSDate *)estimatedPickupEndDate;
-(void)setEstimatedPickupEndDate:(NSDate *)arg1 ;
-(INRideOption *)rideOption;
-(void)setRideOption:(INRideOption *)arg1 ;
-(NSUserActivity *)userActivityForCancelingInApplication;
-(void)setUserActivityForCancelingInApplication:(NSUserActivity *)arg1 ;
-(NSArray *)additionalActionActivities;
-(void)setAdditionalActionActivities:(NSArray *)arg1 ;
@end


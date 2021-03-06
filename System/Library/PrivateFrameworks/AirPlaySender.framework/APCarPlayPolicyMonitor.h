/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/CRVehiclePolicyMonitoring.h>

@protocol OS_dispatch_queue, APCarPlayPolicyMonitorDelegate;
@class NSObject, CRVehiclePolicyMonitor, NSString;

@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring> {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueFigCFWeakReferenceHolderRef _weakEndpoint;
	OpaqueFigEndpointRef _observedEndpoint;
	CRVehiclePolicyMonitor* _monitor;
	id<APCarPlayPolicyMonitorDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPolicyMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)setDelegate:(id<APCarPlayPolicyMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<APCarPlayPolicyMonitorDelegate>)delegate;
-(void)willEnableVehicleTrackedByMonitor:(id)arg1 ;
-(void)willDisableVehicleTrackedByMonitor:(id)arg1 ;
-(void)endpointAuthenticationSucceeded;
@end


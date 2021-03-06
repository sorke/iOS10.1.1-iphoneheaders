/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:46:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <carkitd/CRVehicleAccessoryAlert.h>

@interface CROutstandingVehiclePairingAlert : CRVehicleAccessoryAlert {

	BOOL _shouldEnableBluetooth;

}

@property (assign,nonatomic) BOOL shouldEnableBluetooth;              //@synthesize shouldEnableBluetooth=_shouldEnableBluetooth - In the implementation block
-(BOOL)presentAlertWithCompletion:(/*^block*/id)arg1 ;
-(id)alertAcceptButtonTitle;
-(id)alertDeclineButtonTitle;
-(id)alertAcceptedAnalyticsKey;
-(id)alertDeclinedAnalyticsKey;
-(BOOL)shouldEnableBluetooth;
-(void)setShouldEnableBluetooth:(BOOL)arg1 ;
-(id)alertTitle;
-(id)alertMessage;
@end


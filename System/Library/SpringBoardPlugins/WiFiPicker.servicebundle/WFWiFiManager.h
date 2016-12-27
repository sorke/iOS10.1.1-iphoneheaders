/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol SBUIUserAgent;
@class NSRecursiveLock, WFWiFiAlertItem, NSDictionary, NSString;

@interface WFWiFiManager : NSObject <SBPluginBundleController> {

	NSRecursiveLock* _lock;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	int _rssiThreshold;
	BOOL _joining;
	BOOL _bluetoothTethered;
	BOOL _delayedForBTScan;
	WFWiFiAlertItem* _alertItem;
	NSDictionary* _lastWifiScanDictionary;
	unsigned _notificationID;
	id<SBUIUserAgent> _sbUserAgent;

}

@property (assign,nonatomic) WFWiFiAlertItem * currentAlertItem;              //@synthesize alertItem=_alertItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedInstance;
-(void)_appFlagsChanged:(id)arg1 ;
-(void)setCurrentAlertItem:(WFWiFiAlertItem *)arg1 ;
-(BOOL)isAskToJoinEnabled;
-(void)_trustCallbackWithID:(unsigned)arg1 type:(int)arg2 network:(WiFiNetworkRef)arg3 data:(id)arg4 ;
-(BOOL)hasShownDontAsk;
-(void)_appLaunched:(id)arg1 ;
-(WFWiFiAlertItem *)currentAlertItem;
-(void)scan;
-(WiFiManagerClientRef)_managerLocked;
-(void)cancelTrust:(BOOL)arg1 ;
-(void)acceptTrust:(id)arg1 ;
-(void)joinNetwork:(id)arg1 password:(id)arg2 ;
-(BOOL)joining;
-(void)_askToJoinWithID:(unsigned)arg1 ;
-(void)setLastWifiScanDictionary:(id)arg1 ;
-(void)setHasShownDontAsk:(BOOL)arg1 ;
-(void)_wifiScanComplete:(CFArrayRef)arg1 ;
-(void)_bluetoothScanComplete:(id)arg1 ;
-(void)_bluetoothConnectionChanged:(id)arg1 ;
-(id)lastWifiScanDictionary;
-(void)_lockButtonPressed:(id)arg1 ;
-(void)_joinComplete:(int)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)_appDeactivated:(id)arg1 ;
-(void)userChoseNetwork:(id)arg1 ;
-(BOOL)_shouldShowPicker:(BOOL)arg1 ;
-(void)_scanFailed;
-(id)init;
-(void)dismissAlerts;
-(void)cancelPicker:(BOOL)arg1 ;
-(id)knownNetworks;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
@end

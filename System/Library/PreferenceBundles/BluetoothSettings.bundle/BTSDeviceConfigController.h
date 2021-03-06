/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@class BTSDevice, NSArray, NSMutableArray, PSSpecifier, CRPairedVehicleManager, CRCarPlayPreferences, NSString;

@interface BTSDeviceConfigController : PSListController <CRCarPlayPreferencesDelegate> {

	BTSDevice* _device;
	SCD_Struct_BT1 _syncSettings;
	BOOL _supportsMAP;
	BOOL _messagingEnabled;
	BOOL _isWatch;
	NSArray* _controlGroupSpecifiers;
	NSArray* _messagingSpecifiers;
	NSArray* _syncContactsSpecifiers;
	NSMutableArray* _syncGroupsSpecifiers;
	NSMutableArray* _aacpControlSpecifiers;
	BOOL _dismissed;
	PSSpecifier* _lastSelectedSyncGroup;
	CRPairedVehicleManager* _vehicleManager;
	CRCarPlayPreferences* _carplayPreferences;
	unsigned long long _cachedCarplayPairingStatus;

}

@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;                    //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (nonatomic,retain) CRCarPlayPreferences * carplayPreferences;                  //@synthesize carplayPreferences=_carplayPreferences - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCarplayPairingStatus;              //@synthesize cachedCarplayPairingStatus=_cachedCarplayPairingStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)forgetDevice:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)userDidTapWatchLink:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)deviceRemoved:(id)arg1 ;
-(void)deviceSupportsSync:(id)arg1 ;
-(void)deviceSupportsMAP:(id)arg1 ;
-(CRCarPlayPreferences *)carplayPreferences;
-(BOOL)deviceSupportsCarPlay;
-(id)_carPlayVehicle;
-(CRPairedVehicleManager *)vehicleManager;
-(BOOL)canDisconnect;
-(void)updateDisconnectButton:(BOOL)arg1 ;
-(BOOL)canUnpair;
-(void)loadSyncSettings;
-(id)inEarDetectEnabled;
-(void)setInEarDetectEnabled:(id)arg1 ;
-(id)micMode;
-(void)setMicMode:(id)arg1 ;
-(unsigned long long)cachedCarplayPairingStatus;
-(void)setCachedCarplayPairingStatus:(unsigned long long)arg1 ;
-(void)setCarplayPreferences:(CRCarPlayPreferences *)arg1 ;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(void)handlePairedVehiclesChanged:(id)arg1 ;
-(void)setCarPlayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)carPlayEnabled:(id)arg1 ;
-(void)metaGroupSelected:(id)arg1 ;
-(void)contactGroupSelected:(id)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(id)messagesEnabled:(id)arg1 ;
-(void)setMessagesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)contactSync:(id)arg1 ;
-(void)setContactSync:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end


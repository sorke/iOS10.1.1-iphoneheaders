/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, PSSystemConfiguration, NSMutableDictionary;

@interface EdgeSettingsController : PSListController {

	NSArray* _switchSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSArray* _group1Specifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualSpecifiers;
	NSArray* _advancedSpecifiers;
	NSArray* _InternetContextSpecifiers;
	NSArray* _VVMContextSpecifiers;
	NSArray* _MMSContextSpecifiers;
	NSArray* _IMSContextSpecifiers;
	NSArray* _tetheringContextSpecifiers;
	NSArray* _lteAttachAPNSpecifiers;
	NSArray* _resetSpecifiers;
	BOOL _proxyAuth;
	NSDictionary* _lastProxyDict;
	PSSystemConfiguration* _systemConfig;
	NSMutableDictionary* _lastAttachAPNDict;
	NSMutableDictionary* _newAttachAPNDict;
	BOOL _cacheInitialized;
	NSMutableDictionary* _internetSettingsDictionary;
	NSMutableDictionary* _vvmSettingsDictionary;
	NSMutableDictionary* _mmsSettingsDictionary;
	NSMutableDictionary* _imsSettingsDictionary;
	NSMutableDictionary* _tetheringSettingsDictionary;

}
+(BOOL)isAttachAPNEditingAllowed;
+(id)makeUIApnBasedOn:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_getAPNDictinaryForService:(int)arg1 ;
-(void)_updateKey:(id)arg1 toValue:(id)arg2 forServiceType:(int)arg3 ;
-(void)resetAPNsDictionaries;
-(BOOL)shouldResetAttachAPN;
-(void)resetAttachAPNSettings;
-(id)_getMMSObjectForKey:(id)arg1 ;
-(void)_setMMSOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(int)_pdpContextIndexForServiceType:(int)arg1 ;
-(BOOL)_shouldShowUIForServiceType:(int)arg1 ;
-(id)copyStoredAPNSettings;
-(BOOL)isTypeOfService:(id)arg1 ofServiceType:(int)arg2 ;
-(id)_APNDictionaryForServiceFromSC:(int)arg1 ;
-(id)_blankAPNDictionaryWithTypeMask:(int)arg1 ;
-(void)initAPNCacheDictionaries;
-(void)initDictionaryForUIApn:(id*)arg1 forServiceType:(int)arg2 ;
-(BOOL)_isAPNDictionaryBlank:(id)arg1 ;
-(void)uploadSettingsOnCT:(id)arg1 ;
-(id)attachAPNSettings;
-(void)commitAttachAPNSettings;
-(void)commitAPNsSettings;
-(id)getAPNDataForSpecifier:(id)arg1 ;
-(void)setAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(void)resetCarrierSettings:(id)arg1 ;
-(id)getMMSValueForSpecifier:(id)arg1 ;
-(void)setMMSValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getMMSNumericValueForSpecifier:(id)arg1 ;
-(void)setMMSNumericValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)edgeDNS:(id)arg1 ;
-(void)setEdgeDNS:(id)arg1 specifier:(id)arg2 ;
-(id)getAttachAPNDataForSpecifier:(id)arg1 ;
-(void)setAttachAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
@end


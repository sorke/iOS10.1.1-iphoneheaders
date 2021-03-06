/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UISlider;

@interface AccessibilitySettingsController : PSListController {

	BOOL _didConfirmDisabling;
	long long _ignoreNextAXNotificationCount;
	UISlider* _leftRightSlider;
	BOOL _easyReachCache;

}
-(void)_orientationChange:(id)arg1 ;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(void)_handleRestartForBoldText;
-(id)forceTouchEnabled:(id)arg1 ;
-(void)_handleCancelForBoldText;
-(id)touchAccommodationsEnabled:(id)arg1 ;
-(void)_handleMonoAudioEnabled:(BOOL)arg1 ;
-(void)_setEasyReach:(id)arg1 specifier:(id)arg2 ;
-(void)handleReloadSpecifiers;
-(void)_largeTextChange:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(void)_showTextLegibilityMenuToRestart;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)confirmDisablingWithString:(id)arg1 forKey:(id)arg2 confirmedBlock:(/*^block*/id)arg3 canceledBlock:(/*^block*/id)arg4 inWindow:(id)arg5 ;
-(void)disableOption:(id)arg1 ;
-(id)tripleClickStatus:(id)arg1 ;
-(id)largerTextEnabled:(id)arg1 ;
-(id)scatEnabled:(id)arg1 ;
-(void)_handleInvertColorsEnabled:(BOOL)arg1 specifier:(id)arg2 ;
-(id)magnifierEnabled:(id)arg1 ;
-(id)ledFlashEnabled:(id)arg1 ;
-(id)zoomTouchEnabled:(id)arg1 ;
-(id)descriptiveVideoEnabled:(id)arg1 ;
-(id)largeFontsStatus:(id)arg1 ;
-(id)accessibilityLargeFontStatus:(id)arg1 ;
-(id)guidedAccessEnabled:(id)arg1 ;
-(id)handEnabled:(id)arg1 ;
-(id)homeClickSpeed:(id)arg1 ;
-(void)_easyReachChanged:(id)arg1 ;
-(id)_easyReach:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForKey:(id)arg1 ;
-(id)specifiers;
@end


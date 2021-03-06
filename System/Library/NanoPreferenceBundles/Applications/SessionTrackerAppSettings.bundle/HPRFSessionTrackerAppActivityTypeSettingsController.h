/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/SessionTrackerAppSettings.bundle/SessionTrackerAppSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@class FIUIWorkoutSettingsManager, FIUIWorkoutActivityType, AWDServerConnection, NPSDomainAccessor;

@interface HPRFSessionTrackerAppActivityTypeSettingsController : PSEditableListController {

	FIUIWorkoutSettingsManager* _settingManager;
	FIUIWorkoutActivityType* _workoutActivityType;
	AWDServerConnection* _metricServerConnection;
	NPSDomainAccessor* _domainAccessor;

}
-(void)_logMetricChangeEventForSpecifier:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setMetricEnabled:(BOOL)arg1 forSpecifier:(id)arg2 autoMove:(BOOL)arg3 ;
-(id)_metricServerConnection;
-(id)_specifierForMetricType:(unsigned long long)arg1 ;
-(id)metricEnabledForSpecifier:(id)arg1 ;
-(void)setMetricEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_metricSpecifiersForSettingSection:(unsigned long long)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
@end


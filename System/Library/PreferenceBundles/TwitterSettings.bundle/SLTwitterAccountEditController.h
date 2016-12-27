/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, PSTextFieldSpecifier, PSSpecifier, NSDictionary;

@interface SLTwitterAccountEditController : ACUIViewController {

	ACAccount* _account;
	BOOL _isAccountDirty;
	PSTextFieldSpecifier* _fullNameSpecifier;
	PSSpecifier* _findByEmailSpecifier;
	BOOL _didAttemptNameUpdate;
	NSDictionary* _userSettings;
	BOOL _shouldPushSettingsToServer;

}
-(void)_saveAccountChangesIfNecessary;
-(id)_descriptionSpecifier;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 wasVerifying:(BOOL)arg3 ;
-(id)_userNameSpecifier;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_confirmDeleteAccount;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(void)_setFindByEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_processUserSettings:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_fullNameSpecifier;
-(id)_findByEmailWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_fetchUserSettings;
-(void)_pushSettingsToServerIfNeeded;
-(void)_updateFullNameIfNecessary;
-(id)_findByEmailSpecifiers;
-(id)_fullNameWithSpecifier:(id)arg1 ;
-(void)_pushSettingsToServer;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordSpecifier;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

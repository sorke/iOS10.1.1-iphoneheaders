/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/NotesSettings.bundle/NotesSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAccountsClientListController.h>

@interface ICSettingsPlugin : PSAccountsClientListController
-(void)accountsDidChange;
-(id)_defaultNotesAccountSyncId:(id)arg1 ;
-(id)settingsBundle;
-(void)_setNoteSortType:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_currentNoteSortType:(id)arg1 ;
-(void)_setDefaultNotesAccountSyncId:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setNoteDefaultStyle:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setShouldSavePhotosVideos:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setLocalNotesEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)hasMigratedLocalAccountWithNotes;
-(id)_getShouldSavePhotosVideos:(id)arg1 ;
-(void)_showPasswordScreen:(id)arg1 ;
-(id)_accountTitlesForSpecifier:(id)arg1 ;
-(void)deleteLocalAccount;
-(id)_noteDefaultStyle:(id)arg1 ;
-(BOOL)localAccountExists;
-(id)localAccountName;
-(id)_getShowPasswordScreen:(id)arg1 ;
-(id)_accountValuesForSpecifier:(id)arg1 ;
-(id)_getLocalNotesEnabled:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)requestedAccountDataclass;
-(id)localAccount;
-(void)addLocalAccount;
-(id)specifiers;
@end


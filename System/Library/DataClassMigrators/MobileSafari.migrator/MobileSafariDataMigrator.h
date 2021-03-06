/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator {

	unsigned long long _migrationLevel;

}
-(void)_migrateHistory;
-(void)_migrateLegacyWebKitWebsiteData;
-(BOOL)_migrateSearchSettings;
-(void)_removeObsoleteDirectories;
-(void)_migrateAutofillContactInfo;
-(void)_migrateItemFromPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_symlinkCookieStorage;
-(void)_assertSafariContainerPath;
-(void)_migrateLegacyWebKitPreferences;
-(void)_migrateLibraryFilesIntoContainer;
-(void)_migrateCloudTabsMetadataOutOfContainer;
-(void)_removeBookmarksPanelStatePreferences;
-(BOOL)_migrateAutofillPasswordAndPreferences;
-(BOOL)_migrateAuthenticationCredentials;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(void)_clearReadingListFetcherPendingChanges;
-(void)_removeAutocompleteOffBypassSettings;
-(void)_migrateWebClipIconFilesToClassD;
-(void)_migrateFilesToCorrectProtectionClass;
-(BOOL)_migratePreWhitetailSuspendedStateFile;
-(void)_migrateFilesToProtectionClassCFromRootDirectory:(id)arg1 ignorePaths:(id)arg2 ;
-(id)init;
-(id)dataClassName;
-(BOOL)performMigration;
@end


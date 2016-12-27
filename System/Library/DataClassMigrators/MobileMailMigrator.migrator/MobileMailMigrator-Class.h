/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MobileMailMigrator.migrator/MobileMailMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailMigrator/MobileMailMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface MobileMailMigrator : DataClassMigrator
-(BOOL)removeOldFormatAutosaveMessages;
-(BOOL)_migratePreferencesToContainerWithDomain:(CFStringRef)arg1 guardKey:(CFStringRef)arg2 ;
-(BOOL)removeUnusedPreferences;
-(BOOL)migrateMessageLibrary;
-(BOOL)removeContentIndex;
-(BOOL)migrateAttachmentsProtectionClass;
-(BOOL)migratePreferencesToContainer;
-(BOOL)removeAutoLaunchFiles;
-(BOOL)migrateUserAttachmentScalePeference;
-(BOOL)migrateUbiquitousKeyValueStoreToContainer;
-(float)migrationProgress;
-(void)setVersion:(unsigned long long)arg1 ;
-(long long)currentVersion;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

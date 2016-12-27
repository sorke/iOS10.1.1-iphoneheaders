/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountLegacy : DataClassMigrator {

	unsigned long long _numAccountsMigrated;
	unsigned long long _numAccountsNeedingMigration;

}
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)_oldAccountsPlistPath;
-(BOOL)_isKnownDAPayloadType:(id)arg1 ;
-(void)_fillOutManagedConfigurationInfo;
-(Class)_legacyClassForAccountType:(id)arg1 ;
-(id)_overriddenACAccountTypeIdentifierForInfo:(id)arg1 ;
-(id)_profileUUIDForAccountPersistentUUID:(id)arg1 ;
-(id)_payloadUUIDForAccountPersistentUUID:(id)arg1 ;
-(id)_updateAccountSettings:(id)arg1 ;
-(BOOL)_importAccountsIntoAccountsFramework:(id)arg1 withStore:(id)arg2 ;
-(id)dataClassName;
-(BOOL)performMigration;
@end

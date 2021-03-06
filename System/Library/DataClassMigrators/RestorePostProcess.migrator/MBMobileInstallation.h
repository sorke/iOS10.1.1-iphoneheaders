/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/RestorePostProcess.migrator/RestorePostProcess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MBMobileInstallation : NSObject {

	NSString* _safeHarborDir;
	NSString* _errorString;

}

@property (nonatomic,retain) NSString * safeHarborDir;              //@synthesize safeHarborDir=_safeHarborDir - In the implementation block
-(BOOL)processRestoredApp:(id)arg1 error:(id*)arg2 ;
-(id)initWithSafeHarborDir:(id)arg1 ;
-(BOOL)installPlaceholderAppAtPath:(id)arg1 bundleID:(id)arg2 error:(id*)arg3 ;
-(BOOL)registerSafeHarborWithIdentifier:(id)arg1 path:(id)arg2 type:(int)arg3 error:(id*)arg4 ;
-(id)_systemContainersWithError:(id*)arg1 shared:(BOOL)arg2 ;
-(BOOL)processRestoredContainerWithIdentifier:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(BOOL)uninstallAppWithBundleID:(id)arg1 error:(id*)arg2 ;
-(void)setSafeHarborDir:(NSString *)arg1 ;
-(void)dealloc;
-(id)userAppsWithError:(id*)arg1 ;
-(id)safeHarborsWithError:(id*)arg1 ;
-(id)systemContainersWithError:(id*)arg1 ;
-(id)systemSharedContainersWithError:(id*)arg1 ;
-(BOOL)removeSafeHarbordWithIdentifier:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(NSString *)safeHarborDir;
-(id)userAppWithBundleID:(id)arg1 placeholder:(BOOL)arg2 error:(id*)arg3 ;
@end


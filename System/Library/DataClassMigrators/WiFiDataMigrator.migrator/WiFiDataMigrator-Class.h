/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/WiFiDataMigrator.migrator/WiFiDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiDataMigrator/WiFiDataMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface WiFiDataMigrator : DataClassMigrator
-(void)removeDefaultAcceptedTypeLEAP:(WiFiManagerClientRef)arg1 ;
-(void)migratePreferencesToWiFiDomain:(WiFiManagerClientRef)arg1 ;
-(void)resetInternalSettings:(WiFiManagerClientRef)arg1 ;
-(void)turnWiFiOn:(WiFiManagerClientRef)arg1 ;
-(void)patchHiddenNetworks:(WiFiManagerClientRef)arg1 ;
-(void)disableWow:(WiFiManagerClientRef)arg1 ;
-(void)disableAutoJoinAdhocNetworks:(WiFiManagerClientRef)arg1 ;
-(void)disableAskToJoin:(WiFiManagerClientRef)arg1 ;
-(void)removeNetworkChannelList:(WiFiManagerClientRef)arg1 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end


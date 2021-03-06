/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSSet;

@interface RTApplicationManagerApplicationsChanged : RTNotification {

	NSSet* _installedApplicationBundleIdentifiers;
	NSSet* _uninstalledApplicationBundleIdentifiers;

}

@property (nonatomic,copy) NSSet * installedApplicationBundleIdentifiers;                //@synthesize installedApplicationBundleIdentifiers=_installedApplicationBundleIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * uninstalledApplicationBundleIdentifiers;              //@synthesize uninstalledApplicationBundleIdentifiers=_uninstalledApplicationBundleIdentifiers - In the implementation block
-(id)initWithInstalledApplicationBundleIdentifiers:(id)arg1 uninstalledApplicationBundleIdentifiers:(id)arg2 ;
-(NSSet *)installedApplicationBundleIdentifiers;
-(void)setInstalledApplicationBundleIdentifiers:(NSSet *)arg1 ;
-(NSSet *)uninstalledApplicationBundleIdentifiers;
-(void)setUninstalledApplicationBundleIdentifiers:(NSSet *)arg1 ;
@end


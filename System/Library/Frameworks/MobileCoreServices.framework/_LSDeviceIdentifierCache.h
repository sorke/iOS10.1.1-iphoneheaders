/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSUUID, NSObject, NSDictionary;

@interface _LSDeviceIdentifierCache : NSObject {

	NSDictionary* _identifiers;
	NSUUID* _advertiserIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	int _saveFlag;
	NSDictionary* _perUserEntropy;

}
+(id)sharedCache;
-(NSMutableDictionary*)identifiersOfTypeNotDispatched:(long long)arg1 ;
-(id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2 ;
-(id)generateSomePerUserEntropyNotDispatched;
-(NSDictionary*)allIdentifiersNotDispatched;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)save;
-(BOOL)deviceUnlockedSinceBoot;
@end


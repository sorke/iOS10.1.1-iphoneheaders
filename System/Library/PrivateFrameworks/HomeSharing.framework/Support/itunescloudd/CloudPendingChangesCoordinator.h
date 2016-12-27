/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CloudPendingChangesCoordinator : NSObject {

	NSString* _name;
	NSString* _pendingChangesPath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sagaPendingChangesCoordinator;
+(id)jaliscoPendingChangesCoordinator;
+(id)jaliscoAppLibraryPendingChangesCoordinator;
-(void)processPendingChangesUsingLibrary:(id)arg1 ;
-(void)removeAllPendingChanges;
-(id)_pendingChanges;
-(BOOL)_savePendingChanges:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 ;
-(void)addPendingChange:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedResourceManager;
-(id)init;
-(void)invalidateCachedResources;
-(void)fetchLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)_buildLanguageResources;
-(void)_fetchLanguageResourcesFromMediaLibraryService:(/*^block*/id)arg1 ;
@end


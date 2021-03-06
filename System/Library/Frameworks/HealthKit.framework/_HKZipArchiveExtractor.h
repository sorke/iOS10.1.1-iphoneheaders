/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSData, NSError;

@interface _HKZipArchiveExtractor : NSObject {

	NSString* _pathname;
	archiveRef _archive;
	archive_entryRef _entry;
	BOOL _dataRead;
	NSData* _data;
	NSError* _lastError;

}
-(id)initWithURL:(id)arg1 ;
-(void)_clearState;
-(void)_logError:(id)arg1 ;
-(id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1 ;
-(id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1 ;
-(id)getDataForCurrentEntry;
-(id)lastError;
-(id)initWithPathname:(id)arg1 ;
-(id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end


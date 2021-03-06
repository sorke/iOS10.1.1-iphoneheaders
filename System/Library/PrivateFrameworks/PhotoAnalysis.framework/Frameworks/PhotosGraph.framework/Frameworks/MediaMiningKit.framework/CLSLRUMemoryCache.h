/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSMapTable, NSRecursiveLock;

@interface CLSLRUMemoryCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMapTable* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	CLSLRUMemoryCacheList* _leastRecentUsedList;
	NSMapTable* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(BOOL)writeToURL:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 ;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(void)_removeListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)_promoteListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(unsigned long long)currentUsedSlots;
-(void)evictSlots:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSlots;
@end


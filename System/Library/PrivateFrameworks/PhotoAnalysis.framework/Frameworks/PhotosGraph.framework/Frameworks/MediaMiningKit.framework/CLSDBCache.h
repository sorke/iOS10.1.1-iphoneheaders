/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface CLSDBCache : NSObject {

	NSURL* _diskCacheURL;
	NSString* _dataModelName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectContext* _parentManagedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	BOOL _supportsVersioning;

}

@property (nonatomic,readonly) NSManagedObjectContext * parentManagedObjectContext;                    //@synthesize parentManagedObjectContext=_parentManagedObjectContext - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSURL * diskCacheURL;                                              //@synthesize diskCacheURL=_diskCacheURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataModelName;                                          //@synthesize dataModelName=_dataModelName - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic) BOOL supportsVersioning;                                                  //@synthesize supportsVersioning=_supportsVersioning - In the implementation block
+(id)diskCacheWithName:(id)arg1 ;
-(id)init;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)formatVersion;
-(BOOL)save;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheName:(id)arg1 ;
-(NSString *)dataModelName;
-(NSManagedObjectContext *)parentManagedObjectContext;
-(BOOL)supportsVersioning;
-(NSURL *)diskCacheURL;
-(id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2 ;
-(void)_saveAsync;
-(void)setSupportsVersioning:(BOOL)arg1 ;
@end


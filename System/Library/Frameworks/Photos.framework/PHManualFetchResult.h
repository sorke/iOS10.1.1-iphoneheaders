/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFetchResult.h>

@class NSOrderedSet, NSArray, NSString;

@interface PHManualFetchResult : PHFetchResult {

	NSOrderedSet* _objectIDs;
	NSArray* _objects;
	NSString* _identifier;

}

@property (readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs; 
@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)fetchRequest;
-(NSOrderedSet *)objectIDs;
-(id)containerIdentifier;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(void)getMediaTypeCounts;
-(id)fetchUpdatedObjects;
-(id)initWithObjects:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 ;
-(id)initWithObjects:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(BOOL)arg5 ;
-(id)fetchedObjectIDs;
-(id)fetchedObjects;
-(NSArray *)objects;
-(id)photoLibrary;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)initWithOids:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(BOOL)arg5 ;
-(id)copyWithOptions:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(id)fetchedObjectIDsSet;
@end

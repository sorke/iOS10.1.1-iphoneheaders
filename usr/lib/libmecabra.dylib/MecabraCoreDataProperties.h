/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject {

	NSMutableDictionary* _descriptionDictionary;
	NSString* _type;

}

@property (nonatomic,retain) NSMutableDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,retain,readonly) NSString * type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * ubiquityContainerIdentifier; 
+(id)sharedInstanceForType:(id)arg1 ;
+(void)setDefaultDescriptionPath:(id)arg1 ;
+(id)defaultDescriptionPath;
+(id)ubiquityContainerURL;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(NSString *)type;
-(id)initWithIdentifier:(id)arg1 ;
-(id)sortDescriptors;
-(id)entityModelName;
-(id)uniqueKeys;
-(BOOL)databaseSyncs;
-(id)entityDescriptionURL;
-(NSString *)ubiquityContainerIdentifier;
-(id)ubiquitousURLWithSuffix:(id)arg1 ;
-(id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1 ;
-(id)ubiquitousTransactionURLForIdentifier:(id)arg1 ;
-(void)forceNoSync;
-(id)requiredKeys;
-(NSMutableDictionary *)descriptionDictionary;
-(void)setDescriptionDictionary:(NSMutableDictionary *)arg1 ;
@end


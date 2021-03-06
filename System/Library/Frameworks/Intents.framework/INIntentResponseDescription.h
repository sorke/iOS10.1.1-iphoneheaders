/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentResponseDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying> {

	BOOL _isPrivate;
	NSString* _name;
	Class _facadeClass;
	Class _dataClass;
	NSString* _type;
	NSDictionary* _slotsByName;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Class facadeClass;                            //@synthesize facadeClass=_facadeClass - In the implementation block
@property (nonatomic,readonly) Class dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                               //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * slotsByName;              //@synthesize slotsByName=_slotsByName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)facadeClass;
-(Class)dataClass;
-(BOOL)isPrivate;
-(NSDictionary *)slotsByName;
-(id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(BOOL)arg5 slotsByName:(id)arg6 ;
@end


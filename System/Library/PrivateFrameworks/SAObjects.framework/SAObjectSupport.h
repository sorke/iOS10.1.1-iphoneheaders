/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * classId; 
@property (nonatomic,copy) NSString * groupId; 
@property (nonatomic,copy) NSArray * supportedProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)aceVersion;
-(void)setAceVersion:(NSString *)arg1 ;
-(NSString *)classId;
-(void)setClassId:(NSString *)arg1 ;
-(NSArray *)supportedProperties;
-(void)setSupportedProperties:(NSArray *)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
@end


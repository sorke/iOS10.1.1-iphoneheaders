/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * constraints; 
@property (nonatomic,copy) NSString * domainId; 
@property (nonatomic,copy) NSString * operationId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operation;
+(id)operationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)constraints;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)domainId;
-(void)setDomainId:(NSString *)arg1 ;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
@end


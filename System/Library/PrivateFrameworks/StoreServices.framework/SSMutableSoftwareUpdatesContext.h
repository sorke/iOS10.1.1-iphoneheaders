/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSoftwareUpdatesContext.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSArray;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (nonatomic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isForced,nonatomic) BOOL forced; 
@property (nonatomic,copy) NSArray * softwareTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)setSoftwareTypes:(NSArray *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setForced:(BOOL)arg1 ;
@end


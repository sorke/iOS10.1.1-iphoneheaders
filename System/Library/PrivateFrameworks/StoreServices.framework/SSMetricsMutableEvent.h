/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;

}

@property (nonatomic,copy,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
@property (nonatomic,retain) NSNumber * accountIdentifier; 
@property (nonatomic,retain) NSString * connection; 
@property (nonatomic,retain) NSString * eventType; 
@property (assign) double originalTime; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * applicationIdentifier; 
@property (nonatomic,retain) NSNumber * clientVersion; 
@property (nonatomic,retain) NSString * hostApplicationIdentifier; 
@property (nonatomic,retain) NSNumber * previousClientVersion; 
@property (nonatomic,retain) NSString * userAgent; 
@property (nonatomic,retain) NSString * canaryIdentifier; 
-(void)setEventVersion:(NSNumber *)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(NSDictionary *)bodyDictionary;
-(id)decorateReportingURL:(id)arg1 ;
-(NSNumber *)eventVersion;
-(NSNumber *)previousClientVersion;
-(void)setPreviousClientVersion:(NSNumber *)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)eventType;
-(NSString *)connection;
-(void)setConnection:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)setTopic:(NSString *)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(double)originalTime;
-(void)setOriginalTime:(double)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(NSNumber *)baseVersion;
-(NSNumber *)clientVersion;
-(void)setClientVersion:(NSNumber *)arg1 ;
@end

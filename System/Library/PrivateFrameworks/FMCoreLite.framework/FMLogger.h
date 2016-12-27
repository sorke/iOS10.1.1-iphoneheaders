/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString, NSObject;

@interface FMLogger : NSObject {

	long long _logLevel;
	NSString* _logFacilityPrefix;
	NSObject*<OS_dispatch_queue> _dq;
	asl_object_sRef _aslClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dq;              //@synthesize dq=_dq - In the implementation block
@property (assign,nonatomic) asl_object_sRef aslClient;                    //@synthesize aslClient=_aslClient - In the implementation block
@property (assign,nonatomic) long long logLevel;                           //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,readonly) long long effectiveLogLevel; 
@property (nonatomic,retain) NSString * logFacilityPrefix;                 //@synthesize logFacilityPrefix=_logFacilityPrefix - In the implementation block
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(id)_logFacilityPrefixForImagePath:(id)arg1 ;
+(void)setExcludedFacilities:(id)arg1 ;
+(void)setExcludedFacilitiesFromString:(id)arg1 ;
+(void)setMirrorToStderr:(BOOL)arg1 ;
+(void)setGlobalLogLevel:(long long)arg1 ;
+(long long)globalLogLevel;
+(void)setDefaultLogFacilityPrefix:(id)arg1 ;
+(id)defaultLogFacilityPrefix;
+(BOOL)mirrorToStderr;
+(id)excludedFacilities;
+(id)instanceForCurrentBundle;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(asl_object_sRef)aslClient;
-(void)setDq:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_logAtLevel:(unsigned)arg1 facility:(id)arg2 addFacilityPrefix:(BOOL)arg3 logImmediately:(BOOL)arg4 path:(const char*)arg5 lineNumber:(long long)arg6 function:(const char*)arg7 logString:(id)arg8 format:(id)arg9 withParameters:(char*)arg10 ;
-(NSString *)logFacilityPrefix;
-(BOOL)shouldLogAtLevel:(unsigned)arg1 addFacilityPrefix:(BOOL)arg2 withFacility:(id)arg3 ;
-(void)_processASLMessageNow:(asl_object_sRef)arg1 ;
-(void)_processASLMessage:(asl_object_sRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)dq;
-(void)_openASLHandle;
-(void)setExcludedFacilities:(id)arg1 ;
-(void)setExcludedFacilitiesFromString:(id)arg1 ;
-(void)setMirrorToStderr:(BOOL)arg1 ;
-(id)excludedFacilities;
-(long long)effectiveLogLevel;
-(void)_logAtLevel:(unsigned)arg1 facility:(id)arg2 path:(const char*)arg3 lineNumber:(long long)arg4 function:(const char*)arg5 format:(id)arg6 ;
-(void)logAtLevel:(unsigned)arg1 facility:(id)arg2 logImmediately:(BOOL)arg3 path:(const char*)arg4 lineNumber:(long long)arg5 function:(const char*)arg6 format:(id)arg7 ;
-(void)swiftLogAtLevel:(unsigned)arg1 facility:(id)arg2 addFacilityPrefix:(BOOL)arg3 logImmediately:(BOOL)arg4 path:(id)arg5 lineNumber:(long long)arg6 function:(id)arg7 string:(id)arg8 ;
-(void)setLogFacilityPrefix:(NSString *)arg1 ;
-(void)setAslClient:(asl_object_sRef)arg1 ;
-(id)initWithImagePath:(id)arg1 ;
-(void)logAtLevel:(unsigned)arg1 facility:(id)arg2 addFacilityPrefix:(BOOL)arg3 logImmediately:(BOOL)arg4 path:(const char*)arg5 lineNumber:(long long)arg6 function:(const char*)arg7 format:(id)arg8 ;
@end

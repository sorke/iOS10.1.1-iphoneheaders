/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODirectionsError.h>

@class NSString, GEOAlert;

@interface _GEODirectionsError : NSObject <GEODirectionsError> {

	GEOAlert* _alert;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;

}

@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
-(void)dealloc;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(BOOL)hasError:(long long)arg1 ;
-(long long)firstDirectionsErrorCode;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
@end


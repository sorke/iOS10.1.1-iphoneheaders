/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventLocationForGeocode.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding> {

	unsigned long long _locationType;
	NSString* _label;
	NSString* _address;
	double _latitude;
	double _longitude;
	double _accuracy;
	double _quality;
	NSData* _handle;

}

@property (nonatomic,readonly) unsigned long long locationType;              //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (getter=isGeocoded,nonatomic,readonly) BOOL geocoded; 
@property (nonatomic,readonly) double latitude;                              //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                             //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double accuracy;                              //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) double quality;                               //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) NSData * handle;                              //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(double)accuracy;
-(unsigned long long)locationType;
-(NSData *)handle;
-(double)quality;
-(NSString *)address;
-(double)latitude;
-(double)longitude;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 accuracy:(double)arg6 quality:(double)arg7 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 ;
-(id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5 ;
-(BOOL)isGeocoded;
-(id)geocodeLabel;
-(id)geocodeAddress;
-(BOOL)geocodeIsStart;
-(BOOL)geocodeIsEnd;
-(double)geocodeLatitude;
-(double)geocodeLongitude;
-(double)geocodeAccuracy;
-(id)geocodeHandle;
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9 handle:(id)arg10 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
@end

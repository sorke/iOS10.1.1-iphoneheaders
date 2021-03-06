/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue {

	SCD_Struct_CM5 _timeMapping;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(SCD_Struct_CM5)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(Class)classForCoder;
-(const char*)objCType;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_CM5)CMTimeMappingValue;
@end


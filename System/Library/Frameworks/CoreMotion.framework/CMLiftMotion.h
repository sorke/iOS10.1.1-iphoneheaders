/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMLiftMotion : NSObject <NSSecureCoding, NSCopying> {

	double fDate;
	unsigned long long fLiftTransition;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) unsigned long long liftTransition; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDate:(double)arg1 liftTransition:(unsigned long long)arg2 ;
-(unsigned long long)liftTransition;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IMPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (retain) id first;               //@synthesize first=_first - In the implementation block
@property (retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)second;
-(void)setSecond:(id)arg1 ;
-(id)first;
-(void)setFirst:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

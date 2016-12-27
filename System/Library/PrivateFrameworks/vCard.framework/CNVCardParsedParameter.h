/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNVCardParsedParameter : NSObject {

	NSString* _name;
	NSArray* _values;

}

@property (copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)parameterWithName:(id)arg1 values:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(NSArray *)values;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
@end

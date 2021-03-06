/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(id)description;
-(int)intValue;
-(double)value;
-(id)initWithNumber:(double)arg1 ;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(int)unitType;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(int)compareValue:(id)arg1 ;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DValueEnumerator : NSObject {

	ValueEnumerator mImp;

}

@property (nonatomic,readonly) double value; 
-(BOOL)isValidNonZero;
-(id)enumerator;
-(BOOL)isValid;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)nextObject;
-(unsigned long long)index;
@end

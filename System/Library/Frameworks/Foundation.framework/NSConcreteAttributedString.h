/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {

	NSString* string;
	NSRLEArray* attributes;

}
-(id)_runArrayHoldingAttributes;
-(id)init;
-(void)dealloc;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
@end

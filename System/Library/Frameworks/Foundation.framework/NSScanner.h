/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (copy,readonly) NSString * string; 
@property (assign) unsigned long long scanLocation; 
@property (copy) NSCharacterSet * charactersToBeSkipped; 
@property (assign) BOOL caseSensitive; 
@property (retain) id locale; 
+(id)localizedScannerWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(BOOL)mf_scanUpToRegularExpression:(id)arg1 ;
-(NSRange)_rangeOfFirstMatchWithRegularExpression:(id)arg1 ;
-(id)mf_remainingString;
-(BOOL)mf_scanUpAndOverString:(id)arg1 ;
-(id)mf_nextTokenWithPunctuation:(CFCharacterSetRef)arg1 ;
-(BOOL)scanCGFloat:(double*)arg1 ;
-(id)_remainingString;
-(BOOL)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(id)_invertedSkipSet;
-(BOOL)scanFloat:(float*)arg1 ;
-(BOOL)scanHexDouble:(double*)arg1 ;
-(BOOL)scanHexFloat:(float*)arg1 ;
-(BOOL)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(BOOL)scanDecimal:(SCD_Struct_NS52*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)scanString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanInteger:(long long*)arg1 ;
-(BOOL)isAtEnd;
-(BOOL)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(BOOL)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(id)locale;
-(BOOL)scanHexInt:(unsigned*)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(BOOL)scanDouble:(double*)arg1 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(unsigned long long)scanLocation;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)scanHexLongLong:(unsigned long long*)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
@end

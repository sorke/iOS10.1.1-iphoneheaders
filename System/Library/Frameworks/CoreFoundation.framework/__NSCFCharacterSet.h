/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)bitmapRepresentation;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)invertedSet;
-(void)removeCharactersInString:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
@end


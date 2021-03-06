/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDProtection : NSObject <NSCopying> {

	BOOL mHidden;
	BOOL mLocked;

}
+(id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(id)init;
-(BOOL)isHidden;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isEqualToProtection:(id)arg1 ;
@end


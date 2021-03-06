/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NS7 _transformStruct;

}

@property (assign) SCD_Struct_NS7 transformStruct; 
+(BOOL)supportsSecureCoding;
+(id)transform;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(id)initWithTransform:(id)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)scaleBy:(double)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(SCD_Struct_NS7)transformStruct;
-(void)setTransformStruct:(SCD_Struct_NS7)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(void)rotateByDegrees:(double)arg1 ;
-(void)invert;
@end


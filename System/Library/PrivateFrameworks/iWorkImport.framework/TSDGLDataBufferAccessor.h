/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS559*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint2D:(SCD_Struct_TS559)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS560*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS560)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(tquat<float>*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint4D:(tquat<float>)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(void)setColors:(id)arg1 ;
-(void)dealloc;
-(id)cycleColorAtIndex:(unsigned long long)arg1 ;
-(id)repeatColorAtIndex:(unsigned long long)arg1 ;
-(id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)setMethod:(int)arg1 ;
-(void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
@end


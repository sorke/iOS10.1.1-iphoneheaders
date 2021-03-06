/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLHexLayout.h>

@interface CSLUniformHexLayout : CSLHexLayout {

	double _diameter;
	double _hexSideSize;

}

@property (assign,nonatomic) double hexSideSize;              //@synthesize hexSideSize=_hexSideSize - In the implementation block
-(float)hexSideSizeWithCenterDiameter:(double)arg1 ;
-(void)setHexSideSize:(double)arg1 ;
-(double)hexSideSize;
-(id)initWithDefaultPixelDiameter:(double)arg1 ;
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
@end


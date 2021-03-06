/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKitUI/CLKUITimeLabelStyle.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying> {

	NTKLayoutRule* _layoutRule;

}

@property (nonatomic,retain) NTKLayoutRule * layoutRule;              //@synthesize layoutRule=_layoutRule - In the implementation block
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 ;
+(id)defaultStyleForBounds:(CGRect)arg1 withRightSideMargin:(double)arg2 withBaselineY:(double)arg3 ;
+(id)smallInUpperRightCornerStyleForBounds:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKLayoutRule *)layoutRule;
-(void)setLayoutRule:(NTKLayoutRule *)arg1 ;
@end


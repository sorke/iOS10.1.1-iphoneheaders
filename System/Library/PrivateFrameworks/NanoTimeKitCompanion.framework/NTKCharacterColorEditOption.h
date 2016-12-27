/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption

@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) UIColor * colorValue; 
@property (nonatomic,readonly) double desaturation; 
+(id)optionWithFaceColor:(unsigned long long)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 ;
+(unsigned long long)numberOfOptionsForCharacter:(unsigned long long)arg1 ;
+(id)optionWithOption:(id)arg1 forCharacter:(unsigned long long)arg2 ;
+(id)optionAtIndex:(unsigned long long)arg1 forCharacter:(unsigned long long)arg2 ;
+(unsigned long long)indexOfOption:(id)arg1 forCharacter:(unsigned long long)arg2 ;
-(long long)swatchStyle;
-(unsigned long long)color;
-(double)desaturation;
-(UIColor *)colorValue;
-(id)_valueToFaceBundleStringDict;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface NTKOverrideTextProvider : CLKTextProvider {

	NSString* _text;
	/*^block*/id _overrideBlock;

}

@property (nonatomic,copy) id overrideBlock;              //@synthesize overrideBlock=_overrideBlock - In the implementation block
@property (nonatomic,copy) NSString * text;               //@synthesize text=_text - In the implementation block
+(id)textProviderWithText:(id)arg1 overrideBlock:(/*^block*/id)arg2 ;
+(id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 weight:(double)arg3 ;
+(id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)overrideBlock;
-(void)setOverrideBlock:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
@end


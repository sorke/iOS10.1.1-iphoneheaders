/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class NTKColoringLabel, NTKDigitalTimeLabel, NSString;

@interface NTKWorldClockSmallModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay> {

	NTKColoringLabel* _cityLabel;
	NTKDigitalTimeLabel* _timeLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)setIsXL:(BOOL)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setOverrideDate:(id)arg1 ;
-(void)_configureContentSubviews;
-(void)setShortCity:(id)arg1 ;
-(void)startTimeTravelAnimated:(BOOL)arg1 ;
-(void)endTimeTravelAnimated:(BOOL)arg1 ;
-(id)_timeFontOfSize:(double)arg1 ;
-(id)_timeFontOfSize:(double)arg1 monospace:(BOOL)arg2 ;
-(void)_updateTimeFont:(BOOL)arg1 ;
@end

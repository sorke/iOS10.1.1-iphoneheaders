/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIView, UISlider, UILabel, NPSDomainAccessor;

@interface ZoomLabeledSliderCell : PSTableCell {

	UIView* _leftView;
	UISlider* _sliderView;
	UIView* _rightView;
	UILabel* _rightLabel;
	NPSDomainAccessor* _zoomDomainAccessor;

}

@property (nonatomic,retain) UIView * leftView;                         //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UISlider * sliderView;                     //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                        //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,retain) UILabel * rightLabel;                      //@synthesize rightLabel=_rightLabel - In the implementation block
@property (retain) NPSDomainAccessor * zoomDomainAccessor;              //@synthesize zoomDomainAccessor=_zoomDomainAccessor - In the implementation block
-(void)setZoomDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)_updateRightLabelWithValue:(double)arg1 ;
-(NPSDomainAccessor *)zoomDomainAccessor;
-(void)handleSliderBeingDragged:(id)arg1 ;
-(void)handleSliderDidFinishDrag:(id)arg1 ;
-(void)setRightLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(UILabel *)rightLabel;
-(void)setSliderView:(UISlider *)arg1 ;
-(UISlider *)sliderView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

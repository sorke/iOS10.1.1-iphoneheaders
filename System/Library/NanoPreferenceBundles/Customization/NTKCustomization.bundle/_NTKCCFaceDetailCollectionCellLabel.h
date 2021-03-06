/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CAShapeLayer, NSString;

@interface _NTKCCFaceDetailCollectionCellLabel : UIView {

	UILabel* _label;
	CAShapeLayer* _background;
	BOOL _usesShortTextWidth;
	BOOL _active;

}

@property (assign,nonatomic) BOOL usesShortTextWidth;              //@synthesize usesShortTextWidth=_usesShortTextWidth - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
-(BOOL)usesShortTextWidth;
-(id)_inactiveTextColor;
-(id)_activeTextColor;
-(void)setUsesShortTextWidth:(BOOL)arg1 ;
-(id)_inactiveFont;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)_activeFont;
@end


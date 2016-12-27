/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIButton, UIView;

@interface SKUIStackedBarCell : UIButton {

	BOOL _expanded;
	UILabel* _expandedLabel;
	UIButton* _backButton;
	UIView* _separator;

}

@property (assign,nonatomic) BOOL expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(UIButton *)backButton;
@end

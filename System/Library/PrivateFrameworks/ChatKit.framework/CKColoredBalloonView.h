/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView;

@interface CKColoredBalloonView : CKBalloonView {

	char _color;
	BOOL _wantsGradient;
	CKBalloonImageView* _mask;
	CKBalloonImageView* _effectViewMask;
	CKGradientView* _gradientView;

}

@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * effectViewMask;                                 //@synthesize effectViewMask=_effectViewMask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) BOOL wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
@property (assign,nonatomic) char color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) BOOL hasBackground; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(char)color;
-(void)setColor:(char)arg1 ;
-(CKBalloonImageView *)mask;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(id)overlayColor;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(BOOL)hasBackground;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(void)setHasTail:(BOOL)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(BOOL)needsGroupOpacity;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(BOOL)wantsGradient;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(CKGradientView *)gradientView;
-(void)setEffectViewMaskImage:(id)arg1 ;
-(void)updateWantsGradient;
-(void)setWantsGradient:(BOOL)arg1 ;
-(CKBalloonImageView *)effectViewMask;
-(void)setEffectViewMask:(CKBalloonImageView *)arg1 ;
@end


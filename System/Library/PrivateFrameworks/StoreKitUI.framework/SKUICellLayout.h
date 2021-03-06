/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, SKUIClientContext;

@interface SKUICellLayout : NSObject {

	UIView* _cell;
	SKUIClientContext* _clientContext;
	UIView* _contentView;
	BOOL _parentWantsCellNeedsLayout;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * parentCellView;               //@synthesize cell=_cell - In the implementation block
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)resetLayout;
-(UIView *)parentCellView;
@end


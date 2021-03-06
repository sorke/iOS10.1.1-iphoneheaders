/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class SearchUITitleContainerView, NSMutableArray, UILabel, NSString;

@interface SearchUITextAreaView : NUIContainerStackView <NUIContainerStackViewDelegate> {

	unsigned long long _style;
	SearchUITitleContainerView* _titleContainer;
	NSMutableArray* _richTextFields;
	UILabel* _footnoteLabel;

}

@property (assign) unsigned long long style;                                 //@synthesize style=_style - In the implementation block
@property (retain) SearchUITitleContainerView * titleContainer;              //@synthesize titleContainer=_titleContainer - In the implementation block
@property (retain) NSMutableArray * richTextFields;                          //@synthesize richTextFields=_richTextFields - In the implementation block
@property (retain) UILabel * footnoteLabel;                                  //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)footNoteLabelFont;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(CGRect)containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2 ;
-(UILabel *)footnoteLabel;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)noRichTextFields;
-(BOOL)noFootNote;
-(void)setTitleContainer:(SearchUITitleContainerView *)arg1 ;
-(SearchUITitleContainerView *)titleContainer;
-(void)setRichTextFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)richTextFields;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
@end


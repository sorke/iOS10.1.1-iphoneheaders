/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class SFSearchResult, NUIContainerStackView, SearchUIThumbnailView, SearchUITextAreaView, NSMutableDictionary, SearchUIAccessoryViewController, CNAvatarView, SearchUIForceTouchGestureRecognizer, NSString;

@interface SearchUISingleResultTableViewCell : SearchUITableViewCell <NUIContainerStackViewDelegate, CNAvatarViewDelegate> {

	SFSearchResult* _result;
	NUIContainerStackView* _container;
	SearchUIThumbnailView* _thumbnailView;
	SearchUITextAreaView* _textAreaView;
	NSMutableDictionary* _accessoryViewControllers;
	SearchUIAccessoryViewController* _accessoryViewControllerForResult;
	CNAvatarView* _contactView;
	SearchUIForceTouchGestureRecognizer* _forceTouchRecognizer;

}

@property (retain) SFSearchResult * result;                                                         //@synthesize result=_result - In the implementation block
@property (retain) NUIContainerStackView * container;                                               //@synthesize container=_container - In the implementation block
@property (retain) SearchUIThumbnailView * thumbnailView;                                           //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (retain) SearchUITextAreaView * textAreaView;                                             //@synthesize textAreaView=_textAreaView - In the implementation block
@property (retain) NSMutableDictionary * accessoryViewControllers;                                  //@synthesize accessoryViewControllers=_accessoryViewControllers - In the implementation block
@property (retain) SearchUIAccessoryViewController * accessoryViewControllerForResult;              //@synthesize accessoryViewControllerForResult=_accessoryViewControllerForResult - In the implementation block
@property (retain) CNAvatarView * contactView;                                                      //@synthesize contactView=_contactView - In the implementation block
@property (retain) SearchUIForceTouchGestureRecognizer * forceTouchRecognizer;                      //@synthesize forceTouchRecognizer=_forceTouchRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NUIContainerStackView *)container;
-(void)setContainer:(NUIContainerStackView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(SFSearchResult *)result;
-(CNAvatarView *)contactView;
-(CGSize)containerStackView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2 ;
-(void)setResult:(SFSearchResult *)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)initWithResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)setAccessoryViewControllers:(NSMutableDictionary *)arg1 ;
-(void)setTextAreaView:(SearchUITextAreaView *)arg1 ;
-(void)setForceTouchRecognizer:(SearchUIForceTouchGestureRecognizer *)arg1 ;
-(SearchUIForceTouchGestureRecognizer *)forceTouchRecognizer;
-(UIEdgeInsets)computeLayoutMargins;
-(id)contactInlineActionViewController;
-(NSMutableDictionary *)accessoryViewControllers;
-(SearchUITextAreaView *)textAreaView;
-(void)setAccessoryViewControllerForResult:(SearchUIAccessoryViewController *)arg1 ;
-(SearchUIAccessoryViewController *)accessoryViewControllerForResult;
-(void)updateThumbnailWithResult:(id)arg1 ;
-(void)updateForceTouchRecognizerWithResult:(id)arg1 ;
-(BOOL)arrangedViewMustCenter:(id)arg1 ;
-(void)stackViewDidInvalidateIntrinsicContentSize:(id)arg1 ;
-(SearchUIThumbnailView *)thumbnailView;
-(void)setThumbnailView:(SearchUIThumbnailView *)arg1 ;
-(void)setContactView:(CNAvatarView *)arg1 ;
@end

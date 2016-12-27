/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>

@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction {

	long long _selectedChoice;
	CNContactSuggestionViewController* _suggestionViewController;

}

@property (nonatomic,retain) CNContactSuggestionViewController * suggestionViewController;              //@synthesize suggestionViewController=_suggestionViewController - In the implementation block
@property (assign,nonatomic) long long selectedChoice;                                                  //@synthesize selectedChoice=_selectedChoice - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(long long)selectedChoice;
-(void)confirm;
-(void)reject;
-(BOOL)_confirmOrReject:(BOOL)arg1 ;
-(void)setSelectedChoice:(long long)arg1 ;
-(void)setSuggestionViewController:(CNContactSuggestionViewController *)arg1 ;
-(CNContactSuggestionViewController *)suggestionViewController;
@end

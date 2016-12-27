/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIFeedbackDelegatePrivate.h>
#import <libobjc.A.dylib/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@class NSString;

@interface SPUIFeedbackManager : NSObject <SearchUIFeedbackDelegatePrivate, SearchUIFeedbackDelegate, _MKPlaceViewControllerFeedbackDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)didEndSearch:(id)arg1 ;
+(void)didRankSections:(id)arg1 ;
+(void)suggestionsDidBecomeVisible:(id)arg1 ;
+(void)didAppendLateSections:(id)arg1 ;
+(id)sharedManager;
+(void)didPeekResult:(id)arg1 ;
+(void)didPerformSearchOnSuggestion:(id)arg1 ;
+(id)didStartSearch:(id)arg1 whyQuery:(unsigned long long)arg2 queryIdent:(unsigned long long)arg3 ;
+(void)didSearchInAppForSection:(id)arg1 ;
+(void)sectionHeaderDidBecomeVisible:(id)arg1 headerType:(unsigned long long)arg2 ;
+(void)resultsDidBecomeVisible:(id)arg1 why:(unsigned long long)arg2 ;
+(void)didShowMoreForSection:(id)arg1 showMore:(BOOL)arg2 ;
+(void)aggdLogEngagementWithResult:(id)arg1 atDistanceFromTop:(double)arg2 ;
+(void)cardViewDidDisappearForReason:(unsigned long long)arg1 ;
+(void)didAppearFromSource:(unsigned long long)arg1 ;
+(void)didDisappearWithReason:(unsigned long long)arg1 ;
+(void)didClearInputForReason:(unsigned long long)arg1 ;
+(void)didEngageResult:(id)arg1 forReason:(unsigned long long)arg2 withDestination:(unsigned long long)arg3 ;
+(void)didEngageResultWithFeedback:(id)arg1 ;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(void)didSelectResult:(id)arg1 ;
-(void)didPeekResult:(id)arg1 ;
-(void)didPopResult:(id)arg1 ;
-(BOOL)didHandleCardSectionEngagement:(id)arg1 ;
-(void)didEngageActionItem:(id)arg1 actionPerformed:(BOOL)arg2 ;
@end

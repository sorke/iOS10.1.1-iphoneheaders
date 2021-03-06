/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsPeriodicScoreboardView.h>

@class ACSportsMatchupLineScoreView, SASportsBaseballMatchup;

@interface ACSportsBaseballScoreboardView : ACSportsPeriodicScoreboardView {

	ACSportsMatchupLineScoreView* _hitsLineScoreView;
	ACSportsMatchupLineScoreView* _errorsLineScoreView;

}

@property (nonatomic,retain) SASportsBaseballMatchup * matchup; 
+(BOOL)isCondensedScoreView;
+(id)totalLineScorePeriodName;
+(long long)extraLineScoreColumns;
+(double)lineScoreRightPadding;
+(double)totalLineScoreLeftPadding;
-(void)didChangeMatchupFromMatchup:(id)arg1 ;
-(double)legendHeight;
-(void)setUnifiedLegendHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UIImageView, SiriUIContentLabel;

@interface SiriGKAttributionView : SiriGKView {

	UIImageView* _attributionImageView;
	SiriUIContentLabel* _attributionLabel;
	BOOL _hasSetUpConstraints;

}
-(void)_configureWithImage:(id)arg1 ;
-(id)initWithAppPunchOut:(id)arg1 usingPersistentStore:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
@end

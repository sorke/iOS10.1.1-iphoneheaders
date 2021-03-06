/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSNumberFormatter, UIImageView, UIView, UILabel;

@interface AVRateBubbleView : UIView {

	NSNumberFormatter* _rateFormatter;
	UIImageView* _lightView;
	UIView* _backdropView;
	UILabel* _rateLabel;
	float _rate;

}

@property (assign,nonatomic) float rate; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end


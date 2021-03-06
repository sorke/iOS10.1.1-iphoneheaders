/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString, UIColor;

@interface TopHitCompletionView : UIView {

	NSAttributedString* _attributedText;
	unsigned long long _highlightStartIndex;
	UIColor* _highlightColor;

}

@property (nonatomic,copy) UIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
-(void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end


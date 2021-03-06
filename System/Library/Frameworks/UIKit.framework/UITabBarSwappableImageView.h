/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {

	UIImage* _value;
	UIImage* _alternate;
	BOOL _showAlternate;

}
-(void)setImage:(id)arg1 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 ;
-(void)setAlternateImage:(id)arg1 ;
@end


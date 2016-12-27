/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>

@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;

}
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)renderConfig;
-(void)dimKeys:(id)arg1 ;
-(id)key;
-(id)contentsKeyView;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)layerForRenderFlags:(long long)arg1 ;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(void)prepareForDisplay;
-(id)keyplane;
-(id)factory;
-(CGRect)drawFrame;
-(BOOL)requiresSublayers;
-(BOOL)hasRendered;
-(void)setFactory:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/UIView.h>

@class FBSceneLayer;

@interface FBSceneLayerHostView : UIView {

	FBSceneLayer* _sceneLayer;

}

@property (nonatomic,retain,readonly) FBSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 ;
-(FBSceneLayer *)sceneLayer;
@end

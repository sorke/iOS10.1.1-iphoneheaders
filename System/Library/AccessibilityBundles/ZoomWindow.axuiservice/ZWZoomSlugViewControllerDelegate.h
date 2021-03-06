/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWZoomSlugViewControllerDelegate <NSObject>
@required
-(BOOL)shouldShowSlugWithSlugViewController:(id)arg1;
-(void)slugWasSingleTappedWithSlugViewController:(id)arg1;
-(void)slugWasDoubleTappedWithSlugViewController:(id)arg1;
-(void)prepareForSlugZoomPanningWithSlugViewController:(id)arg1;
-(BOOL)shouldBeginAutopanningLensWithSlugViewController:(id)arg1;
-(void)wantsToStartAutopannerWithSlugViewController:(id)arg1;
-(void)zoomSlugViewController:(id)arg1 wantsToAdjustZoomLevelWithDelta:(CGPoint)arg2;
-(void)zoomSlugViewController:(id)arg1 didDragSlug:(id)arg2 withDelta:(CGPoint)arg3;
-(void)wantsToStopAutopannerWithSlugViewController:(id)arg1;

@end


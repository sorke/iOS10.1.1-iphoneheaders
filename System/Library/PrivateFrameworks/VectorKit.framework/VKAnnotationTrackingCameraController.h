/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKAnnotationTrackingCameraController <NSObject>
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (assign,nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (nonatomic,readonly) BOOL isAnimatingToTrackAnnotation; 
@property (nonatomic,readonly) BOOL isTrackingHeading; 
@required
-(long long)annotationTrackingHeadingAnimationDisplayRate;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(BOOL)isTrackingHeading;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1;
-(long long)annotationTrackingZoomStyle;
-(BOOL)isAnimatingToTrackAnnotation;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;

@end


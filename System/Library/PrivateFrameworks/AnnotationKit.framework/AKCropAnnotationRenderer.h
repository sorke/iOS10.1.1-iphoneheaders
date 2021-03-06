/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKCropAnnotationRenderer : AKAnnotationRenderer
+(CGPathRef)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(CGPathRef)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double*)arg3 ;
+(void)_pixelAlignedBaseRect:(CGRect*)arg1 interiorRect:(CGRect*)arg2 scaleFactor:(double*)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKThoughtBubbleAnnotation : AKRectangularShapeAnnotation {

	CGPoint _pointyBitPoint;

}

@property (assign) CGPoint pointyBitPoint;              //@synthesize pointyBitPoint=_pointyBitPoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(CGPoint)pointyBitPoint;
-(void)setPointyBitPoint:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
@end


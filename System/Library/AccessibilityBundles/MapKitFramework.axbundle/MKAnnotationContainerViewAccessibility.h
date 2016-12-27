/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKitFramework/MapKitFramework-Structs.h>
#import <MapKitFramework/__MKAnnotationContainerViewAccessibility_super.h>

@interface MKAnnotationContainerViewAccessibility : __MKAnnotationContainerViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityPerformEscape;
-(void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(BOOL)accessibilityIsShowingAnnotationCallout;
-(id)_accessibilityAnnotationCalloutView;
-(id)_accessibilityAnnotationViews;
-(id)_accessibilityFilterVisibleElements:(id)arg1 ;
-(void)_accessibilityZoom:(BOOL)arg1 point:(CGPoint)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityContainerElements;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
@end

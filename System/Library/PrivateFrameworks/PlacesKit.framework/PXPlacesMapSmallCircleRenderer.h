/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationRenderer.h>
#import <libobjc.A.dylib/PXPlacesMapGeotaggableInfoDelegate.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesMapGeotaggableInfoDelegate;
@class NSString;

@interface PXPlacesMapSmallCircleRenderer : NSObject <PXPlacesMapAnnotationRenderer, PXPlacesMapGeotaggableInfoDelegate> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;

}

@property (__weak) id<PXPlacesMapGeotaggableInfoDelegate> informationDelegate;                                       //@synthesize informationDelegate=_informationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
-(void)reset;
-(long long)annotationType;
-(UIEdgeInsets)minimumEdgeInsets;
-(void)imageForGeotaggable:(id)arg1 ofSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(BOOL)supportsMoveAnimations;
-(id)viewForAnnotation:(id)arg1 andMapView:(id)arg2 ;
-(id)annotationForGeotaggables:(id)arg1 initialCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)informationDelegate;
-(void)setInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
@end

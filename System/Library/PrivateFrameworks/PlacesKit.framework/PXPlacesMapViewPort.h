/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPlacesMapViewPort : NSObject <NSCopying> {

	double _zoomLevel;
	double _pitch;
	double _scale;
	CGSize _viewSize;
	SCD_Struct_PX4 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_PX4 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                     //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) double zoomLevel;                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) double pitch;                        //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(CGSize)viewSize;
-(void)setMapRect:(SCD_Struct_PX4)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(SCD_Struct_PX4)mapRect;
-(double)zoomLevel;
-(void)setViewSize:(CGSize)arg1 ;
-(id)viewPortsBySplitingAt180thMerdian;
-(id)initWithMapRect:(SCD_Struct_PX4)arg1 andViewSize:(CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 ;
-(BOOL)isSpanning180thMerdian;
@end

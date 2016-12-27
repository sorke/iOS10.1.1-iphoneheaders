/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol DKInkRenderer <NSObject>
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@required
-(void)setDelegate:(id)arg1;
-(id<DKInkRendererDelegate>)delegate;
-(void)flush;
-(void)display;
-(void)force;
-(id)snapshot;
-(BOOL)drawingEnabled;
-(void)setMode:(unsigned long long)arg1;
-(unsigned long long)mode;
-(void)teardown;
-(void)addPoint:(SCD_Struct_DK0)arg1;
-(void)setDrawingEnabled:(BOOL)arg1;
-(void)clear;
-(UIColor *)inkColor;
-(void)setInkColor:(id)arg1;
-(void)endStroke;
-(BOOL)initialized;
-(void)beginStroke;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1;
-(double)drawingScale;
-(void)setDrawingScale:(double)arg1;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;

@end

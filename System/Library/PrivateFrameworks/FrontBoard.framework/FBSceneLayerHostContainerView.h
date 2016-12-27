/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>

@protocol FBSceneLayerHostContainerViewDelegate, FBSceneLayerHostContainerViewDataSource;
@class FBScene, NSMutableArray, NSArray, NSString;

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {

	FBScene* _scene;
	id<FBSceneLayerHostContainerViewDelegate> _delegate;
	id<FBSceneLayerHostContainerViewDataSource> _dataSource;
	NSMutableArray* _hostViews;
	NSMutableArray* _hostedLayers;

}

@property (nonatomic,retain,readonly) FBScene * scene;                                            //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain,readonly) NSArray * hostedLayers;                                     //@synthesize hostedLayers=_hostedLayers - In the implementation block
@property (assign,nonatomic) id<FBSceneLayerHostContainerViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<FBSceneLayerHostContainerViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDataSource:(id<FBSceneLayerHostContainerViewDataSource>)arg1 ;
-(void)setDelegate:(id<FBSceneLayerHostContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)window;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneLayerHostContainerViewDataSource>)dataSource;
-(id<FBSceneLayerHostContainerViewDelegate>)delegate;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)hasContent;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isHosting;
-(void)_rebuildLayers;
-(id)_createHostViewForLayer:(id)arg1 ;
-(void)_adjustHostViewFrame:(id)arg1 ;
-(void)_noteHostingStatusChanged;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)rebuildLayers;
-(NSArray *)hostedLayers;
-(id)initWithScene:(id)arg1 ;
-(FBScene *)scene;
@end

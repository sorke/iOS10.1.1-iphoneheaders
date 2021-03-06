/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, VKTileKeyList, GEOTileKeyList, NSMutableArray;

@interface VKScene : NSObject <NSCopying> {

	NSSet* _tilesToRender;
	NSSet* _neighborTiles;
	VKTileKeyList* _keysInView;
	VKTileKeyList* _neighborKeys;
	GEOTileKeyList* _debugKeyList;
	BOOL _fullyLoaded;
	BOOL _mapIsOpaque;
	NSMutableArray* _rasterOverlayScenes;

}

@property (nonatomic,retain) NSSet * tilesToRender;                      //@synthesize tilesToRender=_tilesToRender - In the implementation block
@property (nonatomic,retain) NSSet * neighborTiles;                      //@synthesize neighborTiles=_neighborTiles - In the implementation block
@property (assign,nonatomic) BOOL fullyLoaded;                           //@synthesize fullyLoaded=_fullyLoaded - In the implementation block
@property (assign,nonatomic) BOOL mapIsOpaque;                           //@synthesize mapIsOpaque=_mapIsOpaque - In the implementation block
@property (nonatomic,retain) VKTileKeyList * keysInView;                 //@synthesize keysInView=_keysInView - In the implementation block
@property (nonatomic,retain) VKTileKeyList * neighborKeys;               //@synthesize neighborKeys=_neighborKeys - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * debugKeyList;              //@synthesize debugKeyList=_debugKeyList - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)tilesToRender;
-(void)addRasterOverlayScene:(id)arg1 ;
-(void)setKeysInView:(VKTileKeyList *)arg1 ;
-(VKTileKeyList *)keysInView;
-(void)setMapIsOpaque:(BOOL)arg1 ;
-(void)setFullyLoaded:(BOOL)arg1 ;
-(void)setTilesToRender:(NSSet *)arg1 ;
-(void)clearRasterOverlayScenes;
-(void)setDebugKeyList:(GEOTileKeyList *)arg1 ;
-(void)setNeighborKeys:(VKTileKeyList *)arg1 ;
-(VKTileKeyList *)neighborKeys;
-(void)setNeighborTiles:(NSSet *)arg1 ;
-(NSSet *)neighborTiles;
-(BOOL)fullyLoaded;
-(BOOL)mapIsOpaque;
-(id)unloadedTiles;
-(id)rasterOverlaySceneAtLevel:(unsigned long long)arg1 ;
-(GEOTileKeyList *)debugKeyList;
@end


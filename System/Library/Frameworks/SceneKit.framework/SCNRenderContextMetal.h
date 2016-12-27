/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderContextImp.h>
#import <libobjc.A.dylib/SCNBufferStream.h>

@protocol MTLDevice, MTLCommandQueue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, MTLCommandBuffer, MTLRenderCommandEncoder, MTLComputeCommandEncoder, MTLBuffer, MTLDepthStencilState, MTLSamplerState;
@class SCNMetalResourceManager, NSObject, CAMetalLayer, MTLRenderPassDescriptor, SCNMetalShaderManager, NSMutableArray, NSString;

@interface SCNRenderContextMetal : SCNRenderContextImp <SCNBufferStream> {

	SCNMetalResourceManager* _resourceManager;
	id<MTLDevice> _device;
	int _profile;
	unsigned _features;
	C3DEngineContextRef _engineContext;
	unsigned _wantsWideGamut : 1;
	unsigned _isOpaque : 1;
	id<MTLCommandQueue> _commandQueue;
	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	id<MTLTexture> _textureTarget;
	CAMetalLayer* _layerTarget;
	id<CAMetalDrawable> _drawable;
	MTLRenderPassDescriptor* _currentRenderPassDescriptor;
	 _renderSize;
	SCNMetalShaderManager* _currentShaderManager;
	id<MTLCommandBuffer> _currentCommandBuffer;
	id<MTLRenderCommandEncoder> _currentRenderEncoder;
	id<MTLCommandBuffer> _currentComputeCommandBuffer;
	id<MTLComputeCommandEncoder> _currentComputeEncoder;
	_C3DFXPass* _currentPass;
	BOOL _currentPassIsMirrored;
	SCD_Struct_SC18 _currentStreamBufferIndices;
	NSMutableArray* _vertexVolatileBuffers[3];
	unsigned long long _vertexVolatileBufferIndex;
	unsigned long long _vertexVolatileBufferOffset;
	id<MTLBuffer> _vertexVolatileBuffer;
	NSMutableArray* _volatileMeshes;
	NSMutableArray* _bufferPool;
	NSMutableArray* _usedVolatileMeshElements;
	NSMutableArray* _freeVolatileMeshElements;
	NSMutableArray* _frameConstantBuffers[3];
	unsigned long long _maxFrameConstantBufferIndex[3];
	unsigned long long _frameConstantBufferIndex;
	unsigned long long _frameConstantBufferOffset;
	id<MTLBuffer> _frameConstantBuffer;
	id<MTLDepthStencilState> _defaultDepthStencilState;
	id<MTLSamplerState> _defaultSamplerState;
	_C3DFXMetalProgram* _background2DProgram;
	_C3DFXMetalProgram* _backgroundCubeProgram;
	C3DRasterizerStatesRef _backgroundRasterizerStates;
	double _initialTime;
	id<MTLBuffer> _shadowKernelBuffer;
	SCD_Struct_SC31* _processingContext;
	unsigned _seed;
	SCNSceneBuffer _frameUniforms;
	SCD_Struct_SC34 _sceneUniforms;
	SCD_Struct_SC36* _nodeUniforms;
	SCD_Struct_SC48* _lighting;
	SCD_Struct_SC51* _cache;
	SCD_Struct_SC52* _deferredRendering;
	SCD_Struct_SC53 _compositeRendering;
	SCD_Struct_SC54 _skCompositing;
	SCD_Struct_SC55 _debug;
	BOOL _showsAuthoringEnvironment;
	double _startTimeFlush[3];
	SCD_Struct_SC56 _renderTargets;
	MTLRenderPassDescriptor* _clientRenderPassDescriptor;
	id<MTLRenderCommandEncoder> _clientRenderCommandEncoder;
	id<MTLCommandBuffer> _clientCommandBuffer;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) id<MTLTexture> textureTarget; 
@property (nonatomic,retain) MTLRenderPassDescriptor * clientRenderPassDescriptor;                //@synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> clientRenderCommandEncoder;              //@synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> clientCommandBuffer;                            //@synthesize clientCommandBuffer=_clientCommandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) SCNMetalResourceManager * resourceManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerBindings;
-(void)dealloc;
-(BOOL)isOpaque;
-(void)writeBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(_C3DEngineStats*)stats;
-(SCNMetalResourceManager *)resourceManager;
-(unsigned)features;
-(BOOL)mapVolatileMesh:(C3DMeshRef)arg1 verticesCount:(long long)arg2 ;
-(void)unmapVolatileMesh:(C3DMeshRef)arg1 ;
-(void)drawRenderElement:(_C3DRendererElement*)arg1 withPass:(_C3DFXPass*)arg2 ;
-(id)newRenderTargetWithDescription:(SCD_Struct_SC26*)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id)currentComputeCommandEncoder;
-(id)currentCommandBuffer;
-(void)renderMesh:(C3DMeshRef)arg1 meshElement:(_C3DMeshElement*)arg2 withProgram:(_C3DFXProgram*)arg3 engineContext:(C3DEngineContextRef)arg4 transform:(C3DMatrix4x4)arg5 color:(const C3DColor4*)arg6 rasterizerStates:(C3DRasterizerStatesRef)arg7 blendState:(C3DBlendStatesRef)arg8 texture:(C3DImageRef)arg9 depthBias:(BOOL)arg10 ;
-(void)renderBackground:(_C3DEffectSlot*)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(id)textureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(void)setClientCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setClientRenderPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setClientRenderCommandEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(void)_reduceStatsOfConstantBuffer:(id)arg1 ;
-(void)_setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndices:(SCD_Struct_SC18)arg3 ;
-(void)_setTexture:(id)arg1 atIndices:(SCD_Struct_SC18)arg2 ;
-(void)beginFrame:(id)arg1 ;
-(void)_purgeUnusedContantBuffers;
-(void)resetVolatileMeshes;
-(void)resetVolatileMeshElements;
-(void)endFrameWaitingUntilCompleted:(BOOL)arg1 ;
-(id)_renderTargetWithDescription:(SCD_Struct_SC26)arg1 size:(id)arg2 name:(long long)arg3 ;
-(id)_finalRenderTexture;
-(BOOL)_setupDescriptor:(id)arg1 forPass:(_C3DFXPass*)arg2 cubemapFaceIndex:(unsigned long long)arg3 isFinalTechnique:(BOOL)arg4 ;
-(void)_clearRenderCommanderEncoderCache;
-(void)__C3DFXContextDidApplyPass:(_C3DFXPass*)arg1 ;
-(char*)_allocateConstantBufferSize:(long long)arg1 buffer:(id*)arg2 offset:(unsigned long long*)arg3 ;
-(void)_setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setRasterizerStates:(C3DRasterizerStatesRef)arg1 ;
-(void)_setConstantBufferBytes:(void*)arg1 size:(long long)arg2 atIndices:(SCD_Struct_SC18)arg3 ;
-(void)_setMeshBuffers:(id)arg1 ;
-(void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(void)drawFullScreenQuadForPass:(_C3DFXPass*)arg1 ;
-(void)_setSamplerState:(id)arg1 atIndices:(SCD_Struct_SC18)arg2 ;
-(void)_execute:(SCD_Struct_SC59*)arg1 ;
-(void)_setZeroConstantBufferOfSize:(unsigned long long)arg1 atIndices:(SCD_Struct_SC18)arg2 ;
-(id)radianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(id)irradianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(id)__reserveVolatileBufferForSize:(unsigned long long)arg1 offset:(unsigned long long*)arg2 ;
-(id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1 ;
-(void)_recycleMTLBufferToPool:(id)arg1 ;
-(_C3DFXPass*)_createPassWithVertex:(id)arg1 fragment:(id)arg2 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 ;
-(id)currentRenderPassDescriptor;
-(id)newRenderPipelineStateWithRenderPassDescriptor:(id)arg1 over:(BOOL)arg2 vertexFunctionName:(id)arg3 fragmentFunctionName:(id)arg4 library:(id)arg5 ;
-(void)_drawFullScreenTexture:(id)arg1 over:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(void)setWantsWideGamut:(BOOL)arg1 ;
-(BOOL)wantsWideGamut;
-(void)setIsOpaque:(BOOL)arg1 ;
-(void)_clearUnusedBindingPoints;
-(id<MTLTexture>)textureTarget;
-(BOOL)beginRenderPass:(_C3DFXPass*)arg1 cubemapFaceIndex:(unsigned long long)arg2 isFinalTechnique:(BOOL)arg3 ;
-(void)_setCurrentRenderCommandEncoder:(id)arg1 ;
-(void)endRenderPass;
-(void)_logLightingInformation;
-(void)_setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)startProcessingRendererElementsWithEngineIterationContext:(SCD_Struct_SC60*)arg1 ;
-(void)stopProcessingRendererElements;
-(void)processRendererElement:(_C3DRendererElement*)arg1 ;
-(id)mainColorTextureForChannel:(unsigned long long)arg1 ;
-(id)renderTargetForSemantic:(int)arg1 ;
-(BOOL)showsAuthoringEnvironment;
-(void)setShowsAuthoringEnvironment:(BOOL)arg1 ;
-(_C3DMeshElement*)createVolatileMeshElementOfType:(char)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3 ;
-(void)beginDeferredLighting;
-(void)renderLight:(_C3DNode*)arg1 lightType:(int)arg2 lightData:(_C3DLightRuntimeData*)arg3 ;
-(void)endDeferredLighting;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 ;
-(id)currentRenderCommandEncoder;
-(void)_drawPBRTextures;
-(void)renderSKSceneWithRenderer:(id)arg1 overlay:(BOOL)arg2 atTime:(double)arg3 ;
-(MTLRenderPassDescriptor *)clientRenderPassDescriptor;
-(id<MTLRenderCommandEncoder>)clientRenderCommandEncoder;
-(id<MTLCommandBuffer>)clientCommandBuffer;
-(int)profile;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
@end

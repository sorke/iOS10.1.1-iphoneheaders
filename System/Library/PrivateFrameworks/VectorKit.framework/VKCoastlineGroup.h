/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKCoastlineGroup : NSObject {

	shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* _styleQuery;
	unsigned _tilePointSize;
	unique_ptr<ggl::MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh> > >* _coastlineMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > >* _glowMeshVendor;

}

@property (nonatomic,readonly) const MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh>* coastlineMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::Glow::MeshMesh>* glowMeshVendor; 
@property (nonatomic,readonly) shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* styleQuery;                                 //@synthesize styleQuery=_styleQuery - In the implementation block
-(void)addCoastlineFeature:(SCD_Struct_VK488*)arg1 ;
-(id)initWithStyleQuery:(shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)arg1 tilePointSize:(unsigned)arg2 ;
-(const MeshVendor<ggl::Glow::MeshMesh>*)glowMeshVendor;
-(shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)styleQuery;
-(const MeshVendor<ggl::PolygonShadowedStroke::ShadowPathMesh>*)coastlineMeshVendor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DTextureResource, TSCH3DResource;

@interface TSCH3DTexture : NSObject {

	TSCH3DTextureResource* mTextureResource;

}

@property (nonatomic,readonly) TSCH3DResource * resource; 
-(void)didInitFromSOS;
-(BOOL)hasCompleteData;
-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1 ;
-(id)optimizedMipmapBuffer;
-(void)resetResource;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCH3DResource *)resource;
@end

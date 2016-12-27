/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(id)_initWithExternalSceneID:(id)arg1 level:(double)arg2 trackingContext:(id)arg3 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(NSString *)sceneID;
@end

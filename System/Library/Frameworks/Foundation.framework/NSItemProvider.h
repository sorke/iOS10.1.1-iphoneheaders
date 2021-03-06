/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _NSItemProviderLoading;
@class NSMutableDictionary, NSDictionary, NSArray;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id __previewImageHandler;
	NSMutableDictionary* __loadHandlers;
	id<_NSItemProviderLoading> __loadOperator;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) id previewImageHandler; 
@property (nonatomic,retain) NSMutableDictionary * _loadHandlers;                     //@synthesize _loadHandlers=__loadHandlers - In the implementation block
@property (nonatomic,retain) id<_NSItemProviderLoading> _loadOperator;                //@synthesize _loadOperator=__loadOperator - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * registeredTypeIdentifiers; 
+(BOOL)supportsSecureCoding;
-(id)initWithLivePhoto:(id)arg1 ;
-(void)set_loadOperator:(id<_NSItemProviderLoading>)arg1 ;
-(id<_NSItemProviderLoading>)_loadOperator;
-(void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)previewImageHandler;
-(void)_loadItemOfClass:(Class)arg1 withLoadHandler:(/*^block*/id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)set_loadHandlers:(NSMutableDictionary *)arg1 ;
-(void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemConformingToTypeIdentifier:(id)arg1 ;
-(void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewImageHandler:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSArray *)registeredTypeIdentifiers;
-(NSMutableDictionary *)_loadHandlers;
@end


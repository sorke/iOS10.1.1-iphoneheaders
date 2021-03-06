/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {

	BOOL _updated;
	BOOL _childrenUpdated;
	BOOL _subtreeUpdated;
	BOOL _autoHighlightRead;
	IKDOMNode* _ownerJSNode;
	NSMutableDictionary* _featuresMap;

}

@property (nonatomic,retain) NSMutableDictionary * featuresMap;                              //@synthesize featuresMap=_featuresMap - In the implementation block
@property (assign,nonatomic,__weak) IKDOMNode * ownerJSNode;                                 //@synthesize ownerJSNode=_ownerJSNode - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                  //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isChildrenUpdated,nonatomic) BOOL childrenUpdated;                  //@synthesize childrenUpdated=_childrenUpdated - In the implementation block
@property (assign,getter=isSubtreeUpdated,nonatomic) BOOL subtreeUpdated;                    //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (assign,getter=isAutoHighlightRead,nonatomic) BOOL autoHighlightRead;              //@synthesize autoHighlightRead=_autoHighlightRead - In the implementation block
+(void)load;
+(id)jsNodeDataForNode:(xmlNode*)arg1 create:(BOOL)arg2 ;
-(BOOL)isUpdated;
-(void)setUpdated:(BOOL)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(BOOL)isSubtreeUpdated;
-(BOOL)isChildrenUpdated;
-(void)setChildrenUpdated:(BOOL)arg1 ;
-(IKDOMNode *)ownerJSNode;
-(void)setAutoHighlightRead:(BOOL)arg1 ;
-(NSMutableDictionary *)featuresMap;
-(void)setFeaturesMap:(NSMutableDictionary *)arg1 ;
-(void)setFeature:(id)arg1 forName:(id)arg2 ;
-(id)featureForName:(id)arg1 ;
-(void)setOwnerJSNode:(IKDOMNode *)arg1 ;
-(BOOL)isAutoHighlightRead;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol MSPMutableObject;
@class _MSPContainerEditsRecorder;

@interface _MSPContainerEditDetector : NSProxy {

	_MSPContainerEditsRecorder* _owner;
	id<MSPMutableObject> _object;

}
+(id)originalObjectFromProxyOrObject:(id)arg1 ;
+(id)arrayOfOriginalObjectsFromArray:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 owner:(id)arg2 ;
-(id)_maps_MSPContainerEditDetectorOriginalObject;
@end

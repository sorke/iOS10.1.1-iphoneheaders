/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UICoordinateSpace.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface _SBSceneLayoutCoordinateSpace : NSObject <UICoordinateSpace, BSDescriptionProviding> {

	CGRect _referenceBounds;
	long long _orientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceBounds:(CGRect)arg2 ;
-(CGRect)bounds;
-(NSString *)description;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


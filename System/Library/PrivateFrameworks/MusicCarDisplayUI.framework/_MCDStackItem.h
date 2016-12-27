/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface _MCDStackItem : NSObject {

	NSString* _identifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
+(id)stackItemWithContainer:(id)arg1 ;
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)identifier;
@end

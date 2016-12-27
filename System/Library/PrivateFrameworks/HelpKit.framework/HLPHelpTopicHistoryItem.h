/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSCoding> {

	NSString* _identifier;
	NSString* _anchor;
	CGPoint _contentOffset;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * anchor;                  //@synthesize anchor=_anchor - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)contentOffset;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
@end

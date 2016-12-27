/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/HLPHelpItem.h>

@class NSString, NSArray;

@interface HLPHelpTopicItem : HLPHelpItem {

	NSString* _anchor;
	NSString* _hrefID;
	NSString* _glossaryIdentifierString;
	NSArray* _categories;

}

@property (nonatomic,copy) NSString * hrefID;                                          //@synthesize hrefID=_hrefID - In the implementation block
@property (nonatomic,copy) NSString * anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * glossaryIdentifierString;                        //@synthesize glossaryIdentifierString=_glossaryIdentifierString - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (getter=isPassionPoints,nonatomic,readonly) BOOL passionPoints; 
@property (getter=isGlossary,nonatomic,readonly) BOOL glossary; 
@property (getter=isCopyright,nonatomic,readonly) BOOL copyright; 
-(id)debugDescription;
-(NSArray *)categories;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)hrefID;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 ;
-(void)setGlossaryIdentifierString:(NSString *)arg1 ;
-(BOOL)isPassionPoints;
-(void)setHrefID:(NSString *)arg1 ;
-(NSString *)glossaryIdentifierString;
-(BOOL)categoryContainKey:(id)arg1 ;
-(BOOL)isGlossary;
-(BOOL)isCopyright;
@end

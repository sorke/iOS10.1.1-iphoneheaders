/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying> {

	NSString* _languageTag;
	NSMutableArray* _trendingTopics;

}

@property (nonatomic,readonly) BOOL hasLanguageTag; 
@property (nonatomic,retain) NSString * languageTag;                       //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * trendingTopics;              //@synthesize trendingTopics=_trendingTopics - In the implementation block
+(Class)trendingTopicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)languageTag;
-(NSMutableArray *)trendingTopics;
-(void)addTrendingTopics:(id)arg1 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(BOOL)hasLanguageTag;
-(void)clearTrendingTopics;
-(unsigned long long)trendingTopicsCount;
-(id)trendingTopicsAtIndex:(unsigned long long)arg1 ;
-(void)setTrendingTopics:(NSMutableArray *)arg1 ;
@end


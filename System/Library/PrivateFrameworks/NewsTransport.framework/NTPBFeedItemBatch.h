/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying> {

	NSMutableArray* _feedItems;

}

@property (nonatomic,retain) NSMutableArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
+(Class)feedItemsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)feedItems;
-(void)addFeedItems:(id)arg1 ;
-(void)clearFeedItems;
-(unsigned long long)feedItemsCount;
-(id)feedItemsAtIndex:(unsigned long long)arg1 ;
@end

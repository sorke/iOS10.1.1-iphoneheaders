/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject {

	BOOL _reachedEnd;
	BOOL _reachedMinOrder;
	BOOL _wasDropped;
	NSString* _feedID;
	NSArray* _feedItemAndArticleRecords;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItemAndArticleRecords;              //@synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic) BOOL reachedMinOrder;                           //@synthesize reachedMinOrder=_reachedMinOrder - In the implementation block
@property (assign,nonatomic) BOOL wasDropped;                                //@synthesize wasDropped=_wasDropped - In the implementation block
-(id)description;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setWasDropped:(BOOL)arg1 ;
-(BOOL)wasDropped;
-(void)setFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(NSArray *)feedItemAndArticleRecords;
-(void)setReachedMinOrder:(BOOL)arg1 ;
-(BOOL)reachedMinOrder;
@end


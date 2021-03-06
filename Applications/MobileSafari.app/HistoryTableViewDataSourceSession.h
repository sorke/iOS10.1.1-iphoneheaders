/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSOrderedSet;

@interface HistoryTableViewDataSourceSession : NSObject {

	NSString* _sessionIdentifier;
	NSDate* _sessionDate;
	NSOrderedSet* _historyItems;

}

@property (nonatomic,readonly) NSDate * sessionDate;                      //@synthesize sessionDate=_sessionDate - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier; 
@property (nonatomic,copy) NSOrderedSet * historyItems;                   //@synthesize historyItems=_historyItems - In the implementation block
+(id)sessionWithDate:(id)arg1 ;
+(id)sessionIdentifierFromDate:(id)arg1 ;
+(id)_sessionDateFromDate:(id)arg1 ;
+(id)_sessionIdentifierFromDate:(id)arg1 ;
+(void)initialize;
-(void)setHistoryItems:(NSOrderedSet *)arg1 ;
-(NSDate *)sessionDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sessionIdentifier;
-(id)initWithDate:(id)arg1 ;
-(NSOrderedSet *)historyItems;
@end


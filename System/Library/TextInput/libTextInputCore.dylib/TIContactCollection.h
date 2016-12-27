/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TIContactCollection : NSObject {

	NSMutableArray* _contacts;
	long long _count;
	BOOL _sourceHasRelevancyScore;

}

@property (nonatomic,readonly) BOOL sourceHasRelevancyScore;              //@synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
-(void)dealloc;
-(long long)count;
-(void)addContact:(id)arg1 ;
-(id)initWithRelevanceScoreType:(BOOL)arg1 ;
-(void)enumerateContactsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)sourceHasRelevancyScore;
@end

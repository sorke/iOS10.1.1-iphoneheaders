/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSDate;

@interface FCFetchGroup : NSObject {

	BOOL _shouldFilter;
	BOOL _isUserFacing;
	NSSet* _keys;
	id _context;
	long long _qualityOfService;
	long long _relativePriority;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completion;
	NSDate* _requestDate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * requestDate;                                        //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keys;                                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) id context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldFilter;                                         //@synthesize shouldFilter=_shouldFilter - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                                //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long relativePriority;                                //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,readonly) BOOL isUserFacing;                                         //@synthesize isUserFacing=_isUserFacing - In the implementation block
-(id)context;
-(id)completion;
-(NSSet *)keys;
-(long long)comparePriority:(id)arg1 ;
-(long long)qualityOfService;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(long long)relativePriority;
-(id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 completionQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)fireCompletion;
-(BOOL)isUserFacing;
-(BOOL)shouldFilter;
-(NSDate *)requestDate;
-(void)setRequestDate:(NSDate *)arg1 ;
@end


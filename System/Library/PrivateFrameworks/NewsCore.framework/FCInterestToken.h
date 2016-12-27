/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCInterestToken : NSObject {

	/*^block*/id _removeInterestBlock;

}

@property (nonatomic,copy) id removeInterestBlock;              //@synthesize removeInterestBlock=_removeInterestBlock - In the implementation block
+(id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
+(id)interestTokenWithRemoveInterestBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(id)removeInterestBlock;
-(void)setRemoveInterestBlock:(id)arg1 ;
@end

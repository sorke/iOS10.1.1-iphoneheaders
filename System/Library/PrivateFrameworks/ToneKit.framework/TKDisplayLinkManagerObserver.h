/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TKDisplayLinkManagerObserver : NSObject {

	/*^block*/id _block;
	unsigned long long _frameInterval;
	unsigned long long _displayDidRefreshCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)displayDidRefresh:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 frameInterval:(unsigned long long)arg2 ;
@end


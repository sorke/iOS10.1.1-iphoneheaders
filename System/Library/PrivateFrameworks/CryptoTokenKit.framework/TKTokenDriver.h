/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDriverDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSDictionary;

@interface TKTokenDriver : NSObject {

	id<TKTokenDriverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tokens;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableDictionary * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (readonly) NSString * classID; 
@property (readonly) NSDictionary * extensionAttributes; 
@property (__weak) id<TKTokenDriverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<TKTokenDriverDelegate>)arg1 ;
-(id<TKTokenDriverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)tokens;
-(void)setTokens:(NSMutableDictionary *)arg1 ;
-(id)tokenIDForInstanceID:(id)arg1 ;
-(NSDictionary *)extensionAttributes;
-(NSString *)classID;
-(void)getTokenEndpointWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)releaseTokenWithTokenID:(id)arg1 ;
-(void)removeTokenEndpoint:(id)arg1 ;
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateToken:(id)arg1 ;
@end


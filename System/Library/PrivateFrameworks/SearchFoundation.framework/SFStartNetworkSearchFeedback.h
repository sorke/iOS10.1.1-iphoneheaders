/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)endpoint;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
@end

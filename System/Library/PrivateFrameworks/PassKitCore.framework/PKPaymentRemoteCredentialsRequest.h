/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {

	BOOL _includeMetadata;
	long long _credentialType;

}

@property (assign,nonatomic) BOOL includeMetadata;                  //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) long long credentialType;              //@synthesize credentialType=_credentialType - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 ;
-(BOOL)includeMetadata;
-(long long)credentialType;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(void)setCredentialType:(long long)arg1 ;
@end


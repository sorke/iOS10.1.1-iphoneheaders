/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class FCWebArchiveSource, NSString, FCInterestToken;

@interface FCWebArchiveFetchOperation : FCFetchOperation {

	FCWebArchiveSource* _webArchiveSource;
	NSString* _key;
	FCInterestToken* _holdToken;
	FCInterestToken* _fetchToken;

}
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithWebArchiveSource:(id)arg1 key:(id)arg2 ;
@end


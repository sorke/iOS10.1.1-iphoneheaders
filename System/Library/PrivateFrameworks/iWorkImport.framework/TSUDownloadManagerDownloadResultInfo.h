/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TSUDownloadManagerDownloadResultInfo : NSObject {

	BOOL _success;
	NSError* _error;

}

@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)init;
-(NSError *)error;
-(BOOL)success;
@end

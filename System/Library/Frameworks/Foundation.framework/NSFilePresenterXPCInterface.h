/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
@required
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(oneway void)reacquireFromReadingClaimForID:(id)arg1;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)observeChangeWithSubitemURL:(id)arg1;
-(oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
-(oneway void)observeDisconnection;
-(oneway void)observeReconnection;
-(oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;
-(oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;
-(oneway void)updateLastEventID:(unsigned long long)arg1;
-(oneway void)logSuspensionWarning;

@end

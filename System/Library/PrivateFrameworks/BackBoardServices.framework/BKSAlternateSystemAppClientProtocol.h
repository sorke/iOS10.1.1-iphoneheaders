/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAlternateSystemAppClientProtocol <NSObject>
@required
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithReason:(unsigned long long)arg2;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;

@end


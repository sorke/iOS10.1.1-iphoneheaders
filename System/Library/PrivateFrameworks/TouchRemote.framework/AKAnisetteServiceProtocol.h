/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteServiceProtocol
@required
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTSyncServiceClientProtocol <NSObject>
@optional
-(void)syncService:(id)arg1 connectionStateDidChange:(long long)arg2;
-(void)syncService:(id)arg1 deviceSetDidChange:(id)arg2;

@required
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2;

@end

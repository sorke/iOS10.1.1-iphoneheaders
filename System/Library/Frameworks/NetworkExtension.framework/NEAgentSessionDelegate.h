/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEAgentSessionDelegate
@required
-(id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
-(void)handleCancel;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BaseListener.h>
#import <libobjc.A.dylib/ASDRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, ISOperationQueue, NSString;

@interface RequestListener : BaseListener <ASDRequest> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _operationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeConnection:(id)arg1 ;
-(Class)_operationClassForRequestType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)startRequestType:(unsigned long long)arg1 withOptions:(id)arg2 ;
@end


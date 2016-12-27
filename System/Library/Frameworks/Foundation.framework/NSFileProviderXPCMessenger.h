/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderXPCInterface.h>

@protocol NSFileProvider, OS_dispatch_queue;
@class NSObject, NSFileProviderProxy, NSString;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {

	id<NSFileProvider> _fileProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileProviderProxy* _fileProviderProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)checkInProviderWithReply:(/*^block*/id)arg1 ;
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2 ;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 url:(id)arg4 newURL:(id)arg5 ;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFileProvider:(id)arg1 queue:(id)arg2 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithFileProviderProxy:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIApplicationController.h>
#import <libobjc.A.dylib/SKUIModalDocumentDataSource.h>
#import <libobjc.A.dylib/SKUIModalDocumentDelegate.h>
#import <libobjc.A.dylib/SSVDirectUploadObserver.h>

@class SSVDirectUploadQueue, NSString;

@interface MusicApplicationController : SKUIApplicationController <SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SSVDirectUploadObserver> {

	SSVDirectUploadQueue* _uploadQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)activeDocument;
-(void)loadApplicationWithOptions:(id)arg1 ;
-(Class)_JSITunesStoreClass;
-(BOOL)_sendNativeBackButtonMetricEvents;
-(BOOL)modalDocumentController:(id)arg1 willPushDocument:(id)arg2 options:(id)arg3 ;
-(id)modalDocumentController:(id)arg1 alertControllerForDocument:(id)arg2 withDismissObserverBlock:(/*^block*/id)arg3 options:(id)arg4 ;
-(void)uploadQueue:(id)arg1 uploadsDidChange:(id)arg2 ;
@end


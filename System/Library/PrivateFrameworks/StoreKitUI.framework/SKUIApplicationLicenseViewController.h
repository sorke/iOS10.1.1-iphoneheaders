/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIApplicationLicensePage, SSVLoadURLOperation, NSURL, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController {

	SKUIApplicationLicensePage* _licensePage;
	SSVLoadURLOperation* _loadOperation;
	NSURL* _url;
	UIWebView* _webView;

}
-(void)reloadData;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithLicenseAgreementURL:(id)arg1 ;
-(void)_displayPage:(id)arg1 error:(id)arg2 ;
-(id)initWithLicenseAgreementPage:(id)arg1 ;
@end

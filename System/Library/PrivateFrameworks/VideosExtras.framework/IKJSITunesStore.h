/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol IKJSITunesStore <JSExport>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@required
-(id)eligibilityForService:(id)arg1;
-(NSString *)userAgent;
-(NSString *)storefront;
-(void)setStorefront:(id)arg1;
-(void)setCookie:(id)arg1;
-(id)cookie;
-(void)clearCookies;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)flushUnreportedEvents;
-(void)getServiceEligibility:(id)arg1 :(id)arg2;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1;
-(NSDictionary *)accountInfo;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;
-(BOOL)isManagedAppleID;
-(NSString *)DSID;

@end


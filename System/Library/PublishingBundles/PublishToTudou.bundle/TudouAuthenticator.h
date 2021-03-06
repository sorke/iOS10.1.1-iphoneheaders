/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PublishingBundles/PublishToTudou.bundle/PublishToTudou
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PublishToTudou/PublishToTudou-Structs.h>
#import <VideoUpload/VUAuthenticator.h>

@class NSData;

@interface TudouAuthenticator : VUAuthenticator {

	NSData* _base64AuthData;

}
+(id)sharedAuthenticator;
-(CFDictionaryRef)_createKeychainAttributes;
-(id)_authURL;
-(void)_clearStoredCredentials;
-(void)_storeCredentials;
-(void)addAuthenticationHeaderToRequest:(id)arg1 ;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
@end


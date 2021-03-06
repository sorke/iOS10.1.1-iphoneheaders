/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>

@protocol UNRemoteNotificationRegistrarDelegate;
@class NSString;

@interface UNRemoteNotificationRegistrar : NSObject <UNUserNotificationServiceConnectionObserver> {

	NSString* _bundleIdentifier;
	id<UNRemoteNotificationRegistrarDelegate> _delegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<UNRemoteNotificationRegistrarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentRegistrar;
-(id)init;
-(void)setDelegate:(id<UNRemoteNotificationRegistrarDelegate>)arg1 ;
-(void)dealloc;
-(id<UNRemoteNotificationRegistrarDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)requestTokenForRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAllowsRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateTokenForRemoteNotifications;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end


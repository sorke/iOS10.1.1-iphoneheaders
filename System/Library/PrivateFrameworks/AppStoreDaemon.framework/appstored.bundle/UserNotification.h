/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class NSDictionary;

@interface UserNotification : NSObject {

	/*^block*/id _completionBlock;
	BOOL _isCanceled;
	NSDictionary* _notificationDictionary;
	unsigned long long _notificationOptions;
	CFUserNotificationRef _userNotification;

}

@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                     //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,readonly) CFUserNotificationRef userNotification; 
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateWithDictionary:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)waitForResponse;
-(void)cancel;
-(void)show;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCanceled;
-(CFUserNotificationRef)userNotification;
@end


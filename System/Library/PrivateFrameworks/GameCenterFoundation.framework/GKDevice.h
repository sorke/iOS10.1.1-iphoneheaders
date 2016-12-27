/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKLockStatusObserver;
@class NSString, GKEventEmitter;

@interface GKDevice : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _gameKitVersion;
	BOOL _gameKitAvailable;
	GKEventEmitter*<GKLockStatusObserver> _emitter;

}

@property (nonatomic,retain) GKEventEmitter*<GKLockStatusObserver> emitter;                  //@synthesize emitter=_emitter - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,readonly) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * gameKitVersion;                                    //@synthesize gameKitVersion=_gameKitVersion - In the implementation block
@property (getter=isGameKitAvailable,nonatomic,readonly) BOOL gameKitAvailable;              //@synthesize gameKitAvailable=_gameKitAvailable - In the implementation block
+(id)currentDevice;
-(id)init;
-(void)dealloc;
-(NSString *)buildVersion;
-(id)userAgent;
-(NSString *)osVersion;
-(NSString *)udid;
-(void)_initPlatform;
-(void)setEmitter:(GKEventEmitter*<GKLockStatusObserver>)arg1 ;
-(void)beginObservingKeyBagStatusWithCallback:(/*function pointer*/void*)arg1 ;
-(id)_platformUDID;
-(void)stopObservingKeyBagStatus;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(id)processNameHeader;
-(NSString *)gameKitVersion;
-(id)storeUserAgent;
-(id)protocolVersionHeader;
-(id)buildVersionHeader;
-(void)addLockStatusObserver:(id)arg1 ;
-(void)removeLockStatusObserver:(id)arg1 ;
-(BOOL)isGameKitAvailable;
-(GKEventEmitter*<GKLockStatusObserver>)emitter;
-(BOOL)isDevelopmentDevice;
-(BOOL)isFocusDevice;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
@end

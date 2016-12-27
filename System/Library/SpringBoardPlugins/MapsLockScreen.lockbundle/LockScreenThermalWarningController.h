/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ThermalAlertItem, NSTimer;

@interface LockScreenThermalWarningController : NSObject {

	BOOL _enabled;
	BOOL _screenWasForcedLocked;
	ThermalAlertItem* _alert;
	BOOL _locking;
	NSTimer* _idleTimer;
	NSTimer* _relockTimer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)lockUnconditionally;
-(void)applicationWillActivate:(id)arg1 ;
-(void)startRelockTimer;
-(void)relockIfAppropriate;
-(void)clearRelockTimer;
-(void)didReceiveEvent;
-(void)checkThermalLevel;
-(void)startIdleTimer;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)lock;
-(void)clearIdleTimer;
@end

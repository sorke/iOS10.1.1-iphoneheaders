/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismPlugins/TouchID_MechTouchId.bundle/TouchID_MechTouchId
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LABiometricClient
@required
-(void)biometryLost;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 lockoutError:(id)arg3;
-(void)touchIdButtonPressed:(BOOL)arg1;
-(void)statusMessage:(int)arg1;

@end


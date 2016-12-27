/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismPlugins/MechPasscode.bundle/MechPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismACM.h>

@interface MechanismPassphrase : MechanismACM {

	unsigned _purpose;

}

@property (nonatomic,readonly) unsigned purpose;              //@synthesize purpose=_purpose - In the implementation block
-(id)initWithAcmContextRecord:(id)arg1 ;
-(void)enterPassphrase:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned)purpose;
-(id)initWithParams:(id)arg1 ;
-(void)setCredential:(id)arg1 credentialType:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)additionalControllerInternalInfo;
@end

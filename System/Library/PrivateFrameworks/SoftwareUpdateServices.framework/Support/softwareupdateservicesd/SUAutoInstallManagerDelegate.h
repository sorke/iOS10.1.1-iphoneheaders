/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUAutoInstallManagerDelegate <NSObject>
@required
-(void)autoInstallManager:(id)arg1 operationWasConsented:(id)arg2;
-(void)autoInstallManager:(id)arg1 didCancelOperation:(id)arg2;
-(void)autoInstallManager:(id)arg1 didExpireOperation:(id)arg2;
-(void)autoInstallManager:(id)arg1 isReadyToInstall:(id)arg2;

@end


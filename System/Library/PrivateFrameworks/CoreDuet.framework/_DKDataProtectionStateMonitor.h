/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKDataProtectionMaster, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {

	_DKDataProtectionMaster* _master;
	NSUUID* _handlerUUID;
	/*^block*/id _changeHandler;

}

@property (copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
@end

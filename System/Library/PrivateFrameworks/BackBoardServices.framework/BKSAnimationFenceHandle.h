/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying> {

	BSMachPortSendRight* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	BOOL _notObservable;
	int _invalidated;

}

@property (nonatomic,retain,readonly) BSMachPortSendRight * _caFence;                     //@synthesize caFence=_caFence - In the implementation block
@property (nonatomic,retain,readonly) BSMachPortSendRight * preFenceTrigger;              //@synthesize preFenceTrigger=_preFenceTrigger - In the implementation block
@property (getter=isUsable,nonatomic,readonly) BOOL usable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_xpcClient;
+(id)newSystemFenceHandle;
+(BOOL)supportsSecureCoding;
+(id)newHandleWithCAPort:(unsigned)arg1 ;
-(BOOL)isUsable;
-(BSMachPortSendRight *)_caFence;
-(id)_initWithCAFence:(id)arg1 preFence:(id)arg2 preFenceTrigger:(id)arg3 notObservable:(BOOL)arg4 ;
-(BSMachPortSendRight *)preFenceTrigger;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)CAPort;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

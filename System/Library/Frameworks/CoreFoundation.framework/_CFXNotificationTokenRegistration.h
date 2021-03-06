/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase {

	unsigned long long _token;
	unsigned long long _options;
	/*^block*/id _handler;
	BOOL _registered;

}

@property (retain) id queue; 
@property (readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (copy,readonly) id handler; 
@property (getter=isRegistered,readonly) BOOL registered;              //@synthesize registered=_registered - In the implementation block
@property (readonly) CFStringRef name; 
@property (readonly) void* object; 
@property (readonly) void* observer; 
+(const SCD_Struct_CF1*)keyCallbacks;
+(id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(/*^block*/id)arg7 ;
+(id)find:(unsigned long long)arg1 ;
+(void)remove:(unsigned long long)arg1 ;
-(id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_removeFromParent;
-(/*^block*/id)copyHandler;
-(void)addToObserver:(id)arg1 ;
-(BOOL)isRegistered;
-(void)dealloc;
-(CFStringRef)name;
-(void*)key;
-(void)invalidate;
-(void*)object;
-(unsigned long long)options;
-(id)handler;
-(void)_invalidate;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(unsigned long long)token;
-(void*)observer;
-(void)removeFromParent;
@end


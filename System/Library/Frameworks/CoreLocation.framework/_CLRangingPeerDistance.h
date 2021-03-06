/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {

	id _internal;
	BOOL _initiator;

}

@property (nonatomic,copy,readonly) _CLRangingPeer * peer; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSNumber * distanceMeters; 
@property (nonatomic,copy,readonly) NSNumber * accuracyMeters; 
@property (getter=isInitiator,nonatomic,readonly) BOOL initiator;              //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,readonly) BOOL shouldUnlock; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)timestamp;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6 ;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 ;
-(id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 ;
-(NSNumber *)distanceMeters;
-(NSNumber *)accuracyMeters;
-(BOOL)shouldUnlock;
-(BOOL)isInitiator;
-(BOOL)initiator;
-(_CLRangingPeer *)peer;
@end


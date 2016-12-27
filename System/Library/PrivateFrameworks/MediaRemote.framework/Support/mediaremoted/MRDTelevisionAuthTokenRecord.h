/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDate;

@interface MRDTelevisionAuthTokenRecord : NSObject <NSMutableCopying> {

	NSString* _deviceID;
	NSString* _token;
	NSDate* _dateCreated;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSDate * dateCreated;                 //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)token;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSDate *)dateCreated;
-(NSString *)deviceID;
@end

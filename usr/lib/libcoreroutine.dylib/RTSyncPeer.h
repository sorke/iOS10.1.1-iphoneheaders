/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTSyncPeer : NSObject <NSCopying> {

	BOOL _defaultPairedDevice;
	BOOL _active;
	BOOL _nearby;
	BOOL _connected;
	NSString* _deviceIdentifier;
	NSString* _modelIdentifier;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _deviceName;
	NSString* _service;
	unsigned long long _pairingProtocolVersion;
	unsigned long long _minCompatibilityVersion;
	unsigned long long _maxCompatibilityVersion;

}

@property (nonatomic,retain) NSString * deviceIdentifier;                             //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * modelIdentifier;                              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,retain) NSString * productName;                                  //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                               //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL defaultPairedDevice;                                //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) unsigned long long pairingProtocolVersion;               //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long minCompatibilityVersion;              //@synthesize minCompatibilityVersion=_minCompatibilityVersion - In the implementation block
@property (assign,nonatomic) unsigned long long maxCompatibilityVersion;              //@synthesize maxCompatibilityVersion=_maxCompatibilityVersion - In the implementation block
@property (assign,nonatomic) BOOL nearby;                                             //@synthesize nearby=_nearby - In the implementation block
@property (assign,nonatomic) BOOL connected;                                          //@synthesize connected=_connected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)modelIdentifier;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)nearby;
-(void)setNearby:(BOOL)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(NSString *)deviceName;
-(id)initWithIDSDevice:(id)arg1 ;
-(NSString *)productVersion;
-(id)initWithDeviceIdentifier:(id)arg1 modelIdentifier:(id)arg2 productName:(id)arg3 productVersion:(id)arg4 deviceName:(id)arg5 service:(id)arg6 defaultPairedDevice:(BOOL)arg7 active:(BOOL)arg8 pairingProtocolVersion:(unsigned long long)arg9 minCompatibilityVersion:(unsigned long long)arg10 maxCompatibilityVersion:(unsigned long long)arg11 nearby:(BOOL)arg12 connected:(BOOL)arg13 ;
-(BOOL)isEqualToSyncPeer:(id)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(BOOL)defaultPairedDevice;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(void)setPairingProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)minCompatibilityVersion;
-(void)setMinCompatibilityVersion:(unsigned long long)arg1 ;
-(unsigned long long)maxCompatibilityVersion;
-(void)setMaxCompatibilityVersion:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class NSMutableArray, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, PLEntry, NSString, NSDictionary, NSDate;

@interface PLAudioAgent : PLAgent {

	BOOL _headsetIsPlayingAudio;
	BOOL _speakerIsPlayingAudio;
	int _accessoryPowerState;
	NSMutableArray* _nsOutputNotifications;
	NSMutableArray* _nsRoutingNotifications;
	PLEntryNotificationOperatorComposition* _accessoryPowerCallback;
	PLXPCListenerOperatorComposition* _audioAppXPCListener;
	PLXPCListenerOperatorComposition* _screenMirroringXPCListener;
	PLXPCListenerOperatorComposition* _speakerAmpXPCListener;
	PLEntry* _entryRoutingOld;
	NSString* _audioHardware;
	NSDictionary* _audioPowerModel;
	NSDate* _lastAudioStateChangeDate;

}

@property (assign) int accessoryPowerState;                                                      //@synthesize accessoryPowerState=_accessoryPowerState - In the implementation block
@property (readonly) NSMutableArray * nsOutputNotifications;                                     //@synthesize nsOutputNotifications=_nsOutputNotifications - In the implementation block
@property (readonly) NSMutableArray * nsRoutingNotifications;                                    //@synthesize nsRoutingNotifications=_nsRoutingNotifications - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * accessoryPowerCallback;              //@synthesize accessoryPowerCallback=_accessoryPowerCallback - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * audioAppXPCListener;                       //@synthesize audioAppXPCListener=_audioAppXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * screenMirroringXPCListener;                //@synthesize screenMirroringXPCListener=_screenMirroringXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * speakerAmpXPCListener;                     //@synthesize speakerAmpXPCListener=_speakerAmpXPCListener - In the implementation block
@property (retain) PLEntry * entryRoutingOld;                                                    //@synthesize entryRoutingOld=_entryRoutingOld - In the implementation block
@property (assign) BOOL headsetIsPlayingAudio;                                                   //@synthesize headsetIsPlayingAudio=_headsetIsPlayingAudio - In the implementation block
@property (assign) BOOL speakerIsPlayingAudio;                                                   //@synthesize speakerIsPlayingAudio=_speakerIsPlayingAudio - In the implementation block
@property (readonly) NSString * audioHardware;                                                   //@synthesize audioHardware=_audioHardware - In the implementation block
@property (readonly) NSDictionary * audioPowerModel;                                             //@synthesize audioPowerModel=_audioPowerModel - In the implementation block
@property (retain) NSDate * lastAudioStateChangeDate;                                            //@synthesize lastAudioStateChangeDate=_lastAudioStateChangeDate - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAudioApp;
+(id)entryEventPointDefinitionSpeakerAmp;
+(id)entryEventForwardDefinitionOutput;
+(id)entryEventForwardDefinitionRouting;
+(id)entryEventForwardDefinitionNowPlaying;
-(id)init;
-(BOOL)active;
-(id)volume;
-(void)log;
-(BOOL)muted;
-(id)buildCallBack:(id)arg1 withGroup:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)initOperatorDependancies;
-(void)setupAVSystemController;
-(NSMutableArray *)nsOutputNotifications;
-(void)logEventForwardOutput;
-(void)logEventForwardRouting;
-(id)nowPlayingAppBundleID;
-(id)returnVolumeOrOutPutCategory:(int)arg1 ;
-(void)handleLightningStatusCallback:(id)arg1 ;
-(void)setAccessoryPowerCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(NSString *)audioHardware;
-(void)logEventPointAudioApp:(id)arg1 ;
-(void)setAudioAppXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setScreenMirroringXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointSpeakerAmp:(id)arg1 ;
-(void)setSpeakerAmpXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setAccessoryPowerState:(int)arg1 ;
-(void)createAudioAccountingEvents:(id)arg1 ;
-(void)createAirPlayAccountingEvents:(id)arg1 ;
-(void)createCarPlayAccountingEvents:(id)arg1 ;
-(void)createBluetoothAccountingEvents:(id)arg1 ;
-(void)modelAudioPowerSpeaker:(id)arg1 ;
-(void)modelAudioPower;
-(int)nowPlayingAppPID;
-(id)activeRoute;
-(id)outputCategory;
-(BOOL)headphonesConnected;
-(BOOL)headsetHasInput;
-(PLEntry *)entryRoutingOld;
-(void)setEntryRoutingOld:(PLEntry *)arg1 ;
-(BOOL)speakerIsPlayingAudio;
-(BOOL)headsetIsPlayingAudio;
-(void)setSpeakerIsPlayingAudio:(BOOL)arg1 ;
-(void)modelAudioPowerCodec:(id)arg1 ;
-(void)setHeadsetIsPlayingAudio:(BOOL)arg1 ;
-(double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2 ;
-(NSDictionary *)audioPowerModel;
-(NSDate *)lastAudioStateChangeDate;
-(double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg1 ;
-(int)accessoryPowerState;
-(double)modelAudioPowerWithVolume:(double)arg1 ;
-(NSMutableArray *)nsRoutingNotifications;
-(PLEntryNotificationOperatorComposition *)accessoryPowerCallback;
-(PLXPCListenerOperatorComposition *)audioAppXPCListener;
-(PLXPCListenerOperatorComposition *)screenMirroringXPCListener;
-(PLXPCListenerOperatorComposition *)speakerAmpXPCListener;
-(void)setLastAudioStateChangeDate:(NSDate *)arg1 ;
-(void)handleNowPlayingApplicationIsPlayingDidChange;
@end


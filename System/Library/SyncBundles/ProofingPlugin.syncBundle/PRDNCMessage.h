/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRDNCSession, NSString;

@interface PRDNCMessage : NSObject {

	PRDNCSession* _receivingConnection;
	NSString* _name;
	NSString* _param;

}

@property (nonatomic,readonly) PRDNCSession * receivingConnection;              //@synthesize receivingConnection=_receivingConnection - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * param;                                  //@synthesize param=_param - In the implementation block
@property (assign,nonatomic) BOOL paramAsBool; 
@property (nonatomic,readonly) NSString * dncNotificationName; 
+(id)componentsForFullNotificationName:(id)arg1 ;
+(id)fullNotificationNameForBaseName:(id)arg1 param:(id)arg2 ;
-(NSString *)dncNotificationName;
-(PRDNCSession *)receivingConnection;
-(void)setParam:(NSString *)arg1 ;
-(void)sendACK;
-(void)sendStillAlive;
-(id)initWithReceivingConnection:(id)arg1 name:(id)arg2 param:(id)arg3 ;
-(BOOL)paramAsBool;
-(void)setParamAsBool:(BOOL)arg1 ;
-(void)sendBoolReply:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)param;
-(void)sendReply:(id)arg1 ;
@end

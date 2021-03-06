/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * className; 
@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (nonatomic,copy) NSString * objectId; 
@property (assign,nonatomic) int size; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * classPrototype; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * preview; 
-(int)size;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)subtype;
-(RWIProtocolJSONObject *)value;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)className;
-(NSString *)stringRepresentation;
-(void)setClassName:(NSString *)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
@end


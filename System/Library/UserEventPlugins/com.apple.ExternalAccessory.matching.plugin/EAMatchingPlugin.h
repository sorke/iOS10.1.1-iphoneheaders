/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UserEventPlugins/com.apple.ExternalAccessory.matching.plugin/com.apple.ExternalAccessory.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.ExternalAccessory.matching/com.apple.ExternalAccessory.matching-Structs.h>
@class NSMutableDictionary;

@interface EAMatchingPlugin : NSObject {

	void* _eventModule;
	void* _eventProvider;
	CFUUIDRef _factoryID;
	NSMutableDictionary* _accessoryConnectClients;
	NSMutableDictionary* _accessoryDisconnectClients;

}
-(void)accessoryDidConnect:(id)arg1 ;
-(void)addClient:(unsigned long long)arg1 eventMatchDict:(id)arg2 ;
-(void)accessoryChange:(id)arg1 type:(int)arg2 ;
-(void)sendAccessoryNotification:(id)arg1 client:(unsigned long long)arg2 notificationTypeKey:(const char*)arg3 ;
-(void)addClient:(unsigned long long)arg1 protocol:(id)arg2 clientDict:(id)arg3 ;
-(void)removeClient:(unsigned long long)arg1 clientDict:(id)arg2 ;
-(void)dealloc;
-(void)removeClient:(unsigned long long)arg1 ;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(id)initWithModule:(void*)arg1 ;
@end


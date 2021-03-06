/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, NSUUID, NSString;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSArray* _cache;
	BOOL _updating;
	int _pendingUpdates;
	unsigned long long _keyboardActivityState;
	long long _recentClientCount;
	NSUUID* _userDictionaryUUID;

}

@property (nonatomic,copy) NSUUID * userDictionaryUUID;              //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(double)decrementClientDelay;
-(id)init;
-(void)dealloc;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)resetCache;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)loadPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)managedKeyboardSettingsDidChange:(id)arg1 ;
-(void)incrementRecentClientCount;
-(void)decrementRecentClientCountAfterDelay;
-(void)handleIdleTimeout;
-(void)updateCache;
@end


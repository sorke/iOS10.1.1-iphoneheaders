/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCServerBag : NSObject {

	opaque_pthread_cond_t isLoadedCondition;
	opaque_pthread_mutex_t isLoadedMutex;
	BOOL isLoaded;
	id observer;

}
+(id)sharedInstance;
+(void)pullStoreBagKeys;
+(BOOL)verifyRequiredKeys:(id*)arg1 ;
+(BOOL)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(BOOL)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

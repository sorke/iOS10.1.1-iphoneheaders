/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {

	IMMultiDict* _reusablePluginViewsByClassName;
	NSMutableDictionary* _pluginViewToReuseDelegateMap;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)resetState;
-(void)enqueuePluginViewForReuse:(id)arg1 ;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg1 ;
-(void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2 ;
-(id)_pointerKeyForPluginView:(id)arg1 ;
-(id)dequeuePluginViewForBalloonController:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>
#import <libobjc.A.dylib/SBBulletinAlertHandler.h>

@class BBBulletin, NSString;

@interface SMSPluginManager : NSObject <SBPluginBundleController, SBBulletinAlertHandler> {

	BOOL _displayExtraAlerts;
	BBBulletin* _lastBulletin;

}

@property (assign,nonatomic) BOOL displayExtraAlerts;               //@synthesize displayExtraAlerts=_displayExtraAlerts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedInstance;
+(BOOL)carrierSMSReceiveOnlyEnabled;
-(id)init;
-(void)dealloc;
-(void)volumeChanged:(id)arg1 ;
-(void)applicationLaunched:(id)arg1 ;
-(void)setDisplayExtraAlerts:(BOOL)arg1 ;
-(void)postAlertForMessageWithDictionary:(id)arg1 ;
-(BOOL)bindBulletin:(id)arg1 forRegistry:(id)arg2 ;
-(void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3 ;
-(BOOL)displayExtraAlerts;
@end


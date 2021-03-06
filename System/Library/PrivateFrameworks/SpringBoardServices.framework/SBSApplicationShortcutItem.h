/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SBSApplicationShortcutIcon, NSData, UIView, NSDictionary;

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	SBSApplicationShortcutIcon* _icon;
	unsigned long long _activationMode;
	NSString* _bundleIdentifierToLaunch;
	NSData* _userInfoData;

}

@property (nonatomic,retain) UIView * badgeView; 
@property (nonatomic,retain) NSData * userInfoData;                          //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) SBSApplicationShortcutIcon * icon;                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifierToLaunch;              //@synthesize bundleIdentifierToLaunch=_bundleIdentifierToLaunch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortcutItemWithGKQuickAction:(id)arg1 ;
+(id)staticShortcutItemWithDictionary:(id)arg1 localizationHandler:(/*^block*/id)arg2 ;
-(BOOL)_gkIsGameCenterQuickAction;
-(UIView *)badgeView;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setBundleIdentifierToLaunch:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)activationMode;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIcon:(SBSApplicationShortcutIcon *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(SBSApplicationShortcutIcon *)icon;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSData *)userInfoData;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
-(NSString *)bundleIdentifierToLaunch;
@end


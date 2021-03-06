/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic,copy) NSString * pane; 
@property (nonatomic,copy) NSString * tag; 
+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setPane:(NSString *)arg1 ;
-(NSString *)pane;
@end


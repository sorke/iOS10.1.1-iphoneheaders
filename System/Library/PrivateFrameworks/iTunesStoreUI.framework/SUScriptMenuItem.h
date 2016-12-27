/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)userInfo;
-(NSString *)title;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)attributeKeys;
-(void)_sendDidChange;
-(id)scriptAttributeKeys;
-(id)_className;
@end

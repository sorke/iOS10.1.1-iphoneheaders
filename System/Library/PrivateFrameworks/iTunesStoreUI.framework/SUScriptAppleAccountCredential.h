/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject {

	ACAccountCredential* _credential;

}

@property (readonly) NSString * oauthToken; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(NSString *)oauthToken;
-(id)initWithACAccountCredential:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString;

@interface VTUIASRGrammars : NSObject <NSURLSessionDelegate> {

	NSDictionary* _grammar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGrammars;
-(id)init;
-(id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLMEforLocale:(id)arg1 ;
-(id)createGrammars;
-(id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3 ;
-(id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2 ;
@end


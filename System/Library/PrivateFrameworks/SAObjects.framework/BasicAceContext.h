/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AceContext.h>

@class NSMutableDictionary, NSString;

@interface BasicAceContext : NSObject <AceContext> {

	NSMutableDictionary* _groupMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBasicAceContext;
-(id)init;
-(void)dealloc;
-(Class)classWithClassName:(id)arg1 group:(id)arg2 ;
-(id)aceObjectWithDictionary:(id)arg1 ;
-(void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
@end


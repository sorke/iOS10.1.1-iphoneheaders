/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLWarningRecorder.h>

@class NSMutableDictionary, NSString;

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder> {

	NSMutableDictionary* _warnings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)warnings;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(id)valueForWarning:(id)arg1 ;
-(BOOL)hasWarnings;
@end


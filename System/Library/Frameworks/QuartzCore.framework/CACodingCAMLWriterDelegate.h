/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMLWriterDelegate.h>

@class NSString;

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {

	NSString* _resource_dir;
	int _serial;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)CAMLWriter:(id)arg1 typeForObject:(id)arg2 ;
-(id)CAMLWriter:(id)arg1 URLForResource:(id)arg2 ;
-(id)initWithResourceDir:(id)arg1 ;
@end

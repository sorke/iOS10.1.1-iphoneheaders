/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {

	TSSStyle* mStyle;
	int mProperty;
	TSKAccessController* mAccessController;

}
-(id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3 ;
-(void)warm;
-(void)main;
@end

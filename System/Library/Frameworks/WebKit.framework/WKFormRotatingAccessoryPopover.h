/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WKRotatingPopover.h>
#import <libobjc.A.dylib/WKRotatingPopoverDelegate.h>

@class WKContentView;

@interface WKFormRotatingAccessoryPopover : WKRotatingPopover <WKRotatingPopoverDelegate> {

	WKContentView* _view;

}
-(id)initWithView:(id)arg1 ;
-(void)accessoryDone;
-(unsigned long long)popoverArrowDirections;
-(void)popoverWasDismissed:(id)arg1 ;
@end

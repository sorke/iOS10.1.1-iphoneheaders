/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSAssertionHandler.h>

@interface TSUAssertionHandler : NSAssertionHandler
+(void)testCaseStarted:(id)arg1 ;
+(void)testCaseStopped:(id)arg1 ;
+(void)installAsNSHandler;
+(id)currentHandler;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
-(void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 ;
@end


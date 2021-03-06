/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerObject : NSObject {

	DDScannerRef _scanner;
	int _type;

}
-(void)dealloc;
-(int)type;
-(void)reset;
-(id)initWithType:(int)arg1 ;
-(long long)scanString:(id)arg1 ;
-(id)ddResultsWithOptions:(long long)arg1 ;
-(id)resultsWithOptions:(long long)arg1 ;
@end


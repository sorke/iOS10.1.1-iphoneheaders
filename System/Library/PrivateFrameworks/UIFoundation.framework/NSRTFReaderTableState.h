/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTextTable, NSMutableArray;

@interface NSRTFReaderTableState : NSObject {

	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;

}
-(void)dealloc;
@end

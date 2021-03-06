/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDReference;

@interface EMCellMapper : CMMapper {

	EDCellHeader* edCell;
	EDReference* edMergedCellReference;
	int rowNumber;
	int firstColumn;
	int lastColumn;
	int columnSpan;
	BOOL firstCellFlag;
	BOOL spreadLeftFlag;
	double columnWidth;

}
+(BOOL)isCellEmpty:(EDCellHeader*)arg1 ;
-(int)columnSpan;
-(double)columnWidth;
-(id)initWithParent:(id)arg1 ;
-(int)lastColumn;
-(int)firstColumn;
-(void)mapRowColSpansAt:(id)arg1 withState:(id)arg2 ;
-(id)mapHyperlink:(id)arg1 at:(id)arg2 ;
-(id)initWithEDCell:(EDCellHeader*)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 state:(id)arg4 ;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)resetColumnSpan:(int)arg1 ;
-(BOOL)isCellEmpty;
-(void)setFirstCellFlag;
-(BOOL)isFirstCell;
-(BOOL)isCellSpreading:(id)arg1 ;
-(BOOL)isCellMerged;
-(void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(unsigned long long)arg2 nextCell:(EDCellHeader*)arg3 withState:(id)arg4 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(EDCellHeader*)arg4 ;
@end


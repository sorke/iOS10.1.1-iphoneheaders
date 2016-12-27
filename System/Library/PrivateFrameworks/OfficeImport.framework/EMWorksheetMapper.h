/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDWorksheet, CMStyle, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {

	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	long long mMaxPopulatedColumn;
	long long mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;

}
-(void)dealloc;
-(int)width;
-(int)height;
-(BOOL)isVisible;
-(unsigned long long)columnCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
-(id)columnWidthConvertor;
-(double*)rowGrid;
-(double*)columnGrid;
-(long long)maxRowNumber;
-(double)defaultColumnWidth;
-(double)defaultRowHeight;
-(CGSize)preprocessSizeWithState:(id)arg1 ;
-(id)initWithEDWorksheet:(id)arg1 parent:(id)arg2 ;
-(void)countRowsAndColumnsWithState:(id)arg1 ;
-(void)setRowGrid;
-(double)xlColumnWidthToPoints:(double)arg1 ;
-(void)_initWithState:(id)arg1 ;
-(void)readHyperlinksWithState:(id)arg1 ;
-(void)mapTableAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)preprocessDrawableSizeWithState:(id)arg1 ;
-(void)mapColumnInfosAt:(id)arg1 withState:(id)arg2 ;
-(void)mapGridAt:(id)arg1 ;
-(void)mapTableStyleAt:(id)arg1 withState:(id)arg2 ;
@end

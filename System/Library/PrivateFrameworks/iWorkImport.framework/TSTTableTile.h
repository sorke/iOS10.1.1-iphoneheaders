/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSMutableArray, NSArray;

@interface TSTTableTile : TSPObject {

	unsigned char mMaxColumn;
	unsigned short mMaxRow;
	unsigned short mNumCells;
	NSMutableArray* mRowInfos;
	unsigned short mNumRows;
	unsigned char mStorageVersion;

}

@property (nonatomic,readonly) unsigned char maxColumn; 
@property (nonatomic,readonly) unsigned short maxRow; 
@property (nonatomic,readonly) unsigned short numCells; 
@property (nonatomic,readonly) unsigned short numRows; 
@property (nonatomic,readonly) NSArray * rowInfos; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithRows:(id)arg1 context:(id)arg2 ;
-(void)pruneEmptyRows;
-(unsigned char)maxColumn;
-(unsigned short)maxRow;
-(unsigned short)numCells;
-(unsigned short)numRows;
-(NSArray *)rowInfos;
-(void)debugListRows;
-(void)i_upgradeTileRowInfosWithDataStore:(id)arg1 ;
-(void)debugDump;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(void)validate;
@end

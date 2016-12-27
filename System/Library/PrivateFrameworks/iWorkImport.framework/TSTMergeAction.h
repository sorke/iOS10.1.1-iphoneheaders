/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTMergeAction : NSObject <NSCopying> {

	int _type;
	vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >* _uidRanges;
	vector<TSCEFormula, std::__1::allocator<TSCEFormula> >* _mergeFormulas;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _mergeFormulaIndexes;

}

@property (assign,nonatomic) int type;                                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) const vector<TSTCellUIDRange* uidRanges;                      //@synthesize uidRanges=_uidRanges - In the implementation block
@property (assign,nonatomic) const vector<TSCEFormula* mergeFormulas;                      //@synthesize mergeFormulas=_mergeFormulas - In the implementation block
@property (assign,nonatomic) const vector<unsigned long* mergeFormulaIndexes;              //@synthesize mergeFormulaIndexes=_mergeFormulaIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasMergeFormulas; 
+(id)stringForMergeType:(int)arg1 ;
+(TSCEFormula*)p_createFormulaForUIDRange:(TSTCellUIDRange*)arg1 inTable:(id)arg2 ;
+(id)mergeActionForGrowingRange:(const TSTCellUIDRange*)arg1 coveringRange:(const TSTCellUIDRange*)arg2 inTable:(id)arg3 ;
+(TSTCellUIDRange*)cellUIDRangeFromMergeFormula:(const TSCEFormula*)arg1 ;
+(id)mergeActionForRemovingRanges:(const vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >*)arg1 inTable:(id)arg2 ;
+(id)mergeActionForInsertingRange:(const TSTCellUIDRange*)arg1 inTable:(id)arg2 ;
-(void)saveToArchive:(MergeOperationArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const MergeOperationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)enumerateMergeFormulasUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(int)arg1 uidRanges:(const vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> >*)arg2 ;
-(void)addFormulaIndex:(unsigned long long)arg1 ;
-(BOOL)hasMergeFormulas;
-(const vector<TSCEFormula*)mergeFormulas;
-(const vector<TSTCellUIDRange*)uidRanges;
-(const vector<unsigned long*)mergeFormulaIndexes;
-(id)changeDescriptorForTable:(id)arg1 ;
-(id)remapUIDsByColumnMap:(const UUIDMap<TSP::UUIDMap>*)arg1 rowMap:(const UUIDMap<TSP::UUIDMap>*)arg2 ownerMap:(const UUIDMap<TSP::UUIDMap>*)arg3 ;
-(void)setUidRanges:(const vector<TSTCellUIDRange*)arg1 ;
-(void)setMergeFormulas:(const vector<TSCEFormula*)arg1 ;
-(void)setMergeFormulaIndexes:(const vector<unsigned long*)arg1 ;
-(id)initWithType:(int)arg1 uidRange:(const TSTCellUIDRange*)arg2 ;
-(id)shrinkAction;
-(id)actionByExpandingWithAction:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(void)verify;
-(void)addFormula:(const TSCEFormula*)arg1 ;
@end

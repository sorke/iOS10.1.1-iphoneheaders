/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartMediator.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TNChartFormulaStorage, NSMutableArray, TSCEFormulaRewriteSpec, TNMutableChartFormulaStorage, NSCondition, TSUIntToIntDictionary, TSCECalculationEngine, NSString;

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {

	CFUUIDRef mEntityId;
	TNChartFormulaStorage* mFormulaStorage;
	TNChartFormulaStorage* mCleanFormulaStorage;
	NSMutableArray* mFormulasToRewrite;
	NSMutableArray* mFormulasToRecalculate;
	TSCEFormulaRewriteSpec* mInFlightRewriteSpec;
	int mScatterFormat;
	BOOL mIsRegisteredWithCalcEngine;
	BOOL mIsEditing;
	BOOL mEditingHasIsPhantomOverride;
	BOOL mEditingIsPhantomOverride;
	TNChartFormulaStorage* mEditingStorageOverride;
	TNMutableChartFormulaStorage* mEditingAccumulatedFormulas;
	TNMutableChartFormulaStorage* mEditingActiveFormulas;
	NSCondition* mImportUpgradeCondition;
	BOOL mHasBlittedSinceConditionVarSet;
	BOOL mShouldFixAreaFormula;
	TSUIntToIntDictionary* mFormulaIndexToGridIndex;

}

@property (nonatomic,readonly) CFUUIDRef entityID; 
@property (nonatomic,readonly) int scatterFormat; 
@property (nonatomic,readonly) TSCECalculationEngine * calculationEngine; 
@property (nonatomic,readonly) int direction; 
@property (nonatomic,readonly) BOOL labelFormulasAreAllStatic; 
@property (nonatomic,readonly) BOOL seriesLabelFormulasAreAllStatic; 
@property (nonatomic,readonly) BOOL categoryLabelFormulasAreAllStatic; 
@property (assign,nonatomic) BOOL isEditing; 
@property (nonatomic,readonly) BOOL hasBlittedSinceConditionVarSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesThatInvalidateMediator;
+(id)defaultErrorBarFormulaWrapper;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS362)arg2 rewriteSpec:(id)arg3 ;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(BOOL)registerLast;
-(CFUUIDRef)formulaOwnerID;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS745)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS362)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(void)saveToArchive:(ChartMediatorArchive*)arg1 archiver:(id)arg2 ;
-(TSCECalculationEngine *)calculationEngine;
-(void)setFormulaOwnerID:(CFUUIDRef)arg1 ;
-(id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2 ;
-(int)scatterFormat;
-(id)initWithChartInfo:(id)arg1 ;
-(BOOL)isPhantom;
-(void)invalidateAndSynchronizeMediator;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2 ;
-(id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2 ;
-(id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4 ;
-(id)categoryLabelFormulas;
-(id)commandToChangeCategoryLabelFormulas:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2 ;
-(id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg1 ;
-(id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(id)initFromArchive:(const ChartMediatorArchive*)arg1 unarchiver:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(id)ownerUIDMapper;
-(id)formulaStorage;
-(void)repairMissingSeriesLabelsInMap:(id)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ;
-(id)untitledLabelOfType:(unsigned long long)arg1 formulaMap:(id)arg2 existingLabels:(id)arg3 runningIndex:(unsigned long long*)arg4 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(BOOL)arg2 ;
-(id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4 ;
-(BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg1 ;
-(id)p_untitledLabelWithIndex:(unsigned long long)arg1 ;
-(void)p_copyValuesIntoChartModelFromPair:(id)arg1 ;
-(void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2 ;
-(void)synchronizeModelFromFormulaStorage;
-(id)nonDefaultDataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4 ;
-(BOOL)p_isScatterOrBubble;
-(unsigned long long)formulaIndexForSeriesDimension:(id)arg1 ;
-(id)labelFormulasForType:(unsigned long long)arg1 ;
-(id)commandToChangeLabelFormulas:(id)arg1 forType:(unsigned long long)arg2 modelUpdateDataType:(int)arg3 ;
-(unsigned long long)formulaTypeFromDataType:(int)arg1 ;
-(id)p_tstFormulaFromForumulaWrapper:(id)arg1 ;
-(void)p_removeDeletedFormulas:(id)arg1 ;
-(void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1 ;
-(void)p_registerFormulaeWithCalcEngine:(id)arg1 ;
-(void)setFormulaStorage:(id)arg1 doRegistration:(BOOL)arg2 ;
-(void)synchronizeModelFromFormulaStorage:(id)arg1 ;
-(id)referencedEntities;
-(id)rawFormulaStorage;
-(void)p_signalImportUpgradeCondition;
-(void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2 ;
-(void)p_registerHubFormulaWithCalcEngine:(id)arg1 ;
-(BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1 ;
-(void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 ;
-(void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 ;
-(void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg1 ;
-(void)updateForTableIDHistoryWithCalcEngine:(id)arg1 ;
-(void)p_reregister:(BOOL)arg1 withCalculationEngine:(id)arg2 ;
-(id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(unsigned long long)labelIndexForSeriesNameSeriesIndex:(unsigned long long)arg1 ;
-(id)p_formulaWrapperFromTSTFormula:(id)arg1 ;
-(id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned long long*)arg2 ;
-(BOOL)p_labelsAreStaticInMap:(id)arg1 ofType:(unsigned long long)arg2 ;
-(BOOL)p_tableHasRange:(SCD_Struct_TS360*)arg1 withCalcEngine:(id)arg2 ;
-(void)p_disconnectLabelsInMap:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1 ;
-(void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1 ;
-(void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1 ;
-(void)p_repairMissingCategoryLabelsInMap:(id)arg1 ;
-(id)referencedEntitiesInMap:(id)arg1 ;
-(void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2 ;
-(void)setFormulaStorage:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3 ;
-(BOOL)labelFormulasAreAllStatic;
-(BOOL)seriesLabelFormulasAreAllStatic;
-(BOOL)categoryLabelFormulasAreAllStatic;
-(void)setEditingIsPhantomOverride:(BOOL)arg1 ;
-(void)clearEditingIsPhantomOverride;
-(void)setEditingStorageOverride:(id)arg1 ;
-(id)seriesDimensionForFormulaIndex:(unsigned long long)arg1 ;
-(void)p_hackSetCalcEngineLegacyGlobalID;
-(void)repairBadRefsInFormulas:(id)arg1 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2 ;
-(void)setImportUpgradeCondition:(id)arg1 ;
-(id)expandSingleRangeForProposedCategoryLabels:(SCD_Struct_TS360*)arg1 ;
-(BOOL)p_tableHasCell:(SCD_Struct_TS361*)arg1 withCalcEngine:(id)arg2 ;
-(void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1 ;
-(id)dataFormulas;
-(int)formulasDirection;
-(id)rowFormulas;
-(id)columnFormulas;
-(id)customPosFormulas;
-(id)customNegFormulas;
-(id)customPosScatterXFormulas;
-(id)customNegScatterXFormulas;
-(void)localizeFormulaLiteralsWithBundle:(id)arg1 ;
-(BOOL)hasBlittedSinceConditionVarSet;
-(CFUUIDRef)entityID;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(BOOL)isEditing;
@end


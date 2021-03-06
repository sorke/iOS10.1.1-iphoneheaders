/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/DisplayFilterBaseSettingsController.h>
#import <AccessibilitySettings/DisplayFilterPageControllerDelegate.h>

@class NSArray, PSSpecifier, NSMutableDictionary, NSMutableArray, DisplayFilterSettingsPreviewPageViewController, UIPageControl;

@interface DisplayFilterColorSettingsController : DisplayFilterBaseSettingsController <DisplayFilterPageControllerDelegate> {

	BOOL _displayingFilterSelection;
	NSArray* _currentOptionSpecifiers;
	NSArray* _currentFilterSelectionSpecifiers;
	PSSpecifier* _specifierBeforeFilterOptions;
	PSSpecifier* _specifierBeforeSelectionTable;
	NSMutableDictionary* _filterTypeToOptionSpecifiers;
	NSMutableArray* _filterSelectionSpecifiers;
	unsigned long long _displayingOptionsForType;
	DisplayFilterSettingsPreviewPageViewController* _previewPageController;
	UIPageControl* _pageControl;

}

@property (nonatomic,retain) NSArray * currentOptionSpecifiers;                                                   //@synthesize currentOptionSpecifiers=_currentOptionSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * currentFilterSelectionSpecifiers;                                          //@synthesize currentFilterSelectionSpecifiers=_currentFilterSelectionSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifierBeforeFilterOptions;                                          //@synthesize specifierBeforeFilterOptions=_specifierBeforeFilterOptions - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifierBeforeSelectionTable;                                         //@synthesize specifierBeforeSelectionTable=_specifierBeforeSelectionTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterTypeToOptionSpecifiers;                                  //@synthesize filterTypeToOptionSpecifiers=_filterTypeToOptionSpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterSelectionSpecifiers;                                          //@synthesize filterSelectionSpecifiers=_filterSelectionSpecifiers - In the implementation block
@property (assign,nonatomic) unsigned long long displayingOptionsForType;                                         //@synthesize displayingOptionsForType=_displayingOptionsForType - In the implementation block
@property (assign,nonatomic) BOOL displayingFilterSelection;                                                      //@synthesize displayingFilterSelection=_displayingFilterSelection - In the implementation block
@property (nonatomic,retain) DisplayFilterSettingsPreviewPageViewController * previewPageController;              //@synthesize previewPageController=_previewPageController - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                                         //@synthesize pageControl=_pageControl - In the implementation block
-(void)updateSystemFilter;
-(NSMutableArray *)filterSelectionSpecifiers;
-(unsigned long long)filterForCellIdentifier:(id)arg1 ;
-(void)_setupPreviewRegion;
-(PSSpecifier *)specifierBeforeSelectionTable;
-(unsigned long long)displayingOptionsForType;
-(id)_optionSpecifiersForType:(unsigned long long)arg1 ;
-(PSSpecifier *)specifierBeforeFilterOptions;
-(DisplayFilterSettingsPreviewPageViewController *)previewPageController;
-(void)setDisplayingOptionsForType:(unsigned long long)arg1 ;
-(void)_addOptionSpecifier:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)setDisplayingFilterSelection:(BOOL)arg1 ;
-(void)_addFilterSpecifier:(id)arg1 ;
-(void)setGlobalFilterEnabled:(BOOL)arg1 ;
-(void)setCurrentOptionSpecifiers:(NSArray *)arg1 ;
-(void)_updateOptionVisibility;
-(NSArray *)currentOptionSpecifiers;
-(BOOL)displayingFilterSelection;
-(void)setPreviewPageController:(DisplayFilterSettingsPreviewPageViewController *)arg1 ;
-(void)setFilterSelectionSpecifiers:(NSMutableArray *)arg1 ;
-(void)accessibilitySettingsDidChange;
-(void)_updateFilterOptionSpecifiers;
-(void)didSelectDisplayFilterPage:(long long)arg1 ;
-(NSMutableDictionary *)filterTypeToOptionSpecifiers;
-(id)blueCorrectionIntensity:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(id)greenCorrectionIntensity:(id)arg1 ;
-(void)setSpecifierBeforeSelectionTable:(PSSpecifier *)arg1 ;
-(void)setFilterTypeToOptionSpecifiers:(NSMutableDictionary *)arg1 ;
-(unsigned long long)filterCategory;
-(NSArray *)currentFilterSelectionSpecifiers;
-(void)setGreenCorrectionIntensity:(id)arg1 specifier:(id)arg2 ;
-(void)setCurrentFilterSelectionSpecifiers:(NSArray *)arg1 ;
-(void)setBlueCorrectionIntensity:(id)arg1 specifier:(id)arg2 ;
-(void)setSpecifierBeforeFilterOptions:(PSSpecifier *)arg1 ;
-(void)setSingleColorFilterIntensity:(id)arg1 specifier:(id)arg2 ;
-(void)setRedCorrectionIntensity:(id)arg1 specifier:(id)arg2 ;
-(id)singleColorFilterIntensity:(id)arg1 ;
-(void)setSingleColorFilterHue:(id)arg1 specifier:(id)arg2 ;
-(void)_updateFilterSelectionSpecifiers;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(id)redCorrectionIntensity:(id)arg1 ;
-(id)singleColorFilterHue:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIPageControl *)pageControl;
-(void)reloadSpecifiers;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)changePage:(id)arg1 ;
-(double)_headerHeight;
-(id)specifiers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <SpringBoard/BSUIScrollViewDelegate.h>
#import <SpringBoard/SBDashBoardBackgroundStyleTransitioning.h>
#import <SpringBoard/SBDashBoardViewTransitionSource.h>

@protocol SBDashBoardViewDelegate;
@class SBDashBoardBackgroundView, SBPagedScrollView, UIView, UIVisualEffectView, SBDashBoardScrollModifier, SBDashBoardPageControl, SBFLockScreenDateView, UIGestureRecognizer, SBDashBoardWallpaperEffectView, _UILegibilitySettings, NSArray, NSString;

@interface SBDashBoardView : SBAlertView <BSUIScrollViewDelegate, SBDashBoardBackgroundStyleTransitioning, SBDashBoardViewTransitionSource> {

	SBDashBoardBackgroundView* _backgroundView;
	SBPagedScrollView* _scrollView;
	UIView* _dateTimeClippingView;
	UIView* _authIndicator;
	UIView* _slideableContentView;
	UIVisualEffectView* _dateEffectView;
	SCD_Struct_SB31 _transitionContext;
	double _scrollViewStartingXOffset;
	SBDashBoardScrollModifier* _scrollModifier;
	unsigned long long _initialPageIndex;
	BOOL _forceDateViewCentered;
	BOOL _dateViewIsVibrant;
	BOOL _legibilitySettingsOverrideVibrancy;
	BOOL _statusBarLegibilityEnabled;
	UIView* _bottomPage;
	id<SBDashBoardViewDelegate> _delegate;
	UIView* _mainPageView;
	SBDashBoardPageControl* _pageControl;
	SBFLockScreenDateView* _dateView;
	long long _dateViewPageAlignment;
	UIView* _fakeStatusBarView;
	unsigned long long _fakeStatusBarLevel;
	UIGestureRecognizer* _irisGestureRecognizer;
	UIView* _modalPresentationView;
	SBDashBoardWallpaperEffectView* _wallpaperEffectView;
	UIView* _tintingView;
	UIView* _slideUpToAppView;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _targetPageIndexForDraggingEnded;
	CGPoint _dateViewOffset;
	CGPoint _foregroundViewPositionOffset;

}

@property (assign,nonatomic,__weak) id<SBDashBoardViewDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBPagedScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSArray * pageViews; 
@property (nonatomic,retain) UIView * mainPageView;                                                                  //@synthesize mainPageView=_mainPageView - In the implementation block
@property (nonatomic,retain) SBDashBoardPageControl * pageControl;                                                   //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                                                       //@synthesize dateView=_dateView - In the implementation block
@property (assign,nonatomic) CGPoint dateViewOffset;                                                                 //@synthesize dateViewOffset=_dateViewOffset - In the implementation block
@property (assign,nonatomic) long long dateViewPageAlignment;                                                        //@synthesize dateViewPageAlignment=_dateViewPageAlignment - In the implementation block
@property (assign,nonatomic) BOOL forceDateViewCentered;                                                             //@synthesize forceDateViewCentered=_forceDateViewCentered - In the implementation block
@property (assign,nonatomic) BOOL dateViewIsVibrant;                                                                 //@synthesize dateViewIsVibrant=_dateViewIsVibrant - In the implementation block
@property (nonatomic,retain) UIView * fakeStatusBarView;                                                             //@synthesize fakeStatusBarView=_fakeStatusBarView - In the implementation block
@property (assign,nonatomic) unsigned long long fakeStatusBarLevel;                                                  //@synthesize fakeStatusBarLevel=_fakeStatusBarLevel - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * irisGestureRecognizer;                                            //@synthesize irisGestureRecognizer=_irisGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * bottomPage;                                                                    //@synthesize bottomPage=_bottomPage - In the implementation block
@property (nonatomic,readonly) UIView * slideableContentView;                                                        //@synthesize slideableContentView=_slideableContentView - In the implementation block
@property (nonatomic,retain) UIView * modalPresentationView;                                                         //@synthesize modalPresentationView=_modalPresentationView - In the implementation block
@property (nonatomic,retain) SBDashBoardWallpaperEffectView * wallpaperEffectView;                                   //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (nonatomic,retain) UIView * tintingView;                                                                   //@synthesize tintingView=_tintingView - In the implementation block
@property (nonatomic,retain) SBDashBoardBackgroundView * backgroundView;                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * slideUpToAppView;                                                              //@synthesize slideUpToAppView=_slideUpToAppView - In the implementation block
@property (assign,nonatomic) CGPoint foregroundViewPositionOffset;                                                   //@synthesize foregroundViewPositionOffset=_foregroundViewPositionOffset - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                             //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) BOOL legibilitySettingsOverrideVibrancy;                                                //@synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy - In the implementation block
@property (assign,nonatomic) BOOL statusBarLegibilityEnabled;                                                        //@synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long targetPageIndexForDraggingEnded;                                     //@synthesize targetPageIndexForDraggingEnded=_targetPageIndexForDraggingEnded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_SB18 transitionContext; 
-(void)_updateLegibility;
-(NSString *)dashBoardIdentifier;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBDashBoardWallpaperEffectView *)wallpaperEffectView;
-(BOOL)legibilitySettingsOverrideVibrancy;
-(void)setIrisGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setStatusBarLegibilityEnabled:(BOOL)arg1 ;
-(void)setLegibilitySettingsOverrideVibrancy:(BOOL)arg1 ;
-(BOOL)statusBarLegibilityEnabled;
-(unsigned long long)_indexOfMainPage;
-(BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSlideUpToAppView:(UIView *)arg1 ;
-(void)updateUIForAuthenticated:(BOOL)arg1 ;
-(void)setTargetPageIndexForDraggingEnded:(unsigned long long)arg1 ;
-(void)setPageViews:(NSArray *)arg1 ;
-(void)setMainPageView:(UIView *)arg1 ;
-(CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1 ;
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(BOOL)isTransitioningBackgroundStyle;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)setForegroundViewPositionOffset:(CGPoint)arg1 ;
-(void)setDateViewIsVibrant:(BOOL)arg1 ;
-(void)setForceDateViewCentered:(BOOL)arg1 ;
-(void)setDateViewPageAlignment:(long long)arg1 ;
-(void)setDateViewOffset:(CGPoint)arg1 ;
-(void)setFakeStatusBarLevel:(unsigned long long)arg1 ;
-(void)setWallpaperEffectView:(SBDashBoardWallpaperEffectView *)arg1 ;
-(void)setFakeStatusBarView:(UIView *)arg1 ;
-(void)setModalPresentationView:(UIView *)arg1 ;
-(void)setBottomPage:(UIView *)arg1 ;
-(UIView *)fakeStatusBarView;
-(void)_addBackgroundView;
-(void)_addSlideableContentView;
-(void)_addPageControl;
-(void)_addDateTimeContainer;
-(void)_addScrollView;
-(void)_addAuthIndicator;
-(void)_addTintingView;
-(void)_layoutFakeStatusBarView;
-(void)_setupIrisGestureOnScrollView:(BOOL)arg1 ;
-(void)_layoutBottomPage;
-(void)_setDateView:(id)arg1 forTesting:(BOOL)arg2 ;
-(CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double*)arg3 ;
-(void)_layoutFullScreenViews;
-(void)_layoutDateTimeViewClippingView;
-(void)_layoutPageControl;
-(void)_layoutAuthIndicator;
-(void)_layoutWallpaperEffectView;
-(void)_layoutTintingView;
-(SCD_Struct_SB18)_completedTransitionContextForPreviousTransitionContext:(SCD_Struct_SB18)arg1 newTransitionContext:(SCD_Struct_SB18)arg2 ;
-(CGRect)_overlayClippingFrame;
-(UIView *)mainPageView;
-(UIView *)bottomPage;
-(CGPoint)dateViewOffset;
-(long long)dateViewPageAlignment;
-(BOOL)forceDateViewCentered;
-(BOOL)dateViewIsVibrant;
-(unsigned long long)fakeStatusBarLevel;
-(UIView *)slideableContentView;
-(UIView *)modalPresentationView;
-(UIView *)slideUpToAppView;
-(CGPoint)foregroundViewPositionOffset;
-(unsigned long long)targetPageIndexForDraggingEnded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SBDashBoardViewDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id<SBDashBoardViewDelegate>)delegate;
-(SCD_Struct_SB18)transitionContext;
-(void)invalidate;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setScrollView:(SBPagedScrollView *)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(void)setBackgroundView:(SBDashBoardBackgroundView *)arg1 ;
-(SBDashBoardBackgroundView *)backgroundView;
-(BOOL)isTransitioning;
-(SBPagedScrollView *)scrollView;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(SBDashBoardPageControl *)pageControl;
-(void)_orderSubviews;
-(void)scrollViewDidScroll:(id)arg1 withContext:(SCD_Struct_SB34)arg2 ;
-(void)scrollViewWillBeginScrolling:(id)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)_layoutDateView;
-(UIGestureRecognizer *)irisGestureRecognizer;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(SBFLockScreenDateView *)dateView;
-(UIView *)tintingView;
-(void)setTintingView:(UIView *)arg1 ;
-(void)setPageControl:(SBDashBoardPageControl *)arg1 ;
-(void)updatePageControl;
-(void)cancelTransition;
-(long long)participantState;
-(NSArray *)pageViews;
-(SCD_Struct_SB18)_currentTransitionContext;
@end


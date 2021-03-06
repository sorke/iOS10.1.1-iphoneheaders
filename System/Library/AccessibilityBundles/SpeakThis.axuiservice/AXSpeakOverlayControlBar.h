/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <UIKit/UIView.h>

@protocol AXSpeakOverlayControlBarDelegate;
@class UIActivityIndicatorView, UIButton, UILabel, UIView, NSArray;

@interface AXSpeakOverlayControlBar : UIView {

	UIActivityIndicatorView* _activityIndicatorView;
	UIButton* _playPauseButton;
	UIButton* _tabModeButton;
	UIButton* _slowdownButton;
	UIButton* _stopButton;
	UIButton* _rewindButton;
	UIButton* _forwardButton;
	UIButton* _speedupButton;
	UILabel* _header;
	UIView* _dragView;
	UILabel* _errorLabel;
	BOOL _inTabMode;
	CGPoint _panGestureAnchor;
	id<AXSpeakOverlayControlBarDelegate> _delegate;
	NSArray* _minimizedConstraints;
	NSArray* _maximizedConstraints;

}

@property (nonatomic,retain) NSArray * minimizedConstraints;                                    //@synthesize minimizedConstraints=_minimizedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * maximizedConstraints;                                    //@synthesize maximizedConstraints=_maximizedConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<AXSpeakOverlayControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)controlBarSize;
+(CGSize)nubbitSize;
-(void)changeToPauseButton;
-(void)changeToResumeButton;
-(void)_slowDownButtonPressed;
-(void)setHidesMainViews:(BOOL)arg1 ;
-(void)_tabModeButtonPressed;
-(void)_updateAccessibilityElements;
-(void)_loadButtonsAndConstraints:(id)arg1 ;
-(void)setMaximizedConstraints:(NSArray *)arg1 ;
-(NSArray *)maximizedConstraints;
-(void)_rewindButtonPressed;
-(void)setMinimizedConstraints:(NSArray *)arg1 ;
-(void)_playPauseButtonPressed;
-(NSArray *)minimizedConstraints;
-(void)_addButtonConstraints:(id)arg1 ;
-(void)_speedUpButtonPressed;
-(void)showErrorMessage:(id)arg1 ;
-(void)_fastForwardButtonPressed;
-(id)_roundButtons;
-(void)setInTabMode:(BOOL)arg1 ;
-(id)_buttons;
-(id)_squareButtons;
-(void)setTitleHeader:(id)arg1 ;
-(void)showMainUI;
-(void)_updateButton:(id)arg1 withImageName:(id)arg2 accessibilityLabel:(id)arg3 ;
-(id)_addButtonWithImageName:(id)arg1 accessibilityLabel:(id)arg2 round:(BOOL)arg3 action:(SEL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXSpeakOverlayControlBarDelegate>)arg1 ;
-(id<AXSpeakOverlayControlBarDelegate>)delegate;
-(void)_handlePan:(id)arg1 ;
-(void)_stopButtonPressed;
-(void)showLoading;
-(void)_headerTapped:(id)arg1 ;
@end


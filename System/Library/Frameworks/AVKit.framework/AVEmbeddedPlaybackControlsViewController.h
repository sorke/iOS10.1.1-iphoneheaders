/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlaybackControlsViewController.h>

@class NSArray, NSString, UIView, AVButton, UILabel, AVScrubber, AVLoadingIndicatorView, NSMutableArray, NSLayoutConstraint;

@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController {

	BOOL _showsLoadingIndicator;
	BOOL _playing;
	BOOL _scrubberEnabled;
	NSArray* _scrubberLoadedTimeRanges;
	BOOL _playPauseButtonEnabled;
	BOOL _showsStreamingControls;
	BOOL _showsMediaSelectionButton;
	BOOL _showsPictureInPictureButton;
	BOOL _pictureInPictureButtonEnabled;
	NSString* _elapsedTimeLabelText;
	float _scrubberMinimumValue;
	float _scrubberValue;
	float _scrubberMaximumValue;
	NSString* _remainingTimeLabelText;
	UIView* _lowerControlsSubContainerView;
	AVButton* _playPauseButton;
	UILabel* _elapsedTimeLabel;
	AVScrubber* _scrubber;
	UILabel* _remainingTimeLabel;
	AVButton* _mediaSelectionButton;
	AVButton* _pictureInPictureButton;
	AVButton* _fullScreenButton;
	UILabel* _liveStreamingLabel;
	AVLoadingIndicatorView* _loadingIndicatorView;
	UILabel* _scrubInstructionsTitleLabel;
	UILabel* _scrubInstructionsSubtitleLabel;
	NSMutableArray* _layoutConstraints;
	NSLayoutConstraint* _controlsContainerViewHeightLayoutConstraint;
	BOOL _showsScrubInstructions;
	BOOL _controlsVisibilityHasBeenManagedBefore;
	double scrubberWidth;

}

@property (assign,nonatomic) double scrubberWidth; 
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)updateViewConstraints;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
-(double)scrubberWidth;
-(void)setScrubberWidth:(double)arg1 ;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(void)setPictureInPictureButtonEnabled:(BOOL)arg1 ;
-(BOOL)isScrubberEnabled;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(id)scrubberLoadedTimeRanges;
-(void)setScrubberLoadedTimeRanges:(id)arg1 ;
-(BOOL)isPlayPauseButtonEnabled;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(BOOL)showsStreamingControls;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(BOOL)showsMediaSelectionButton;
-(void)setShowsMediaSelectionButton:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureButton;
-(BOOL)isPictureInPictureButtonEnabled;
-(void)updateElapsedTimeLabel:(id)arg1 ;
-(void)updateScrubberMinimumValue:(float)arg1 ;
-(void)updateScrubberValue:(float)arg1 ;
-(void)updateScrubberMaximumValue:(float)arg1 ;
-(void)updateRemainingTimeLabel:(id)arg1 ;
-(void)_scrubberBeginTracking:(id)arg1 ;
-(void)_scrubberEndTracking:(id)arg1 ;
-(void)_manageControlsVisibility;
-(void)setPlaying:(BOOL)arg1 ;
@end

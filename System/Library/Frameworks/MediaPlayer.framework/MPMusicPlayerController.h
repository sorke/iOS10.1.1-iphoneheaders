/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMusicPlayerController
@optional
-(void)stop;
-(id)numberOfItems;
-(void)play;
-(void)pause;
-(id)repeatMode;
-(void)setRepeatMode:(id)arg1;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
-(id)shuffleMode;
-(void)setShuffleMode:(id)arg1;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1;
-(id)setQueueWithSeedItems:(id)arg1;
-(id)nowPlayingItemAtIndex:(id)arg1;
-(void)pauseWithFadeoutDuration:(id)arg1;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1;
-(id)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1;
-(void)setQueueWithRadioStation:(id)arg1;
-(id)setQueueWithStoreIDs:(id)arg1;
-(void)setQueueWithDescriptor:(id)arg1;
-(id)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(id)arg1;
-(id)skipInDirection:(id)arg1;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)playItem:(id)arg1;
-(void)shuffle;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(void)prepareQueueForPlayback;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1;
-(void)setQueueWithItemCollection:(id)arg1;
-(void)setNowPlayingItem:(id)arg1;
-(id)playbackState;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1;
-(void)prepareToPlay;

@end

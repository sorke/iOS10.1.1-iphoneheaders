/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/BulletinBoardPlugins/SMSBBPlugin.bundle/SMSBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKAudioControllerDelegate <NSObject>
@optional
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)audioControllerDidPause:(id)arg1;
-(void)audioControllerDidStop:(id)arg1;
-(void)audioControllerPlayingDidChange:(id)arg1;
-(void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3;

@end


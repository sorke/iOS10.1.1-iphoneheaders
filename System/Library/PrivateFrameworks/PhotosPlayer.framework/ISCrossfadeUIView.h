/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class ISCrossfadeItem, ISLayerPlayer;

@interface ISCrossfadeUIView : UIView {

	ISCrossfadeItem* _crossfadeItem;
	ISLayerPlayer* _crossfadePlayer;

}

@property (nonatomic,retain) ISCrossfadeItem * crossfadeItem;              //@synthesize crossfadeItem=_crossfadeItem - In the implementation block
@property (nonatomic,retain) ISLayerPlayer * crossfadePlayer;              //@synthesize crossfadePlayer=_crossfadePlayer - In the implementation block
+(Class)layerClass;
-(void)setContentMode:(long long)arg1 ;
-(ISCrossfadeItem *)crossfadeItem;
-(void)setCrossfadeItem:(ISCrossfadeItem *)arg1 ;
-(ISLayerPlayer *)crossfadePlayer;
-(void)setCrossfadePlayer:(ISLayerPlayer *)arg1 ;
-(id)crossfadeLayer;
@end


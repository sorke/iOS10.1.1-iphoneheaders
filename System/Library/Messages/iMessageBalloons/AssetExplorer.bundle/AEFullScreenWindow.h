/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <AssetExplorer/AEFullScreenContentWindow.h>

@class NSString;

@interface AEFullScreenWindow : UIWindow <AEFullScreenContentWindow> {

	BOOL _desiresCameraStreaming;

}

@property (assign,nonatomic) BOOL desiresCameraStreaming;              //@synthesize desiresCameraStreaming=_desiresCameraStreaming - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDesiresCameraStreaming:(BOOL)arg1 ;
-(BOOL)desiresCameraStreaming;
@end


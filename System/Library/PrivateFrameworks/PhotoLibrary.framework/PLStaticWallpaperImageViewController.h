/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (assign,nonatomic) BOOL colorSamplingEnabled; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1 ;
-(id)_wallPaperPreviewControllerForAsset:(id)arg1 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)wallpaperImage;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)initWithUIImage:(id)arg1 name:(id)arg2 ;
-(id)initWithPhoto:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@protocol VideosExtrasCarouselCollectionViewDelegate;
@interface VideosExtrasCarouselCollectionView : UICollectionView {

	id<VideosExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;              //@synthesize carouselCollectionViewDelegate=_carouselCollectionViewDelegate - In the implementation block
-(void)didAddSubview:(id)arg1 ;
-(void)setCarouselCollectionViewDelegate:(id<VideosExtrasCarouselCollectionViewDelegate>)arg1 ;
-(id<VideosExtrasCarouselCollectionViewDelegate>)carouselCollectionViewDelegate;
@end

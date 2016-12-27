/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchLayer.h>

@class BLPixelImageBuffer, UIImage;

@interface BLRetouchImageLayer : BLRetouchLayer {

	BLPixelImageBuffer* _imageBuffer;
	UIImage* _image;
	double _imageScaleFactor;

}

@property (nonatomic,retain) BLPixelImageBuffer * imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double imageScaleFactor;                       //@synthesize imageScaleFactor=_imageScaleFactor - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(CGSize)imageSize;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(void)setImageBuffer:(BLPixelImageBuffer *)arg1 ;
-(double)imageScaleFactor;
-(void)setImageScaleFactor:(double)arg1 ;
-(BLPixelImageBuffer *)imageBuffer;
@end

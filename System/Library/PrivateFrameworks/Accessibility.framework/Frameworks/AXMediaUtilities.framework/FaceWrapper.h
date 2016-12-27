/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface FaceWrapper : NSObject {

	BOOL _imageMirrored;
	BOOL _smiling;
	BOOL _blinking;
	int _imageWidth;
	int _imageHeight;
	int _size;
	long long _screenOrientation;
	CGRect _bounds;

}

@property (assign,nonatomic) int imageWidth;                           //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) int imageHeight;                          //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) int size;                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) long long screenOrientation;              //@synthesize screenOrientation=_screenOrientation - In the implementation block
@property (assign,nonatomic) BOOL imageMirrored;                       //@synthesize imageMirrored=_imageMirrored - In the implementation block
@property (assign,nonatomic) BOOL smiling;                             //@synthesize smiling=_smiling - In the implementation block
@property (assign,nonatomic) BOOL blinking;                            //@synthesize blinking=_blinking - In the implementation block
-(BOOL)smiling;
-(void)setSmiling:(BOOL)arg1 ;
-(CGRect)bounds;
-(int)size;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(int)imageWidth;
-(int)imageHeight;
-(void)setBlinking:(BOOL)arg1 ;
-(long long)getFaceLeftRightLocationInImage;
-(long long)getFaceTopBottomLocationInImage;
-(int)computeFaceLocationUsingLeftRightLoc:(long long)arg1 andTopBottomLoc:(long long)arg2 ;
-(void)swap:(long long*)arg1 with:(long long*)arg2 ;
-(int)getFaceLocationInImage;
-(long long)screenOrientation;
-(BOOL)imageMirrored;
-(int)getFaceLocationOnScreen;
-(BOOL)isLargeFace;
-(void)setScreenOrientation:(long long)arg1 ;
-(void)setImageMirrored:(BOOL)arg1 ;
-(BOOL)blinking;
-(CGRect)getFaceCoordsInImage;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKImage, NSMutableArray;

@interface VKIconArtwork : NSObject {

	BOOL _hasIcon;
	VKImage* _image;
	double _contentScale;
	double _leftCapWidth;
	double _rightCapWidth;
	double _textOffsetY;
	NSMutableArray* _completionHandlers;
	CGColorRef _fullBleedColor;

}

@property (nonatomic,readonly) double contentScale;                  //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) CGColorRef fullBleedColor;              //@synthesize fullBleedColor=_fullBleedColor - In the implementation block
-(void)dealloc;
-(id)image;
-(double)contentScale;
-(void)setFullBleedColor:(CGColorRef)arg1 ;
-(id)initWithImage:(CGImageRef)arg1 contentScale:(double)arg2 ;
-(id)imageWithText:(id)arg1 fontName:(id)arg2 ;
-(void)getImage:(/*^block*/id)arg1 ;
-(id)_newImageWithText:(id)arg1 fontName:(id)arg2 ;
-(id)_newImage;
-(void)_cleanUpAfterDrawing;
-(CGColorRef)fullBleedColor;
@end


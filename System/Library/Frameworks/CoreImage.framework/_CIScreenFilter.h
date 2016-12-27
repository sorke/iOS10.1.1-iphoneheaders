/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface _CIScreenFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
+(id)_kernel;
+(id)_kernel_code;
-(CIVector *)inputCenter;
-(NSNumber *)inputAngle;
-(NSNumber *)inputWidth;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputSharpness;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

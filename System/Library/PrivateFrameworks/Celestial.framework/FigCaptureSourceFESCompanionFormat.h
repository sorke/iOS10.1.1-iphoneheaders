/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSourceFESCompanionFormat : NSObject {

	int _videoFormatIndex;
	SCD_Struct_BW12 _fesDimensions;

}

@property (readonly) int videoFormatIndex; 
@property (readonly) SCD_Struct_BW12 fesDimensions; 
-(void)dealloc;
-(id)description;
-(id)initWithFESCompanionFormatDictionary:(id)arg1 ;
-(SCD_Struct_BW12)fesDimensions;
-(int)videoFormatIndex;
@end


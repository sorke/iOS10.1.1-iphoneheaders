/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OADOrientedBounds, NSDictionary;

@interface CMShapeBuilder : NSObject {

	int _type;
	OADOrientedBounds* _orientedBounds;
	int _format;
	NSDictionary* _adjustValues;

}
+(CGRect)canonicalBounds;
-(void)dealloc;
-(CGAffineTransform)affineTransform;
-(BOOL)isOffice12;
-(void)setOrientedBounds:(id)arg1 ;
-(void)setFileFormat:(int)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(void)setAdjustValues:(id)arg1 ;
-(float)maxAdjustedValue;
@end


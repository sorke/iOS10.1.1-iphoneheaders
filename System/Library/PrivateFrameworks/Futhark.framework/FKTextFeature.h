/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Futhark/Futhark-Structs.h>
@class NSArray, NSString;

@interface FKTextFeature : NSObject {

	SCD_Union_FK0 _backingIndex;
	SCD_Struct_FK1* _session;
	int _scale;
	long long _featureID;
	NSArray* _corners;
	long long _type;
	NSString* _text;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long featureID;                   //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
+(id)featureFromConcompIndex:(int)arg1 session:(SCD_Struct_FK1*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long*)arg7 scale:(int)arg8 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(SCD_Struct_FK1*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 createConcompFeatures:(BOOL)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long*)arg7 scale:(int)arg8 ;
-(NSArray *)subFeatures;
-(void)dealloc;
-(long long)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)corners;
-(CGRect)boundingBox;
-(long long)featureID;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(id)initWithType:(long long)arg1 boundingBox:(CGRect*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(SCD_Struct_FK1*)arg5 backingIndex:(/*function pointer*/void*)arg6 scale:(int)arg7 ;
@end


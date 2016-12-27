/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol SearchUIRichTitleCardSection <SearchUITitleCardSection>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * contentRatingText; 
@property (nonatomic,readonly) UIImage * titleImage; 
@property (nonatomic,readonly) BOOL centered; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
@optional
-(BOOL)shouldCropImageToCircle;

@required
-(NSString *)subtitle;
-(BOOL)centered;
-(NSString *)contentRatingText;
-(UIImage *)titleImage;

@end

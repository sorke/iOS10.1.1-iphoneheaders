/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormFieldClassificationCorrectorDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer, NSString, NSDictionary;

@interface WBSFormFieldClassificationCorrector : NSObject {

	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	id<WBSFormFieldClassificationCorrectorDelegate> _delegate;
	NSString* _domain;
	NSDictionary* _formMetadata;
	NSDictionary* _formValues;

}

@property (assign,nonatomic,__weak) id<WBSFormFieldClassificationCorrectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                                                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * formMetadata;                                           //@synthesize formMetadata=_formMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * formValues;                                             //@synthesize formValues=_formValues - In the implementation block
-(id)init;
-(void)setDelegate:(id<WBSFormFieldClassificationCorrectorDelegate>)arg1 ;
-(id<WBSFormFieldClassificationCorrectorDelegate>)delegate;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 ;
-(id)_classificationCorrectionsForControlWithMetadata:(id)arg1 ;
-(void)processCorrections;
-(NSDictionary *)formMetadata;
-(NSDictionary *)formValues;
@end


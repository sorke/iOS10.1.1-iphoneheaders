/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (nonatomic,copy,readonly) NSString * title; 
-(id)displayString;
-(NSString *)title;
-(unsigned long long)fieldType;
-(void)setCurrentValue:(id)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)submissionString;
@end

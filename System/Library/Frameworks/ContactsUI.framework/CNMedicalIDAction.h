/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@class HKHealthStore, _HKMedicalIDData, CNContact, NSString;

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate> {

	long long _medicalIDActionType;
	HKHealthStore* _healthStore;
	_HKMedicalIDData* _healthData;

}

@property (assign,nonatomic) long long medicalIDActionType;              //@synthesize medicalIDActionType=_medicalIDActionType - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * healthData;              //@synthesize healthData=_healthData - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(long long)medicalIDActionType;
-(_HKMedicalIDData *)healthData;
-(void)setHealthData:(_HKMedicalIDData *)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(void)setMedicalIDActionType:(long long)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end


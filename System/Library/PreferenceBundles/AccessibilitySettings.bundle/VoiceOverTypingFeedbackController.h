/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@interface VoiceOverTypingFeedbackController : AccessibilityBaseListController {

	long long _optionSoftware;
	long long _optionHardware;
	long long _optionBrailleGestures;
	long long _swSelectedRow;
	long long _hwSelectedRow;
	long long _brailleGesturesSelectedRow;

}
-(long long)feedbackTypeForString:(id)arg1 ;
-(long long)rowForTypingFeedbackOption:(long long)arg1 section:(long long)arg2 ;
-(void)_updateSelectedRows;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

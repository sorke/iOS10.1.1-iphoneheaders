/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSLocale, NSDate;

@interface AXTapticTimeManager : NSObject {

	NSMutableArray* _enqueuedSounds;
	NSMutableArray* _enqueuedSoundDelays;
	unsigned _ssIDHapticFast[24];
	unsigned _ssIDHapticSlow[24];
	unsigned _ssIDHapticMorse[10];
	NSMutableDictionary* _soundToPatterns;
	BOOL _is24Hour;
	NSLocale* _localeOverride;
	NSDate* _dateOverride;
	/*^block*/id _queueCallback;

}

@property (nonatomic,retain) NSLocale * localeOverride;              //@synthesize localeOverride=_localeOverride - In the implementation block
@property (nonatomic,retain) NSDate * dateOverride;                  //@synthesize dateOverride=_dateOverride - In the implementation block
@property (nonatomic,copy) id queueCallback;                         //@synthesize queueCallback=_queueCallback - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_atomToLegacyVibePattern:(id)arg1 ;
-(void)_updateIs24HourTime;
-(void)setQueueCallback:(id)arg1 ;
-(void)setLocaleOverride:(NSLocale *)arg1 ;
-(NSLocale *)localeOverride;
-(BOOL)_is24HourTime;
-(id)_dateComponentsForClockTime;
-(long long)_numberOfTapsForHourNumber:(long long)arg1 ;
-(void)_clearQueue;
-(long long)_numberOfTapHoursForClockTime;
-(void)_enqueueHours:(unsigned long long)arg1 encoding:(long long)arg2 ;
-(long long)_numberOfTapMinutesForClockTime;
-(void)_enqueueMinutes:(unsigned long long)arg1 encoding:(long long)arg2 ;
-(void)_handleTestingQueueCallback;
-(void)_dequeueSound;
-(id)_convertSoundToStringName:(unsigned)arg1 ;
-(id)queueCallback;
-(void)outputHoursAndMinutes:(long long)arg1 ;
-(void)outputHours:(long long)arg1 ;
-(void)outputMinutes:(long long)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)setDateOverride:(NSDate *)arg1 ;
-(NSDate *)dateOverride;
@end


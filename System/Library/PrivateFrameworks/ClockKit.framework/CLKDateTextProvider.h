/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateFormatter, NSArray, NSDate, NSTimeZone, NSString;

@interface CLKDateTextProvider : CLKTextProvider {

	NSDateFormatter* _dateFormatter;
	NSArray* _templateSeries;
	BOOL _shortUnits;
	BOOL _allowsNarrowUnits;
	NSDate* _date;
	unsigned long long _calendarUnits;
	NSTimeZone* _timeZone;
	NSString* _alternateCalendarLocaleID;
	long long _formattingContext;

}

@property (assign,nonatomic) BOOL shortUnits;                                 //@synthesize shortUnits=_shortUnits - In the implementation block
@property (assign,nonatomic) BOOL allowsNarrowUnits;                          //@synthesize allowsNarrowUnits=_allowsNarrowUnits - In the implementation block
@property (nonatomic,copy) NSString * alternateCalendarLocaleID;              //@synthesize alternateCalendarLocaleID=_alternateCalendarLocaleID - In the implementation block
@property (assign,nonatomic) long long formattingContext;                     //@synthesize formattingContext=_formattingContext - In the implementation block
@property (nonatomic,retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;                //@synthesize calendarUnits=_calendarUnits - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 ;
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
-(long long)formattingContext;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)_validate;
-(void)setFormattingContext:(long long)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(void)setShortUnits:(BOOL)arg1 ;
-(void)setAlternateCalendarLocaleID:(NSString *)arg1 ;
-(void)setAllowsNarrowUnits:(BOOL)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(unsigned long long)calendarUnits;
-(id)_completeDateTemplateSeries;
-(id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1 ;
-(BOOL)shortUnits;
-(BOOL)allowsNarrowUnits;
-(NSString *)alternateCalendarLocaleID;
@end


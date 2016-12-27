/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface DDEventComponents : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _eventTypeIdentifier;
	NSDate* _startDate;
	NSDate* _endDate;
	NSRange _originRange;
	long long _source;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * eventTypeIdentifier;              //@synthesize eventTypeIdentifier=_eventTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) NSRange originRange;                       //@synthesize originRange=_originRange - In the implementation block
@property (assign,nonatomic) long long source;                          //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_eventsFromIntelligentsuggestions:(id)arg1 ;
+(id)_eventComponents:(id)arg1 matchingResult:(DDResultRef)arg2 ;
+(id)_eventsFromNaturalLanguageText:(id)arg1 ;
+(id)bestEventComponentsForResult:(DDResultRef)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSRange)originRange;
-(void)setEventTypeIdentifier:(NSString *)arg1 ;
-(void)setOriginRange:(NSRange)arg1 ;
-(NSString *)eventTypeIdentifier;
@end

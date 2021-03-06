/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface UpNextWidget.ModelStorage : NSObject <NSSecureCoding> {

	 alarms;
	 events;
	 reminders;

}

@property (copy,nonatomic) NSArray * alarms; 
@property (copy,nonatomic) NSArray * events; 
@property (copy,nonatomic) NSArray * reminders; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)reminders;
-(void)setReminders:(NSArray *)arg1 ;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(NSArray *)events;
-(id)clone;
-(void)setEvents:(NSArray *)arg1 ;
@end


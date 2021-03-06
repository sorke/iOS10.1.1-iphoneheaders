/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_TimelineNode.h>

@protocol CLKTimelineEntry;
@class NSDate;

@interface _TimelineEntryNode : _TimelineNode {

	id<CLKTimelineEntry> _entry;

}

@property (nonatomic,retain) id<CLKTimelineEntry> entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
-(NSDate *)date;
-(id<CLKTimelineEntry>)entry;
-(void)setEntry:(id<CLKTimelineEntry>)arg1 ;
@end


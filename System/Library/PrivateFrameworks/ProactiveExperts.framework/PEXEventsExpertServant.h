/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/ProactiveExperts-Structs.h>
#import <ProactiveExperts/PEXServant.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSString, EKEventStore, PEXEventCache, NSArray, NSObject, PEXContactScorer, EKCalendarVisibilityManager;

@interface PEXEventsExpertServant : PEXServant {

	NSString* _source;
	EKEventStore* _store;
	BOOL _accessGranted;
	PEXEventCache* _eventCache;
	NSArray* _calendars;
	NSString* identifier;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;
	NSObject*<OS_dispatch_semaphore> _accessComplete;
	PEXContactScorer* _contactScorer;
	NSObject*<OS_dispatch_queue> _eventLoadingQueue;
	EKCalendarVisibilityManager* _calendarVisibilityManager;
	id _ekObserverRegistrationToken;

}
-(id)init;
-(void)dealloc;
-(id)_loadCalendars;
-(void)_registerForNotifications;
-(void)clearCaches;
-(void)setStore:(id)arg1 ;
-(id)_predicateForRange:(NSRange)arg1 ;
-(id)getWeakStore;
-(id)_filterOutAllDayAndMultiDayEvents:(id)arg1 ;
-(void)discoveredEvents:(id)arg1 ;
-(void)setupCalendarVisibilityManager;
-(void)setContactScorer:(id)arg1 ;
-(void)askForEKAccess;
-(void)_preloadEvents;
-(NSRange)_dateRangeForCriteria:(id)arg1 ;
-(id)_filterEvents:(id)arg1 forTime:(id)arg2 people:(id)arg3 busy:(BOOL)arg4 fields:(id)arg5 ;
-(id)_decPredictionForEvents:(id)arg1 fields:(id)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4 ;
-(id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2 ;
-(id)_nextFreeEventsFromEvents:(id)arg1 ;
-(id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2 ;
-(id)_lastFreeEventsFromEvents:(id)arg1 ;
-(id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2 ;
-(id)_decItemsForEvent:(id)arg1 fields:(id)arg2 formatter:(id)arg3 ;
-(id)_valuesForPrediction:(id)arg1 fields:(id)arg2 formatter:(id)arg3 ;
-(BOOL)_isFreeTime:(id)arg1 ;
-(BOOL)_shouldTreatAsUnscheduledFreeTime:(id)arg1 ;
-(long long)_userStatusForEvent:(id)arg1 ;
-(BOOL)_userDidOrganizeEvent:(id)arg1 ;
-(BOOL)_userIsInvitedToEvent:(id)arg1 ;
-(BOOL)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2 ;
-(id)_busyEventsFromEvents:(id)arg1 people:(id)arg2 ;
-(id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2 ;
-(id)_freeEventsAndGapsFromEvents:(id)arg1 ;
-(id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)_eventIsHappening:(id)arg1 ;
-(void)setAccessGranted:(BOOL)arg1 ;
@end


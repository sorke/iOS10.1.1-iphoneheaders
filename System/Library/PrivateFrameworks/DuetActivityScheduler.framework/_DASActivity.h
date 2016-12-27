/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, _DASFileProtection, NSDate, NSArray, NSDictionary, NSMutableDictionary, CDAttribute;

@interface _DASActivity : NSObject <NSCopying, NSSecureCoding> {

	BOOL _cancelAfterDeadline;
	BOOL _requiresNetwork;
	BOOL _isUpload;
	BOOL _requiresInexpensiveNetworking;
	BOOL _cpuIntensive;
	BOOL _memoryIntensive;
	BOOL _diskIntensive;
	BOOL _requiresDeviceInactivity;
	BOOL _requiresPlugin;
	BOOL _afterUserIsInactive;
	BOOL _beforeUserIsActive;
	BOOL _triggersRestart;
	BOOL _supportsAnyApplication;
	BOOL _requestsApplicationLaunch;
	BOOL _darkWakeEligible;
	BOOL _beforeDaysFirstActivity;
	BOOL _suspendable;
	BOOL _suspendRequested;
	BOOL _bypassesPredictions;
	BOOL _budgeted;
	int _pid;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	/*^block*/id _startHandler;
	/*^block*/id _suspendHandler;
	_DASFileProtection* _fileProtection;
	unsigned long long _schedulingPriority;
	NSDate* _startAfter;
	NSDate* _startBefore;
	unsigned long long _duration;
	unsigned long long _transferSize;
	long long _targetDevice;
	NSArray* _relatedApplications;
	long long _relevancy;
	NSArray* _schedulerRecommendedApplications;
	NSDictionary* _userInfo;
	NSString* _bundleId;
	NSString* _groupName;
	NSString* _launchReason;
	double _predictedOptimalScore;
	NSDate* _predictedOptimalStartDate;
	double _lastComputedScore;
	NSDate* _lastScored;
	NSDate* _submitDate;
	NSDate* _startDate;
	NSMutableDictionary* _policyScores;
	CDAttribute* _meteringAttribute;
	CDAttribute* _admissionAttribute;
	unsigned long long _budgetingToken;

}

@property (assign,nonatomic) BOOL darkWakeEligible;                                   //@synthesize darkWakeEligible=_darkWakeEligible - In the implementation block
@property (assign,nonatomic) BOOL beforeDaysFirstActivity;                            //@synthesize beforeDaysFirstActivity=_beforeDaysFirstActivity - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                      //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSArray * schedulerRecommendedApplications;              //@synthesize schedulerRecommendedApplications=_schedulerRecommendedApplications - In the implementation block
@property (nonatomic,copy) NSString * launchReason;                                   //@synthesize launchReason=_launchReason - In the implementation block
@property (assign,nonatomic) BOOL supportsAnyApplication;                             //@synthesize supportsAnyApplication=_supportsAnyApplication - In the implementation block
@property (assign,nonatomic) BOOL requestsApplicationLaunch;                          //@synthesize requestsApplicationLaunch=_requestsApplicationLaunch - In the implementation block
@property (assign,nonatomic) double predictedOptimalScore;                            //@synthesize predictedOptimalScore=_predictedOptimalScore - In the implementation block
@property (nonatomic,retain) NSDate * predictedOptimalStartDate;                      //@synthesize predictedOptimalStartDate=_predictedOptimalStartDate - In the implementation block
@property (assign,nonatomic) double lastComputedScore;                                //@synthesize lastComputedScore=_lastComputedScore - In the implementation block
@property (retain) NSDate * lastScored;                                               //@synthesize lastScored=_lastScored - In the implementation block
@property (nonatomic,retain) NSDate * submitDate;                                     //@synthesize submitDate=_submitDate - In the implementation block
@property (retain) NSDate * startDate;                                                //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL suspendable;                                        //@synthesize suspendable=_suspendable - In the implementation block
@property (assign,nonatomic) BOOL suspendRequested;                                   //@synthesize suspendRequested=_suspendRequested - In the implementation block
@property (assign,nonatomic) BOOL bypassesPredictions;                                //@synthesize bypassesPredictions=_bypassesPredictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * policyScores;                      //@synthesize policyScores=_policyScores - In the implementation block
@property (assign,nonatomic) BOOL budgeted;                                           //@synthesize budgeted=_budgeted - In the implementation block
@property (assign,nonatomic) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) CDAttribute * meteringAttribute;                         //@synthesize meteringAttribute=_meteringAttribute - In the implementation block
@property (nonatomic,retain) CDAttribute * admissionAttribute;                        //@synthesize admissionAttribute=_admissionAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long budgetingToken;                       //@synthesize budgetingToken=_budgetingToken - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;               //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,copy) id startHandler;                                           //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id suspendHandler;                                         //@synthesize suspendHandler=_suspendHandler - In the implementation block
@property (nonatomic,copy) _DASFileProtection * fileProtection;                       //@synthesize fileProtection=_fileProtection - In the implementation block
@property (assign,nonatomic) unsigned long long schedulingPriority;                   //@synthesize schedulingPriority=_schedulingPriority - In the implementation block
@property (nonatomic,retain) NSDate * startAfter;                                     //@synthesize startAfter=_startAfter - In the implementation block
@property (nonatomic,retain) NSDate * startBefore;                                    //@synthesize startBefore=_startBefore - In the implementation block
@property (assign,nonatomic) BOOL cancelAfterDeadline;                                //@synthesize cancelAfterDeadline=_cancelAfterDeadline - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL requiresNetwork;                                    //@synthesize requiresNetwork=_requiresNetwork - In the implementation block
@property (assign,nonatomic) unsigned long long transferSize;                         //@synthesize transferSize=_transferSize - In the implementation block
@property (assign,nonatomic) BOOL isUpload;                                           //@synthesize isUpload=_isUpload - In the implementation block
@property (assign,nonatomic) BOOL requiresInexpensiveNetworking;                      //@synthesize requiresInexpensiveNetworking=_requiresInexpensiveNetworking - In the implementation block
@property (assign,nonatomic) BOOL cpuIntensive;                                       //@synthesize cpuIntensive=_cpuIntensive - In the implementation block
@property (assign,nonatomic) BOOL memoryIntensive;                                    //@synthesize memoryIntensive=_memoryIntensive - In the implementation block
@property (assign,nonatomic) BOOL diskIntensive;                                      //@synthesize diskIntensive=_diskIntensive - In the implementation block
@property (assign,nonatomic) BOOL requiresDeviceInactivity;                           //@synthesize requiresDeviceInactivity=_requiresDeviceInactivity - In the implementation block
@property (assign,nonatomic) BOOL requiresPlugin;                                     //@synthesize requiresPlugin=_requiresPlugin - In the implementation block
@property (assign,nonatomic) BOOL afterUserIsInactive;                                //@synthesize afterUserIsInactive=_afterUserIsInactive - In the implementation block
@property (assign,nonatomic) BOOL beforeUserIsActive;                                 //@synthesize beforeUserIsActive=_beforeUserIsActive - In the implementation block
@property (assign,nonatomic) BOOL triggersRestart;                                    //@synthesize triggersRestart=_triggersRestart - In the implementation block
@property (assign,nonatomic) long long targetDevice;                                  //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NSArray * relatedApplications;                           //@synthesize relatedApplications=_relatedApplications - In the implementation block
@property (assign,nonatomic) long long relevancy;                                     //@synthesize relevancy=_relevancy - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                                     //@synthesize bundleId=_bundleId - In the implementation block
+(id)activityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 ;
+(BOOL)supportsSecureCoding;
+(id)sharedDateFormatter;
+(unsigned long long)cleanSchedulingPriority:(unsigned long long)arg1 ;
+(unsigned long long)cleanDuration:(unsigned long long)arg1 ;
+(unsigned long long)cleanTransferSize:(unsigned long long)arg1 ;
+(id)validClassesForUserInfoSerialization;
+(id)prettySchedulingPriorityDescription:(unsigned long long)arg1 ;
+(id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 transferSize:(unsigned long long)arg3 isUpload:(BOOL)arg4 expensiveNetworkingAllowed:(BOOL)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)anyApplicationActivityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 limitedToApplications:(id)arg6 ;
+(id)applicationLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
-(void)setStartHandler:(id)arg1 ;
-(void)setSuspendHandler:(id)arg1 ;
-(void)setRequiresNetwork:(BOOL)arg1 ;
-(void)setTransferSize:(unsigned long long)arg1 ;
-(void)setRequiresPlugin:(BOOL)arg1 ;
-(void)setRequiresInexpensiveNetworking:(BOOL)arg1 ;
-(void)setSchedulingPriority:(unsigned long long)arg1 ;
-(void)setIsUpload:(BOOL)arg1 ;
-(void)setRelatedApplications:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)setDuration:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setStartAfter:(NSDate *)arg1 ;
-(id)shortDescription;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)cpuIntensive;
-(BOOL)memoryIntensive;
-(BOOL)afterUserIsInactive;
-(BOOL)triggersRestart;
-(NSDate *)startAfter;
-(id)startHandler;
-(id)suspendHandler;
-(BOOL)budgeted;
-(void)setAfterUserIsInactive:(BOOL)arg1 ;
-(BOOL)beforeUserIsActive;
-(void)setBeforeUserIsActive:(BOOL)arg1 ;
-(void)setCpuIntensive:(BOOL)arg1 ;
-(void)setMemoryIntensive:(BOOL)arg1 ;
-(void)setBudgeted:(BOOL)arg1 ;
-(void)setTriggersRestart:(BOOL)arg1 ;
-(CDAttribute *)meteringAttribute;
-(void)setMeteringAttribute:(CDAttribute *)arg1 ;
-(CDAttribute *)admissionAttribute;
-(void)setAdmissionAttribute:(CDAttribute *)arg1 ;
-(unsigned long long)budgetingToken;
-(void)setBudgetingToken:(unsigned long long)arg1 ;
-(void)setFileProtection:(_DASFileProtection *)arg1 ;
-(_DASFileProtection *)fileProtection;
-(void)setPid:(int)arg1 ;
-(void)setStartBefore:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setTargetDevice:(long long)arg1 ;
-(int)pid;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)launchReason;
-(id)initWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 ;
-(void)setSupportsAnyApplication:(BOOL)arg1 ;
-(void)setRequestsApplicationLaunch:(BOOL)arg1 ;
-(void)setLaunchReason:(NSString *)arg1 ;
-(BOOL)isIntensive;
-(long long)relevancy;
-(NSArray *)relatedApplications;
-(BOOL)requiresNetwork;
-(unsigned long long)transferSize;
-(BOOL)isUpload;
-(unsigned long long)schedulingPriority;
-(NSDate *)startBefore;
-(void)setCancelAfterDeadline:(BOOL)arg1 ;
-(void)setDiskIntensive:(BOOL)arg1 ;
-(void)setRequiresDeviceInactivity:(BOOL)arg1 ;
-(void)setRelevancy:(long long)arg1 ;
-(void)setDarkWakeEligible:(BOOL)arg1 ;
-(void)setBeforeDaysFirstActivity:(BOOL)arg1 ;
-(void)setSchedulerRecommendedApplications:(NSArray *)arg1 ;
-(void)setPredictedOptimalScore:(double)arg1 ;
-(void)setPredictedOptimalStartDate:(NSDate *)arg1 ;
-(void)setLastComputedScore:(double)arg1 ;
-(NSDate *)lastScored;
-(void)setLastScored:(NSDate *)arg1 ;
-(void)setSubmitDate:(NSDate *)arg1 ;
-(void)setSuspendable:(BOOL)arg1 ;
-(void)setSuspendRequested:(BOOL)arg1 ;
-(void)setPolicyScores:(NSMutableDictionary *)arg1 ;
-(void)setBypassesPredictions:(BOOL)arg1 ;
-(double)compatibilityWith:(id)arg1 ;
-(BOOL)hasManyConstraints;
-(BOOL)timewiseEligibleAtDate:(id)arg1 ;
-(BOOL)cancelAfterDeadline;
-(BOOL)requiresInexpensiveNetworking;
-(BOOL)diskIntensive;
-(BOOL)requiresDeviceInactivity;
-(BOOL)requiresPlugin;
-(BOOL)supportsAnyApplication;
-(BOOL)requestsApplicationLaunch;
-(NSArray *)schedulerRecommendedApplications;
-(BOOL)darkWakeEligible;
-(BOOL)beforeDaysFirstActivity;
-(double)predictedOptimalScore;
-(NSDate *)predictedOptimalStartDate;
-(double)lastComputedScore;
-(NSDate *)submitDate;
-(BOOL)suspendable;
-(BOOL)suspendRequested;
-(BOOL)bypassesPredictions;
-(NSMutableDictionary *)policyScores;
-(long long)targetDevice;
@end

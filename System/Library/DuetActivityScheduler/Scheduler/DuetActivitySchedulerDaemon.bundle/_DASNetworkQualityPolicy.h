/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicyPredicting.h>

@protocol _CDContext;
@class NSString, _CDContextualKeyPath, NSDictionary, NSArray, _DASNetworkEvaluationMonitor, _DKPredictionTimeline;

@interface _DASNetworkQualityPolicy : NSObject <_DASActivityPolicyPredicting> {

	NSString* _policyName;
	_CDContextualKeyPath* _wifiQuality;
	NSDictionary* _defaultBasePolicy;
	NSArray* _triggers;
	_DASNetworkEvaluationMonitor* _networkEvaluator;
	id<_CDContext> _userContext;
	_DKPredictionTimeline* _wifiPredictionTimeline;
	_CDContextualKeyPath* _wiredQuality;
	_CDContextualKeyPath* _cellQuality;
	_CDContextualKeyPath* _cellRadioHot;
	_DKPredictionTimeline* _cellPredictionTimeline;

}

@property (nonatomic,retain) NSString * policyName;                                        //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * wifiQuality;                           //@synthesize wifiQuality=_wifiQuality - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultBasePolicy;                             //@synthesize defaultBasePolicy=_defaultBasePolicy - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                           //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) _DASNetworkEvaluationMonitor * networkEvaluator;              //@synthesize networkEvaluator=_networkEvaluator - In the implementation block
@property (nonatomic,retain) id<_CDContext> userContext;                                   //@synthesize userContext=_userContext - In the implementation block
@property (retain) _DKPredictionTimeline * wifiPredictionTimeline;                         //@synthesize wifiPredictionTimeline=_wifiPredictionTimeline - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * wiredQuality;                          //@synthesize wiredQuality=_wiredQuality - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * cellQuality;                           //@synthesize cellQuality=_cellQuality - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * cellRadioHot;                          //@synthesize cellRadioHot=_cellRadioHot - In the implementation block
@property (retain) _DKPredictionTimeline * cellPredictionTimeline;                         //@synthesize cellPredictionTimeline=_cellPredictionTimeline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSString *)policyName;
-(void)setPolicyName:(NSString *)arg1 ;
-(id)initializeTriggers;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(BOOL)shouldLogScoreToPowerLog;
-(double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(void)setWifiPredictionTimeline:(_DKPredictionTimeline *)arg1 ;
-(_DKPredictionTimeline *)wifiPredictionTimeline;
-(void)setCellPredictionTimeline:(_DKPredictionTimeline *)arg1 ;
-(_DKPredictionTimeline *)cellPredictionTimeline;
-(void)registerForPredictionChanges;
-(long long)minimumQualityForActivity:(id)arg1 interface:(long long)arg2 ;
-(double)scoreForActivity:(id)arg1 networkQuality:(long long)arg2 interface:(long long)arg3 pluginStatus:(BOOL)arg4 radioHot:(BOOL)arg5 ;
-(void)setWiredQuality:(_CDContextualKeyPath *)arg1 ;
-(void)setDefaultBasePolicy:(NSDictionary *)arg1 ;
-(_CDContextualKeyPath *)wiredQuality;
-(NSDictionary *)defaultBasePolicy;
-(_DASNetworkEvaluationMonitor *)networkEvaluator;
-(_CDContextualKeyPath *)cellRadioHot;
-(void)setCellRadioHot:(_CDContextualKeyPath *)arg1 ;
-(void)setNetworkEvaluator:(_DASNetworkEvaluationMonitor *)arg1 ;
-(id)init;
-(_CDContextualKeyPath *)wifiQuality;
-(void)setWifiQuality:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)cellQuality;
-(void)setCellQuality:(_CDContextualKeyPath *)arg1 ;
-(id<_CDContext>)userContext;
-(void)setUserContext:(id<_CDContext>)arg1 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

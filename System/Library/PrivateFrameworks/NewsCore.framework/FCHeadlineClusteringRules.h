/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolConfiguration;

@interface FCHeadlineClusteringRules : NSObject {

	BOOL _enableOptimizedLayout;
	unsigned long long _minClusterSize;
	unsigned long long _maxClusterSize;
	unsigned long long _minIdealClusterSize;
	unsigned long long _maxIdealClusterSize;
	unsigned long long _optimizedLayoutSizeThreshold;
	unsigned long long _optimizedLayoutIncrementUnit;
	FCSolConfiguration* _solConfiguration;

}

@property (nonatomic,readonly) unsigned long long minClusterSize;                            //@synthesize minClusterSize=_minClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxClusterSize;                            //@synthesize maxClusterSize=_maxClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long minIdealClusterSize;                       //@synthesize minIdealClusterSize=_minIdealClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxIdealClusterSize;                       //@synthesize maxIdealClusterSize=_maxIdealClusterSize - In the implementation block
@property (nonatomic,readonly) BOOL enableOptimizedLayout;                                   //@synthesize enableOptimizedLayout=_enableOptimizedLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutSizeThreshold;              //@synthesize optimizedLayoutSizeThreshold=_optimizedLayoutSizeThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutIncrementUnit;              //@synthesize optimizedLayoutIncrementUnit=_optimizedLayoutIncrementUnit - In the implementation block
@property (nonatomic,retain) FCSolConfiguration * solConfiguration;                          //@synthesize solConfiguration=_solConfiguration - In the implementation block
+(id)rulesWithTreatment:(id)arg1 ;
-(id)init;
-(id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 enableOptimizedLayout:(BOOL)arg5 optimizedLayoutSizeThreshold:(unsigned long long)arg6 optimizedLayoutIncrementUnit:(unsigned long long)arg7 solConfiguration:(id)arg8 ;
-(unsigned long long)minClusterSize;
-(unsigned long long)maxClusterSize;
-(unsigned long long)minIdealClusterSize;
-(unsigned long long)maxIdealClusterSize;
-(BOOL)enableOptimizedLayout;
-(unsigned long long)optimizedLayoutSizeThreshold;
-(unsigned long long)optimizedLayoutIncrementUnit;
-(FCSolConfiguration *)solConfiguration;
-(void)setSolConfiguration:(FCSolConfiguration *)arg1 ;
@end

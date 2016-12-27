/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSSet* _peopleNodes;
	double _meanContentScore;
	double _neighborScore;

}

@property (retain) NSSet * peopleNodes;                  //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (assign) double meanContentScore;              //@synthesize meanContentScore=_meanContentScore - In the implementation block
@property (assign) double neighborScore;                 //@synthesize neighborScore=_neighborScore - In the implementation block
@property (assign) BOOL isBirthday;                      //@synthesize isBirthday=_isBirthday - In the implementation block
-(id)description;
-(void)setIsBirthday:(BOOL)arg1 ;
-(BOOL)isBirthday;
-(NSSet *)peopleNodes;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)setPeopleNodes:(NSSet *)arg1 ;
-(void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3 ;
-(id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(long long)arg3 ;
-(double)neighborScore;
-(void)setNeighborScore:(double)arg1 ;
-(double)meanContentScore;
-(void)setMeanContentScore:(double)arg1 ;
@end

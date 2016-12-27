/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVFaceComparer <NSObject>
@required
-(float)clusterRepresentativenessOfFace:(id)arg1;
-(BOOL)getDistance:(float*)arg1 fromFaceObservation:(id)arg2 toFaceObservation:(id)arg3 error:(id*)arg4;
-(BOOL)faceIsGoodRepresentativeOfItsCluster:(id)arg1;

@end

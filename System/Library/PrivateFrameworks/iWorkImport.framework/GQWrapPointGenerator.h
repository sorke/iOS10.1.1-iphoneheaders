/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQWrapPointGenerator <NSObject>
@required
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)wrapPoints;
-(void)addWrapPoint:(id)arg1;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
-(void)clearWrapPoints;

@end


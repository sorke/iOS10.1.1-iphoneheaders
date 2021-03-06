/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableHeaderStorage.h>

@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {

	map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;
	double mHorizontalScaleFactor;

}

@property (assign,nonatomic) double horizontalScaleFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3 ;
-(void)enumerateHeadersWithBlock:(/*^block*/id)arg1 ;
-(void)shiftKeysAtIndex:(unsigned)arg1 amount:(int)arg2 ;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 ;
-(void)removeAllHeaders;
-(unsigned)minKey;
-(unsigned)maxKey;
-(unsigned)upperBound:(unsigned)arg1 ;
-(unsigned)lowerBound:(unsigned)arg1 ;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned)arg2 ;
-(void)removeHeaderForKey:(unsigned)arg1 ;
@end


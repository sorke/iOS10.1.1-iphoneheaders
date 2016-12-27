/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {

	vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > >* mContainer;

}

@property (nonatomic,readonly) vector<glm::detail::tvec4<float>* container; 
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)data;
-(vector<glm::detail::tvec4<float>*)container;
-(void)clear;
-(unsigned long long)components;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageInfo.h>

@class NSArray;

@interface TPPaginatedPageInfo : TPPageInfo

@property (nonatomic,readonly) NSArray * floatingDrawableInfos; 
@property (nonatomic,readonly) BOOL isDocumentSetupPage; 
-(Class)repClass;
-(BOOL)isDocumentSetupPage;
-(CGRect)pageFrame;
-(NSArray *)floatingDrawableInfos;
-(id)pageController;
-(Class)layoutClass;
@end


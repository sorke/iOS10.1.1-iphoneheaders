/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class KNMacUILayout;

@interface KNMacArchivedUILayout : TSPObject {

	KNMacUILayout* mUILayout;

}

@property (nonatomic,readonly) KNMacUILayout * uiLayout; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithUILayout:(id)arg1 context:(id)arg2 ;
-(KNMacUILayout *)uiLayout;
-(void)dealloc;
@end

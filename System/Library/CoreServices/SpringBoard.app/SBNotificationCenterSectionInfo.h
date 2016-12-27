/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSectionInfo.h>

@class SBItemInfoLayoutCache;

@interface SBNotificationCenterSectionInfo : SBSectionInfo {

	SBItemInfoLayoutCache* _layoutCache;
	/*^block*/id _clearPossibleAction;
	/*^block*/id _clearFinalAction;

}

@property (nonatomic,copy) id clearPossibleAction;              //@synthesize clearPossibleAction=_clearPossibleAction - In the implementation block
@property (nonatomic,copy) id clearAction;                      //@synthesize clearFinalAction=_clearFinalAction - In the implementation block
-(void)invalidateCachedLayoutData;
-(double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3 ;
-(id)clearPossibleAction;
-(void)setClearPossibleAction:(id)arg1 ;
-(Class)reusableViewClass;
-(id)clearAction;
-(void)setClearAction:(id)arg1 ;
@end

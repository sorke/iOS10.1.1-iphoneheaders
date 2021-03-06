/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface CKDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(id)init;
-(void)dealloc;
-(void)performMigrationIfNecessary;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)globalIdentifierForChat:(id)arg1 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 ;
-(void)_handleDNDListChanged;
-(id)currentList;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/BulletinBoardPlugins/SMSBBPlugin.bundle/SMSBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBDataProvider <BBSectionIdentity>
@optional
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
-(id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
-(id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3;
-(id)clearedInfoForBulletins:(id)arg1;
-(id)sectionParameters;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 sizeConstraints:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)primaryAttachmentDataForRecordID:(id)arg1;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
-(float)attachmentAspectRatioForRecordID:(id)arg1;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
-(void)noteSectionInfoDidChange:(id)arg1;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
-(void)handleBulletinActionResponse:(id)arg1;
-(void)handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)syncsBulletinDismissal;
-(id)displayNameForFilterID:(id)arg1;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(id)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;

@required
-(id)sortDescriptors;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABAssistantSyncDelegate <NSObject>
@property (nonatomic,readonly) void* addressBook; 
@required
-(id)expectedSyncKeyPrefix;
-(long long)expectedTotalSyncedRecords;
-(BOOL)hasRecordsForFullSync;
-(BOOL)verifyChangeHistory;
-(BOOL)shouldSyncSADomainObject:(id)arg1;
-(id)newSADomainObjectFromABRecord:(void*)arg1;
-(void)deleteChangeHistoryToAnchor:(id)arg1;
-(CFArrayRef)copyAllRecordsForFullSync;
-(CFStringRef)fullSyncSnapshotProperty;
-(id)getAnchorOfLastDeletedChangeHistory;
-(void)copyChangeHistoryAfterAnchor:(id)arg1 changedIDs:(const _CFArray*)arg2 changeTypes:(const _CFArray*)arg3 sequenceNumbers:(const _CFArray*)arg4;
-(id)newSADomainObjectFromDeletedRecordID:(int)arg1;
-(id)newSADomainObjectFromABRecordID:(int)arg1;
-(void)setSyncKey:(id)arg1;
-(void*)addressBook;

@end

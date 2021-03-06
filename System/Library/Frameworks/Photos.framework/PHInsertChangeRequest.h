/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHInsertChangeRequest <PHChangeRequest>
@property (getter=isNew,readonly) BOOL new; 
@required
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(BOOL)canGenerateUUIDLocally;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(BOOL)isNew;

@end


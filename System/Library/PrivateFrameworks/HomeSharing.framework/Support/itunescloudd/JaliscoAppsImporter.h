/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase, NSNumber;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	NSNumber* _familyMemberStoreID;

}
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(BOOL)includeHiddenItems;
-(id)familyMemberStoreID;
@end


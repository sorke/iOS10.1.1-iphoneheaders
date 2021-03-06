/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDocument.h>

@class NSMutableArray;

@interface PDPresentation : OCDDocument {

	NSMutableArray* mSlideMasters;
	NSMutableArray* mNotesMasters;
	NSMutableArray* mSlides;
	NSMutableArray* mBulletBlips;
	CGSize mSlideSize;
	CGSize mNotesSize;
	BOOL mIsAutoPlay;
	BOOL mIsCommentsVisible;
	BOOL mIsLooping;
	BOOL mIsKiosk;
	NSMutableArray* mCommentAuthors;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isLooping;
-(CGSize)slideSize;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(id)bulletBlips;
-(unsigned)bulletBlipCount;
-(void)setSlideSize:(CGSize)arg1 ;
-(void)setNotesSize:(CGSize)arg1 ;
-(void)setIsCommentsVisible:(BOOL)arg1 ;
-(void)setIsLooping:(BOOL)arg1 ;
-(void)setIsKiosk:(BOOL)arg1 ;
-(void)addSlideMaster:(id)arg1 ;
-(unsigned long long)commentAuthorCount;
-(void)addCommentAuthor:(id)arg1 ;
-(void)cacheGraphicStylesForSlideBase:(id)arg1 ;
-(void)addSlide:(id)arg1 ;
-(void)addNotesMaster:(id)arg1 ;
-(unsigned)addBulletBlip:(id)arg1 ;
-(void)setIsAutoPlay:(BOOL)arg1 ;
-(id)commentAuthorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)slideCount;
-(id)slideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)slideMasterCount;
-(id)slideMasterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)notesMasterCount;
-(id)notesMasterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSlide:(id)arg1 ;
-(id)bulletBlipAtIndex:(int)arg1 ;
-(CGSize)notesSize;
-(BOOL)isAutoPlay;
-(BOOL)isCommentsVisible;
-(BOOL)isKiosk;
-(void)flushUnusedMastersAndLayouts;
-(void)ensureDefaultLayoutsForMasters;
-(void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2 ;
@end


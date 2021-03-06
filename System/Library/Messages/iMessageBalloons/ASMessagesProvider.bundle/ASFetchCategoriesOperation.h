/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <ASMessagesProvider/ASFetchCategoriesOperationProtocol.h>

@class NSArray, NSError, NSString;

@interface ASFetchCategoriesOperation : ISOperation <ISStoreURLOperationDelegate, ASFetchCategoriesOperationProtocol> {

	BOOL _excludesNearby;
	BOOL _excludesArtwork;
	NSArray* _promotedCategories;
	NSArray* _categories;
	NSString* _urlString;

}

@property (nonatomic,copy,readonly) NSString * urlString;                      //@synthesize urlString=_urlString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * promotedCategories;              //@synthesize promotedCategories=_promotedCategories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                      //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL excludesNearby;                            //@synthesize excludesNearby=_excludesNearby - In the implementation block
@property (nonatomic,readonly) BOOL excludesArtwork;                           //@synthesize excludesArtwork=_excludesArtwork - In the implementation block
-(id)initWithUrlString:(id)arg1 ;
-(BOOL)_excludesNearbyAppsForResponse:(id)arg1 ;
-(id)_promotedCategoriesForResponse:(id)arg1 ;
-(id)_categoriesForResponse:(id)arg1 ;
-(id)_categoryListUrlString;
-(NSArray *)promotedCategories;
-(BOOL)excludesArtwork;
-(BOOL)excludesNearby;
-(id)_categoriesForChildrenArray:(id)arg1 withResponse:(id)arg2 ;
-(id)_itemsForResponse:(id)arg1 withContentIds:(id)arg2 ;
-(id)init;
-(NSArray *)categories;
-(void)run;
-(NSString *)urlString;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end


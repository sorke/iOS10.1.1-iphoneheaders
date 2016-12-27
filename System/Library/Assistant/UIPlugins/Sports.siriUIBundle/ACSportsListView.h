/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary, UICollectionView, NSArray, SASportsLeague;

@interface ACSportsListView : UIView {

	NSDictionary* _domainViewForIdentifier;
	UICollectionView* _collectionView;
	NSArray* _domainObjects;
	NSArray* _domainObjectViews;
	SASportsLeague* _league;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainObjects;                 //@synthesize domainObjects=_domainObjects - In the implementation block
@property (nonatomic,readonly) NSArray * domainObjectViews;                  //@synthesize domainObjectViews=_domainObjectViews - In the implementation block
@property (nonatomic,readonly) SASportsLeague * league;                      //@synthesize league=_league - In the implementation block
-(NSArray *)domainObjectViews;
-(void)_updateDomainObjectViews;
-(void)setDomainObjects:(id)arg1 league:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)domainObjects;
-(SASportsLeague *)league;
@end

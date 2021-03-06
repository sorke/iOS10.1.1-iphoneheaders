/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <CarKitSettings/CRCollectionViewCell.h>
#import <CarKitSettings/CRApplicationDisplayable.h>

@class CRIconView, CRApplicationIcon, NSString;

@interface CRHomeScreenIconCell : CRCollectionViewCell <CRApplicationDisplayable> {

	BOOL _editingEnabled;
	CRIconView* _iconView;
	CRApplicationIcon* _applicationIcon;

}

@property (nonatomic,readonly) CRIconView * iconView;                                    //@synthesize iconView=_iconView - In the implementation block
@property (getter=isEditingEnabled,nonatomic,readonly) BOOL editingEnabled;              //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (nonatomic,__weak,readonly) CRApplicationIcon * applicationIcon;               //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)cellSizeForAvailableWidth:(double)arg1 columns:(long long)arg2 ;
-(void)setEditingEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureWithApplication:(id)arg1 visible:(BOOL)arg2 editImage:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(CRIconView *)iconView;
-(void)setEditingEnabled:(BOOL)arg1 ;
-(BOOL)isEditingEnabled;
-(CRApplicationIcon *)applicationIcon;
@end


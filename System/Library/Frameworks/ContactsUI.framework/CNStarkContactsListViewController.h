/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactListViewController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNStarkNoContentBannerView, AVExternalDevice, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate> {

	BOOL _limitedUI;
	CNStarkNoContentBannerView* _overlayView;
	AVExternalDevice* _externalDevice;

}

@property (nonatomic,retain) CNStarkNoContentBannerView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                     //@synthesize externalDevice=_externalDevice - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                        //@synthesize limitedUI=_limitedUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)limitedUI;
-(void)limitedUINotification:(id)arg1 ;
-(AVExternalDevice *)externalDevice;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)updateLimitedUI;
-(void)postMessageOverlayIfNecessary;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)setOverlayView:(CNStarkNoContentBannerView *)arg1 ;
-(CNStarkNoContentBannerView *)overlayView;
@end


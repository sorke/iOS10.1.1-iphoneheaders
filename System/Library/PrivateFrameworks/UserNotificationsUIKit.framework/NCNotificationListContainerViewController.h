/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationListContentObserver.h>

@class UIView, NCNotificationListViewController, NSString;

@interface NCNotificationListContainerViewController : UIViewController <NCNotificationListContentObserver> {

	UIView* _noNotificationsView;
	NCNotificationListViewController* _listViewController;

}

@property (nonatomic,readonly) NCNotificationListViewController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)contentChanged:(BOOL)arg1 ;
-(void)_addListViewToHierarchy;
-(void)_removeListViewFromHierarchy;
-(id)initWithNotificationListViewController:(id)arg1 ;
-(NCNotificationListViewController *)listViewController;
@end


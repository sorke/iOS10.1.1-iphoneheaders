/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, NSString;

@interface STKListDisplayAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewDidLoad;
-(id)newTopBar;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(id)_simToolkitListItems;
-(void)_selectListItem:(unsigned)arg1 ;
@end

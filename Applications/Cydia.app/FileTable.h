/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class Database;

@interface FileTable : CyteViewController <UITableViewDataSource, UITableViewDelegate> {

	Database* database_;
	MenesObjectHandle<Package, 0> package_;
	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSMutableArray, 0> files_;
	MenesObjectHandle<UITableView, 2> list_;

}
-(void)releaseSubviews;
-(id)navigationURL;
-(void)setPackage:(id)arg1 ;
-(void)reloadData;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(id)initWithDatabase:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIView, NSArray, NSString;

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UIView* _inspectedView;
	NSArray* _data;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * inspectedView;                //@synthesize inspectedView=_inspectedView - In the implementation block
@property (nonatomic,retain) NSArray * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)inspectView:(id)arg1 ;
-(void)setInspectedView:(UIView *)arg1 ;
-(void)createDataItems;
-(UIView *)inspectedView;
-(void)_sliderValueChanged:(id)arg1 ;
-(void)_visibleSwitchValueChanged:(id)arg1 ;
@end


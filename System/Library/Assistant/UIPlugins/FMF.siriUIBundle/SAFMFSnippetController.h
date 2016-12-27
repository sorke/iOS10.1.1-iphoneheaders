/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <FMF/RefreshControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSString, RefreshController, NSDictionary, UITableView, NSTimer;

@interface SAFMFSnippetController : SiriUISnippetViewController <RefreshControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL refreshingCancelled;
	BOOL displayShowAllRow;
	NSArray* locations;
	NSString* proximity;
	NSString* clientId;
	RefreshController* refreshController;
	double zoomLevel;
	NSDictionary* contextDict;
	UITableView* _tableView;
	NSTimer* _reloadTimer;

}

@property (assign,nonatomic) BOOL refreshingCancelled; 
@property (assign,nonatomic) BOOL displayShowAllRow; 
@property (nonatomic,retain) RefreshController * refreshController; 
@property (assign,nonatomic) double zoomLevel; 
@property (nonatomic,retain) NSTimer * reloadTimer;                              //@synthesize reloadTimer=_reloadTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * contextDict; 
@property (nonatomic,copy) NSString * clientId; 
@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController:(id)arg1 ;
-(RefreshController *)refreshController;
-(id)locationForEmail:(id)arg1 ;
-(void)setRefreshingCancelled:(BOOL)arg1 ;
-(CGSize)sizeForTable;
-(BOOL)hideMapInCell;
-(BOOL)isShowAllDisplayCell:(id)arg1 ;
-(NSTimer *)reloadTimer;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(BOOL)displayShowAllRow;
-(void)locationsUpdated:(id)arg1 ;
-(BOOL)refreshingCancelled;
-(void)reloadTableData;
-(void)setRefreshController:(RefreshController *)arg1 ;
-(void)setDisplayShowAllRow:(BOOL)arg1 ;
-(BOOL)showLocatingFriends;
-(NSDictionary *)contextDict;
-(void)setContextDict:(NSDictionary *)arg1 ;
-(id)proximityLocationsWithCoordinates;
-(void)refreshCancelled;
-(BOOL)allEmptyLocations;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(NSArray *)locations;
-(void)setZoomLevel:(double)arg1 ;
-(void)setProximity:(NSString *)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)proximity;
-(double)zoomLevel;
-(double)desiredHeight;
-(id)friends;
@end

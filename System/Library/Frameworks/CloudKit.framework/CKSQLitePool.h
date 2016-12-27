/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKSQLitePool : NSObject {

	BOOL _traced;
	BOOL _drainScheduled;
	/*^block*/id _factory;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _dbs;

}

@property (nonatomic,retain) NSMutableArray * dbs;                            //@synthesize dbs=_dbs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL drainScheduled;                             //@synthesize drainScheduled=_drainScheduled - In the implementation block
@property (nonatomic,readonly) id factory;                                    //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) BOOL traced;                                     //@synthesize traced=_traced - In the implementation block
-(id)factory;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_drain;
-(NSMutableArray *)dbs;
-(id)_openDatabaseWithError:(id*)arg1 ;
-(BOOL)traced;
-(id)_acquireDatabaseWithError:(id*)arg1 ;
-(void)_scheduleDrain;
-(void)setDbs:(NSMutableArray *)arg1 ;
-(BOOL)drainScheduled;
-(void)setDrainScheduled:(BOOL)arg1 ;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(void)releaseDatabase:(id)arg1 ;
-(id)acquireDatabase:(BOOL)arg1 ;
-(id)initWithFactory:(/*^block*/id)arg1 queueAttr:(id)arg2 ;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(void)closeAll;
-(BOOL)performWithDatabase:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)acquireDatabaseWithError:(id*)arg1 ;
-(void)setTraced:(BOOL)arg1 ;
-(void)_closeDatabase:(id)arg1 ;
@end

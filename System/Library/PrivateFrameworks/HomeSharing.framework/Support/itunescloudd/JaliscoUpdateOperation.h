/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoImporter, NSString, NSDictionary;

@interface JaliscoUpdateOperation : CloudLibraryOperation {

	long long _reason;
	JaliscoImporter* _importer;
	BOOL _initialImport;
	NSString* _powerEventBeginName;
	NSString* _powerEventEndName;
	NSDictionary* _powerEventPayload;

}

@property (getter=isInitialImport,nonatomic,readonly) BOOL initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) float updateProgress; 
@property (copy) NSString * powerEventBeginName;                                       //@synthesize powerEventBeginName=_powerEventBeginName - In the implementation block
@property (copy) NSString * powerEventEndName;                                         //@synthesize powerEventEndName=_powerEventEndName - In the implementation block
@property (copy) NSDictionary * powerEventPayload;                                     //@synthesize powerEventPayload=_powerEventPayload - In the implementation block
-(long long)localDatabaseRevision;
-(void)setInitialImport:(BOOL)arg1 ;
-(id)queryFilterPercentEscaped;
-(id)newImporter;
-(BOOL)preflightImport;
-(void)beginPerformUpdate;
-(void)endPerformUpdate;
-(void)handleSuccess:(long long)arg1 ;
-(unsigned)_serverDatabaseRevision:(unsigned)arg1 ;
-(BOOL)needsUpdateForTokens;
-(void)clearNeedsUpdateForTokens;
-(NSString *)powerEventBeginName;
-(void)setPowerEventBeginName:(NSString *)arg1 ;
-(NSString *)powerEventEndName;
-(void)setPowerEventEndName:(NSString *)arg1 ;
-(NSDictionary *)powerEventPayload;
-(void)setPowerEventPayload:(NSDictionary *)arg1 ;
-(void)cancel;
-(void)main;
-(id)initWithReason:(long long)arg1 ;
-(BOOL)includeHiddenItems;
-(BOOL)isInitialImport;
-(void)performUpdate;
-(void)setReason:(long long)arg1 ;
-(float)updateProgress;
@end

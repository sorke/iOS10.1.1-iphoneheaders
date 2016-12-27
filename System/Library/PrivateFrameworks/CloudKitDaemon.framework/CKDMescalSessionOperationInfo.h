/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	int _serverVersion;
	CKDMescalSession* _session;

}

@property (assign,nonatomic) int serverVersion;                       //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(CKDMescalSession *)arg1 ;
-(CKDMescalSession *)session;
-(int)serverVersion;
-(void)setServerVersion:(int)arg1 ;
@end

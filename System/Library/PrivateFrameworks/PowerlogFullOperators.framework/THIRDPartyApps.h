/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface THIRDPartyApps : NSObject {

	int wifiIn;
	int wifiOut;
	int cellIn;
	int cellOut;
	NSString* processName;

}

@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int wifiIn; 
@property (assign,nonatomic) int wifiOut; 
@property (assign,nonatomic) int cellIn; 
@property (assign,nonatomic) int cellOut; 
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(void)setWifiIn:(int)arg1 ;
-(void)setWifiOut:(int)arg1 ;
-(void)setCellIn:(int)arg1 ;
-(void)setCellOut:(int)arg1 ;
-(int)wifiIn;
-(int)wifiOut;
-(int)cellIn;
-(int)cellOut;
@end


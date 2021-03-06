/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd {

	NSArray* friends;
	NSArray* emails;
	NSString* proximity;
	CLLocation* currentLocation;
	CLLocation* requestedLocation;
	NSString* requestedLocationLabel;
	NSNumber* atRequestedLocation;
	NSString* clientId;

}

@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * requestedLocation; 
@property (nonatomic,copy) NSString * requestedLocationLabel; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSString * clientId; 
-(id)requestedLocationDictionary;
-(NSString *)requestedLocationLabel;
-(id)friendForHandle:(id)arg1 ;
-(id)allFriendsHandles;
-(void)setRequestedLocationLabel:(NSString *)arg1 ;
-(id)currentLocationDictionary;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(void)setProximity:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(CLLocation *)requestedLocation;
-(void)setRequestedLocation:(CLLocation *)arg1 ;
-(NSArray *)emails;
-(id)headers;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)proximity;
-(id)jsonBodyDictionary;
-(void)setEmails:(NSArray *)arg1 ;
-(NSArray *)friends;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface HUUserManagementUserCell : UITableViewCell {

	NSString* _displayName;
	NSString* _invitationStatusString;

}

@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * invitationStatusString;              //@synthesize invitationStatusString=_invitationStatusString - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setInvitationStatusString:(NSString *)arg1 ;
-(NSString *)invitationStatusString;
@end


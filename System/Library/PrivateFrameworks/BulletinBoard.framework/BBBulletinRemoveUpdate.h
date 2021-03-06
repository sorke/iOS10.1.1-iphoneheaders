/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {

	BOOL _shouldSync;

}

@property (nonatomic,readonly) BOOL shouldSync;              //@synthesize shouldSync=_shouldSync - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)typeDescription;
-(BOOL)shouldSync;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
@end


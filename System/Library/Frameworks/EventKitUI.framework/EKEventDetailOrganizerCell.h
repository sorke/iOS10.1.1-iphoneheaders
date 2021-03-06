/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKIdentityProtocol;
@class NSString, EKUILabeledAvatarView, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	EKUILabeledAvatarView* _organizerView;
	UILabel* _organizerLabel;
	UILabel* _titleView;
	id<EKIdentityProtocol> _organizerOverride;

}
+(double)detailsCellDefaultHeight;
-(id)_titleView;
-(BOOL)update;
-(BOOL)shouldDisplayForEvent;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
-(id)_organizerView;
-(id)_organizerLabel;
@end


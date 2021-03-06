/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteTableViewCell.h>
#import <Cydia/CyteTableViewCellDelegate.h>

@interface SectionCell : CyteTableViewCell <CyteTableViewCellDelegate> {

	MenesObjectHandle<NSString, 0> basic_;
	MenesObjectHandle<NSString, 0> section_;
	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSString, 0> count_;
	MenesObjectHandle<UIImage, 0> icon_;
	MenesObjectHandle<UISwitch, 0> switch_;
	char editing_;

}
-(void)drawContentRect:(CGRect)arg1 ;
-(void)onSwitch:(id)arg1 ;
-(void)setSection:(id)arg1 editing:(char)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
@end


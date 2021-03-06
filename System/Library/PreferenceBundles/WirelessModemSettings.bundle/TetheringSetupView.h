/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class WiFiSetupView, BluetoothSetupView, USBSetupView;

@interface TetheringSetupView : UIView <PSHeaderFooterView> {

	BOOL _showWifiView;
	WiFiSetupView* _wifiView;
	BluetoothSetupView* _btView;
	USBSetupView* _usbView;

}
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 inTableView:(id)arg2 shouldSetSize:(BOOL)arg3 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end


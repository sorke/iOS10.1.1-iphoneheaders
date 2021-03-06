/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBStatusBarStyleOverridesSettings : SBUISettings {

	BOOL _exclusive;
	BOOL _showsWhenForeground;
	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;                     //@synthesize styleOverride=_styleOverride - In the implementation block
@property (assign,nonatomic) BOOL exclusive;                        //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) BOOL showsWhenForeground;              //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
+(id)settingsControllerModule;
-(void)setStyleOverride:(int)arg1 ;
-(BOOL)exclusive;
-(BOOL)showsWhenForeground;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
-(void)setDefaultValues;
-(int)styleOverride;
-(void)setExclusive:(BOOL)arg1 ;
@end


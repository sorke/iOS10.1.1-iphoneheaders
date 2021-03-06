/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLAppearance : NSObject <NSSecureCoding> {

	double _topInset;
	double _bottomInset;
	unsigned long long _style;
	unsigned long long _presentationMode;

}

@property (readonly) double topInset;                                  //@synthesize topInset=_topInset - In the implementation block
@property (readonly) double bottomInset;                               //@synthesize bottomInset=_bottomInset - In the implementation block
@property (readonly) unsigned long long style;                         //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)style;
-(double)topInset;
-(id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 style:(unsigned long long)arg3 presentationMode:(unsigned long long)arg4 ;
-(double)bottomInset;
-(unsigned long long)presentationMode;
@end


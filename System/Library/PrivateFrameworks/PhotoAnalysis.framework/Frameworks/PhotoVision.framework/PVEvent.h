/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PVEvent : NSObject {

	NSString* _name;
	id _details;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) id details;                   //@synthesize details=_details - In the implementation block
+(id)eventWithName:(id)arg1 details:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(id)details;
-(id)initWithName:(id)arg1 details:(id)arg2 ;
@end


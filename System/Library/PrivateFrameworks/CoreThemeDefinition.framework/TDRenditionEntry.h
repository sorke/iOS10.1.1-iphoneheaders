/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject {

	renditionkeytoken* key;
	renditionkeytoken stackKey[17];
	const renditionkeyfmt* keyFormat;
	NSData* assetData;
	TDRenditionSpec* renditionSpec;

}

@property (nonatomic,retain,readonly) TDRenditionSpec * renditionSpec; 
@property (nonatomic,retain,readonly) NSData * assetData; 
-(NSData *)assetData;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(TDRenditionSpec *)renditionSpec;
-(id)initWithKey:(const renditionkeytoken*)arg1 keyFormat:(const renditionkeyfmt*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4 ;
@end


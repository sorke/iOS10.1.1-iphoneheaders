/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSDictionary, NSString;

@interface WBUFormsMetadataProviderWK2 : NSObject <WBSFormsMetadataProvider> {

	NSDictionary* _frameHandleToForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrameHandleToFormsDictionary:(id)arg1 ;
@end


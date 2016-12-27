/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetDefrosterSettingsInCarIntentExport.h>

@class NSNumber, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enable; 
@property (nonatomic,readonly) long long defroster; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)enable;
-(void)setEnable:(NSNumber *)arg1 ;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(long long)defroster;
-(void)setDefroster:(long long)arg1 ;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABAssistantCache : NSObject
+(id)cachePathWithAddressBook:(void*)arg1 ;
+(BOOL)removeUpdatesForPersonIdentifier:(id)arg1 withAddressBook:(void*)arg2 ;
+(BOOL)addUpdate:(id)arg1 forPersonIdentifier:(id)arg2 withAddressBook:(void*)arg3 ;
+(id)updatesForPersonIdentifier:(id)arg1 withAddressBook:(void*)arg2 ;
+(BOOL)removeAllUpdatesWithAddressBook:(void*)arg1 ;
@end

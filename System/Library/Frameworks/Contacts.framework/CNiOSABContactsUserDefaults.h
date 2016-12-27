/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactsUserDefaults.h>

@class NSMutableDictionary, NSCache, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {

	NSMutableDictionary* _observerCountPerKey;
	NSCache* _valueCache;
	CNiOSABContactsUserDefaultsABWrapper* _abWrapper;

}

@property (nonatomic,copy) NSMutableDictionary * observerCountPerKey;                         //@synthesize observerCountPerKey=_observerCountPerKey - In the implementation block
@property (nonatomic,retain) NSCache * valueCache;                                            //@synthesize valueCache=_valueCache - In the implementation block
@property (nonatomic,readonly) CNiOSABContactsUserDefaultsABWrapper * abWrapper;              //@synthesize abWrapper=_abWrapper - In the implementation block
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(long long)sortOrder;
-(id)countryCode;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)initWithABWrapper:(id)arg1 ;
-(NSCache *)valueCache;
-(NSMutableDictionary *)observerCountPerKey;
-(void)_registerObserverForKey:(id)arg1 ;
-(void)_unregisterObserverForKey:(id)arg1 ;
-(CNiOSABContactsUserDefaultsABWrapper *)abWrapper;
-(void)setObserverCountPerKey:(NSMutableDictionary *)arg1 ;
-(void)setValueCache:(NSCache *)arg1 ;
-(long long)displayNameOrder;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(void)flushCache;
@end

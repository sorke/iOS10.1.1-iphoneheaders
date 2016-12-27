/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _externalIdentifierString;

}

@property (nonatomic,readonly) NSString * _cnui_displayName; 
@property (getter=_cnui_isFacebook,nonatomic,readonly) BOOL _cnui_facebook; 
@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;                 //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(BOOL)_cnui_requestRefreshWithUserAction:(BOOL)arg1 ;
+(void)_cnui_canRequestRefreshWithCompletion:(/*^block*/id)arg1 ;
+(id)_cnui_accountStore;
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
+(id)localAccount;
-(BOOL)_cnui_isFacebook;
-(NSString *)_cnui_displayName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(NSString *)externalIdentifierString;
@end

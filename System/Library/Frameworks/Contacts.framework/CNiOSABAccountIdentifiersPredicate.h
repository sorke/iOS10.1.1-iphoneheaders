/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSAccountPredicate.h>

@class NSArray, NSString;

@interface CNiOSABAccountIdentifiersPredicate : CNPredicate <CNiOSAccountPredicate> {

	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifiers:(id)arg1 ;
-(CFArrayRef)cn_copyAccountsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(NSArray *)identifiers;
-(id)initWithPredicate:(id)arg1 ;
@end

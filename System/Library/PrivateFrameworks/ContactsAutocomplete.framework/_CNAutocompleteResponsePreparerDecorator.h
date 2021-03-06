/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@class CNAutocompleteQueryResponsePreparer;

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer {

	CNAutocompleteQueryResponsePreparer* _preparer;

}

@property (readonly) CNAutocompleteQueryResponsePreparer * preparer;              //@synthesize preparer=_preparer - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id)arg1 ;
-(void)setMatchingPriorityResultsPromise:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 ;
-(CNAutocompleteQueryResponsePreparer *)preparer;
@end


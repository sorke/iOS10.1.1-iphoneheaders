/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPComponentReader.h>

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader {

	TSPDescriptionGenerator* _descriptionGenerator;

}
-(id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4 ;
-(BOOL)shouldProceedParsingOnFailure;
-(BOOL)shouldValidateComponentsOfInMemoryObjects;
-(id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const MessageInfo*)arg2 message:(auto_ptr<google::protobuf::Message>*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >*)arg5 unknownContent:(id)arg6 ;
-(id)unknownObjectUnarchiverArchiveInfo:(const ArchiveInfo*)arg1 stream:(DispatchDataInputStream*)arg2 ;
-(id)init;
-(void)read;
@end


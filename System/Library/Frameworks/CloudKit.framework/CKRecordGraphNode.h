/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	NSMutableSet* _indegrees;
	CKRecord* _record;

}

@property (nonatomic,copy) NSMutableSet * edges;                           //@synthesize edges=_edges - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * indegrees;              //@synthesize indegrees=_indegrees - In the implementation block
@property (nonatomic,readonly) unsigned long long indegree; 
@property (nonatomic,retain) CKRecord * record;                            //@synthesize record=_record - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)edges;
-(NSMutableSet *)indegrees;
-(unsigned long long)indegree;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(void)setRecord:(CKRecord *)arg1 ;
@end

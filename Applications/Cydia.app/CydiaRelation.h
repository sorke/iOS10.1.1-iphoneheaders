/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface CydiaRelation : NSObject {

	MenesObjectHandle<NSString, 0> relationship_;
	MenesObjectHandle<NSMutableArray, 0> clauses_;

}
+(id)_attributeKeys;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)clauses;
-(void)addClause:(id)arg1 ;
-(id)attributeKeys;
-(id)relationship;
-(id)initWithIterator:(DepIterator*)arg1 ;
@end


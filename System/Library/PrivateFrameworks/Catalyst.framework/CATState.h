/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface CATState : NSObject {

	NSMutableDictionary* mTranstionByTriggeringEvent;
	NSString* _name;
	SEL _enterAction;
	SEL _exitAction;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL enterAction;                     //@synthesize enterAction=_enterAction - In the implementation block
@property (assign,nonatomic) SEL exitAction;                      //@synthesize exitAction=_exitAction - In the implementation block
+(id)new;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 ;
-(id)transitionWithTriggeringEvent:(id)arg1 ;
-(SEL)enterAction;
-(void)setEnterAction:(SEL)arg1 ;
-(void)setExitAction:(SEL)arg1 ;
-(SEL)exitAction;
@end


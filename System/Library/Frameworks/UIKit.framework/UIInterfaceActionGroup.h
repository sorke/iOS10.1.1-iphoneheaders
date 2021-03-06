/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIInterfaceAction, NSPointerArray, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying> {

	NSArray* _actions;
	UIInterfaceAction* _preferredAction;
	NSPointerArray* _weakDisplayPropertyObservers;
	NSString* _title;
	NSArray* _actionsBySection;
	UIInterfaceActionVisualStyle* _visualStyle;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                     //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionsBySection;                                                                        //@synthesize actionsBySection=_actionsBySection - In the implementation block
@property (nonatomic,readonly) CGSize leadingImageLayoutSize;                                                                     //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (nonatomic,readonly) CGSize trailingImageLayoutSize;                                                                    //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                                                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) UIInterfaceAction * preferredAction;                                                                 //@synthesize preferredAction=_preferredAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionGroupWithActions:(id)arg1 ;
+(BOOL)changedProperties:(id)arg1 containsAny:(id)arg2 ;
+(id)actionGroupWithActionsBySection:(id)arg1 ;
-(NSString *)description;
-(NSArray *)actions;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_visualStyle;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(UIInterfaceAction *)preferredAction;
-(void)setPreferredAction:(UIInterfaceAction *)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)leadingImageLayoutSize;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)trailingImageLayoutSize;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(id)initWithTitle:(id)arg1 actionsBySection:(id)arg2 ;
-(void)_beginObservingActions;
-(void)_reloadImageLayoutSizesUsingExistingActionImages;
-(id)_deepCopyOfActionsBySection;
-(void)_updateActionImageLayoutSizes;
-(void)_performWithActionObservingDisabled:(/*^block*/id)arg1 ;
-(void)_endObservingActions;
-(void)_addActionGroupDisplayPropertyObserver:(id)arg1 ;
-(void)_removeActionGroupDisplayPropertyObserver:(id)arg1 ;
-(NSArray *)actionsBySection;
@end


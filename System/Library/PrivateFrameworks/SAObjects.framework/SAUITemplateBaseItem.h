/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAUITemplateItem.h>

@class NSArray, SAUITemplateEdgeInsets, NSString;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>

@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)baseItem;
-(void)setPadding:(SAUITemplateEdgeInsets *)arg1 ;
-(SAUITemplateEdgeInsets *)padding;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(NSArray *)arg1 ;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(SAUITemplateEdgeInsets *)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1 ;
-(NSArray *)presentationOptions;
-(void)setPresentationOptions:(NSArray *)arg1 ;
@end


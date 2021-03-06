/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL isFunction; 
@property (assign,nonatomic) BOOL isUndefined; 
@property (assign,nonatomic) BOOL isNull; 
@property (assign,nonatomic) BOOL isBoolean; 
@property (assign,nonatomic) BOOL isInteger; 
@property (assign,nonatomic) BOOL isNumber; 
@property (assign,nonatomic) BOOL isString; 
@property (assign,nonatomic) BOOL isObject; 
@property (assign,nonatomic) BOOL isSymbol; 
-(BOOL)isObject;
-(void)setIsFunction:(BOOL)arg1 ;
-(void)setIsUndefined:(BOOL)arg1 ;
-(void)setIsNull:(BOOL)arg1 ;
-(void)setIsBoolean:(BOOL)arg1 ;
-(void)setIsInteger:(BOOL)arg1 ;
-(void)setIsNumber:(BOOL)arg1 ;
-(void)setIsString:(BOOL)arg1 ;
-(void)setIsObject:(BOOL)arg1 ;
-(void)setIsSymbol:(BOOL)arg1 ;
-(id)initWithIsFunction:(BOOL)arg1 isUndefined:(BOOL)arg2 isNull:(BOOL)arg3 isBoolean:(BOOL)arg4 isInteger:(BOOL)arg5 isNumber:(BOOL)arg6 isString:(BOOL)arg7 isObject:(BOOL)arg8 isSymbol:(BOOL)arg9 ;
-(BOOL)isFunction;
-(BOOL)isInteger;
-(BOOL)isSymbol;
-(BOOL)isBoolean;
-(BOOL)isString;
-(BOOL)isNull;
-(BOOL)isUndefined;
-(BOOL)isNumber;
@end


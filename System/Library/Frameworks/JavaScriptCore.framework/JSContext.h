/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSVirtualMachine, JSWrapperMap, RWIProtocolInspector, JSValue, NSString;

@interface JSContext : NSObject {

	JSVirtualMachine* m_virtualMachine;
	OpaqueJSContextRef m_context;
	JSWrapperMap* m_wrapperMap;
	Strong<JSC::JSObject>* m_exception;
	/*^block*/id exceptionHandler;

}

@property (nonatomic,readonly) RWIProtocolInspector * _inspector; 
@property (retain,readonly) JSWrapperMap * wrapperMap; 
@property (readonly) JSValue * globalObject; 
@property (retain) JSValue * exception; 
@property (copy) id exceptionHandler; 
@property (readonly) JSVirtualMachine * virtualMachine; 
@property (copy) NSString * name; 
+(id)currentCallee;
+(id)currentArguments;
+(id)contextWithJSGlobalContextRef:(OpaqueJSContextRef)arg1 ;
+(id)currentContext;
+(id)currentThis;
-(RWIProtocolInspector *)_inspector;
-(void)setException:(JSValue *)arg1 ;
-(JSValue *)exception;
-(id)exceptionHandler;
-(JSWrapperMap *)wrapperMap;
-(BOOL)_remoteInspectionEnabled;
-(BOOL)_includesNativeCallStackWhenReportingExceptions;
-(void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1 ;
-(CFRunLoopRef)_debuggerRunLoop;
-(void)notifyException:(OpaqueJSValueRef)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(BOOL)boolFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)beginCallbackWithData:(CallbackData*)arg1 calleeValue:(OpaqueJSValueRef)arg2 thisValue:(OpaqueJSValueRef)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue*)arg5 ;
-(void)endCallbackWithData:(CallbackData*)arg1 ;
-(id)wrapperForObjCObject:(id)arg1 ;
-(id)wrapperForJSObject:(OpaqueJSValueRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)_setDebuggerRunLoop:(CFRunLoopRef)arg1 ;
-(void)_setRemoteInspectionEnabled:(BOOL)arg1 ;
-(id)evaluateScript:(id)arg1 withSourceURL:(id)arg2 ;
-(id)evaluateScript:(id)arg1 ;
-(JSValue *)globalObject;
-(JSVirtualMachine *)virtualMachine;
-(OpaqueJSContextRef)JSGlobalContextRef;
-(id)valueFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)setExceptionHandler:(id)arg1 ;
-(id)initWithVirtualMachine:(id)arg1 ;
@end

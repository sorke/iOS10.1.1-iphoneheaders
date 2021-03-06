/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARFormatter : NSObject {

	shared_ptr<SpeechITN>* _itn;

}
+(void)initialize;
+(BOOL)supportedByQuasarConfig:(id)arg1 ;
-(id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3 ;
-(id)initWithQuasarConfig:(id)arg1 ;
-(id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3 ;
-(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)formatWords:(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getOrthography:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
@end


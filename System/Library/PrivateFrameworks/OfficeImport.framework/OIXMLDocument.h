/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode {

	OIXMLElement* _rootElement;
	NSString* _version;
	NSString* _encoding;

}
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(id)arg1 ;
-(id)rootElement;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(id)initWithRootElement:(id)arg1 ;
-(void)setCharacterEncoding:(id)arg1 ;
-(void)setRootElement:(id)arg1 ;
-(id)createMutableXMLString;
-(id)contentString;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {

	WebResource* cachedMainResource;
	NSArray* cachedSubresources;
	NSArray* cachedSubframeArchives;
	RefPtr<WebCore::LegacyWebArchive>* coreArchive;

}
+(void)initialize;
-(id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(LegacyWebArchive*)coreArchive;
-(void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(id)init;
-(void)dealloc;
@end


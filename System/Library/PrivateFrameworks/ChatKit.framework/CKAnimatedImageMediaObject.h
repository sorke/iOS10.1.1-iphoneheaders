/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
+(id)UTITypes;
+(Class)__ck_attachmentItemClass;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)needsAnimation;
-(id)generateThumbnailsForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 orientation:(char)arg3 ;
-(/*^block*/id)imageEdgeEnhancementBlockIfNecessary;
-(id)notificationCenter;
-(id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 ;
-(id)animatedImageForWidth:(double)arg1 ;
-(void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
@end

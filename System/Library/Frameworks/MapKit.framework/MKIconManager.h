/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKIconManager : NSObject
+(id)_iconManager;
+(void)setDiskCacheURL:(id)arg1 ;
+(void)setUseSharedCaches;
+(CGColorRef)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(BOOL)arg3 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 isCarplay:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 interactive:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 isCarplay:(BOOL)arg10 ;
+(void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

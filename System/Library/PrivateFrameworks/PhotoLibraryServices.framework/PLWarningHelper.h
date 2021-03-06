/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PLWarningHelper : NSObject {

	NSArray* __assets;
	NSArray* __additionalPhotoStreamAssets;
	NSString* __clientName;
	long long __style;

}

@property (setter=_setAssets:,nonatomic,retain) NSArray * _assets;                                                        //@synthesize _assets=__assets - In the implementation block
@property (setter=_setAdditionalPhotoStreamAssets:,nonatomic,retain) NSArray * _additionalPhotoStreamAssets;              //@synthesize _additionalPhotoStreamAssets=__additionalPhotoStreamAssets - In the implementation block
@property (setter=_setClientName:,nonatomic,retain) NSString * _clientName;                                               //@synthesize _clientName=__clientName - In the implementation block
@property (assign,setter=_setStyle:,nonatomic) long long _style;                                                          //@synthesize _style=__style - In the implementation block
+(void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7 ;
+(id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inPhotoStreamCount:(long long)arg2 iniPhotoCount:(long long)arg3 inSomeAlbumCount:(long long)arg4 affectedLocalAlbumsCount:(long long)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(long long)arg7 ;
+(void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6 ;
+(id)allWarningMessageCombinations;
+(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7 ;
+(void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(long long*)arg2 forAssets:(id)arg3 ;
+(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7 ;
-(void)dealloc;
-(long long)_style;
-(void)_setStyle:(long long)arg1 ;
-(void)_setAdditionalPhotoStreamAssets:(id)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 ;
-(id)_cloudSharedWarningTextForAssets:(id)arg1 ;
-(NSArray *)_additionalPhotoStreamAssets;
-(id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3 ;
-(NSString *)_clientName;
-(NSArray *)_assets;
-(void)_setAssets:(id)arg1 ;
@end


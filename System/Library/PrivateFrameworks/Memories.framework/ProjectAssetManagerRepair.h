/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ProjectAssetManagerRepair : NSObject {

	unsigned long long _numberOfBrokenEditItems;
	unsigned long long _numberOfRepairedEditItems;
	unsigned long long _numberOfUnrepairedEditItems;
	unsigned long long _numberOfOfflineMovies;

}

@property (assign,nonatomic) unsigned long long numberOfBrokenEditItems;                  //@synthesize numberOfBrokenEditItems=_numberOfBrokenEditItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRepairedEditItems;                //@synthesize numberOfRepairedEditItems=_numberOfRepairedEditItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfUnrepairedEditItems;              //@synthesize numberOfUnrepairedEditItems=_numberOfUnrepairedEditItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOfflineMovies;                    //@synthesize numberOfOfflineMovies=_numberOfOfflineMovies - In the implementation block
-(id)description;
-(unsigned long long)numberOfBrokenEditItems;
-(unsigned long long)numberOfUnrepairedEditItems;
-(unsigned long long)numberOfRepairedEditItems;
-(unsigned long long)numberOfOfflineMovies;
-(void)setNumberOfBrokenEditItems:(unsigned long long)arg1 ;
-(void)setNumberOfRepairedEditItems:(unsigned long long)arg1 ;
-(void)setNumberOfUnrepairedEditItems:(unsigned long long)arg1 ;
-(void)setNumberOfOfflineMovies:(unsigned long long)arg1 ;
@end


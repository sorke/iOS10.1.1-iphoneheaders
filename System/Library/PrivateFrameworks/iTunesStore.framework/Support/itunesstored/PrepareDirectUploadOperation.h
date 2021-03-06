/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class DirectUploadRequest;

@interface PrepareDirectUploadOperation : ISOperation {

	/*^block*/id _outputBlock;
	DirectUploadRequest* _request;

}

@property (copy) id outputBlock; 
-(id)_uploadURL;
-(id)_newURLRequestWithURL:(id)arg1 ;
-(void)run;
-(id)initWithRequest:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SVViewOptionsHeaderView, UIScrollView;


@protocol SVFilesChildViewController <NSObject>
@property (nonatomic,readonly) SVViewOptionsHeaderView * viewOptionsHeaderView; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(SVViewOptionsHeaderView *)viewOptionsHeaderView;
-(id)showDownloadProgressForItem:(id)arg1;
-(void)cancelDownloadProgressForItem:(id)arg1;
-(void)scrollItemToVisible:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)flashToEmphasizeItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(UIScrollView *)scrollView;

@end

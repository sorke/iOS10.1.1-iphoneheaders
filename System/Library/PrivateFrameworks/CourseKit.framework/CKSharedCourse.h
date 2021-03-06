/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, UIImage;

@interface CKSharedCourse : NSManagedObject

@property (nonatomic,copy) NSString * courseID; 
@property (nonatomic,retain) NSNumber * managedClassID; 
@property (assign,nonatomic) long long enrollmentType; 
@property (nonatomic,copy) NSString * shortName; 
@property (nonatomic,copy) NSString * longName; 
@property (nonatomic,copy) NSString * institutionName; 
@property (nonatomic,retain) UIImage * courseCover; 
@property (nonatomic,copy) NSString * courseCoverChecksum; 
-(void)setShortName:(NSString *)arg1 ;
-(void)setCourseID:(NSString *)arg1 ;
-(void)setManagedClassID:(NSNumber *)arg1 ;
-(void)setEnrollmentType:(long long)arg1 ;
-(void)setLongName:(NSString *)arg1 ;
-(void)setInstitutionName:(NSString *)arg1 ;
-(void)setCourseCover:(UIImage *)arg1 ;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface YTPersistentVideoList : NSObject
{
    NSString *_categoryName;
    NSMutableArray *_videos;
}

+ (id)persistPathWithCategoryName:(id)arg1;
- (id)initWithCategoryName:(id)arg1;
- (void)dealloc;
- (void)persist;
- (void)removeFromDisk;
- (id)videos;
- (void)addVideo:(id)arg1;

@end


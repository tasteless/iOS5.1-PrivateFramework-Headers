/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, SFUZipArchive;

@interface CPBundleResourcePackage : NSObject
{
    SFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

- (id)initWithZipArchive:(id)arg1;
- (void)dealloc;
- (id)entryWithName:(id)arg1;

@end


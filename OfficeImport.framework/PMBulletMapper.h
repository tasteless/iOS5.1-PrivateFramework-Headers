/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADParagraphProperties;

@interface PMBulletMapper : CMMapper
{
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    int mFontSize;
}

+ (id)stringForIndex:(int)arg1 withFormat:(int)arg2;
- (id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3;
- (void)dealloc;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end


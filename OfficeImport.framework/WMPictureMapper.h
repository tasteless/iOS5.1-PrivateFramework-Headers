/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMDrawableMapper.h>

@class WDPicture;

@interface WMPictureMapper : CMDrawableMapper
{
    WDPicture *wdPicture;
}

- (id)initWithWDPicture:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)setBoundingBox;

@end


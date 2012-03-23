/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaEntityCellConfiguration.h>

@interface IUAlbumCellConfiguration : IUMediaEntityCellConfiguration
{
    BOOL _artistSpecified;
    BOOL _isCloud;
}

+ (float)rowHeightForGlobalContext:(id)arg1;
- (void)reloadStrings;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (id)newImageRequestWithMediaEntity:(id)arg1;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (struct CGSize)artworkSize;
- (id)init;

@end


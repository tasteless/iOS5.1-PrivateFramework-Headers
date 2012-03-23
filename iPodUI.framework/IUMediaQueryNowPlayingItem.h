/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPAVItem.h"

@class MPMediaItem;

@interface IUMediaQueryNowPlayingItem : MPAVItem
{
    MPMediaItem *_mediaItem;
}

+ (id)_imageCache;
+ (void)setDefaultScaleMode:(unsigned int)arg1;
+ (unsigned int)defaultScaleMode;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)_updateRentalsPlistForFinish;
- (id)_chapterTitleForTime:(double)arg1;
- (id)_newTimeMarkersForChapterType:(int)arg1;
- (unsigned long long)persistentID;
- (void)setRating:(float)arg1;
- (float)userRating;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1;
- (void)notePlaybackFinishedByHittingEnd;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (void)pushBookmarkingTimesToCloud;
- (BOOL)wantsSubtitles;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setSubtitleTrackID:(unsigned int)arg1;
- (void)setAlternateAudioTrackID:(unsigned int)arg1;
- (unsigned int)type;
- (id)titlesForTime:(double)arg1;
- (BOOL)useEmbeddedChapterData;
- (id)urlTimeMarkers;
- (void)updateAttributesForDefaultsChange:(id)arg1;
- (void)setupPlaybackInfo;
- (double)playbackCheckpointCurrentTime;
- (id)mainTitle;
- (id)imageCacheRequestWithSize:(struct CGSize)arg1 time:(double)arg2;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDisplayableText;
- (id)displayableText;
- (float)defaultPlaybackRate;
- (id)genre;
- (BOOL)isStreamable;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (double)durationFromExternalMetadata;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)composer;
- (id)chapterTimeMarkers;
- (id)artworkTimeMarkers;
- (id)artworkMIMEType;
- (id)artworkImageData;
- (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (id)albumArtist;
- (id)artist;
- (BOOL)allowAutoChangingScaleModeToFill;
- (id)album;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (void)loadAssetAndPlayerItem;
- (id)description;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

@end


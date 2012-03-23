/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMediaItem, NSString;

@interface IUTableCellConfiguration : NSObject
{
    struct CGSize _backgroundSize;
    int _cacheTag;
    id _globalContext;
    BOOL _isNowPlaying;
    struct CGSize _layoutSize;
    struct UIEdgeInsets _selectionEdgeInsets;
    unsigned int _ignoresLeftIndentWhenEditing:1;
    unsigned int _isDeleteConfirmationVisible:1;
    unsigned int _needsDisplay:1;
    unsigned int _hasDownloadProgress:1;
    unsigned int _downloadable:1;
}

+ (BOOL)showsUntruncationCallout;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (float)minimumRowHeight;
+ (BOOL)drawsRowsInAlternateStyle;
+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets; // @synthesize selectionEdgeInsets=_selectionEdgeInsets;
@property(nonatomic) BOOL isNowPlaying; // @synthesize isNowPlaying=_isNowPlaying;
@property(nonatomic, getter=isDownloadable) BOOL downloadable;
@property(nonatomic) BOOL hasDownloadProgress;
@property(readonly, nonatomic) MPMediaItem *mediaItem;
@property(nonatomic) BOOL ignoresLeftIndentWhenEditing;
@property(nonatomic) BOOL isDeleteConfirmationVisible;
- (struct CGSize)offsetForLabelAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *untruncationCalloutString;
- (id)untruncationCalloutStringWithLinesByStringIndexes:(id)arg1;
@property(readonly, nonatomic) BOOL showsUntruncationCallout;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
@property(nonatomic) BOOL needsDisplay;
@property(retain, nonatomic) id globalContext;
- (void)reloadData;
@property(readonly, nonatomic) unsigned int numberOfLabels;
@property(readonly, nonatomic) unsigned int numberOfImages;
- (void)invalidateDynamicTrackCaches;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (int)lineBreakModeForLabelAtIndex:(unsigned int)arg1;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)backgroundColorForImageAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForImageAtIndex:(unsigned int)arg1;
- (void)layoutSubviewLayoutViews:(id)arg1;
- (id)subviewLayoutViewsWithModifiers:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
@property(readonly, nonatomic) struct CGRect downloadProgressIndicatorFrame;
@property(readonly, nonatomic) struct CGRect downloadButtonFrame;
@property(readonly, nonatomic) id <NSObject> downloadableAsset;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)backgroundViewWithModifiers:(unsigned int)arg1;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (void)dealloc;

@end


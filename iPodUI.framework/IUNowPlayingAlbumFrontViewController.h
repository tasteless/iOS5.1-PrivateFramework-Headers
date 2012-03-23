/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPViewController.h"

#import "MPSwipableViewDelegate-Protocol.h"

@class MPImageCache, MPImageCacheRequest, MPPortraitInfoOverlay, MPReflectionImageView, MPSwipableView;

@interface IUNowPlayingAlbumFrontViewController : MPViewController <MPSwipableViewDelegate>
{
    MPReflectionImageView *_artworkView;
    MPSwipableView *_backstopView;
    MPImageCache *_imageCache;
    MPImageCacheRequest *_lastImageRequest;
    MPPortraitInfoOverlay *_overlayView;
}

- (void)_updateArtworkForTime:(double)arg1;
- (void)_removeOverlayView;
- (id)_overlayView;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap;
- (void)_handleSwipeRight;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (void)infoOverlayDidFinishHiding:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (int)statusBarStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)stopTicking;
- (void)startTicking;
- (void)setItem:(id)arg1;
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)arg1;
- (void)loadView;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)artworkDidZoomOut;
- (void)artworkWillZoomOut;
- (void)artworkDidZoomIn;
- (void)artworkWillZoomIn;
- (void)coverFlowWillTransitionOut:(BOOL)arg1;
- (void)coverFlowIsTransitioningOut:(BOOL)arg1;
- (void)coverFlowDidTransitionOut:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end


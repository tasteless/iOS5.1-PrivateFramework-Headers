/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/WAKResponder.h>

@class CALayer;

@interface WAKWindow : WAKResponder
{
    struct WKWindow *_wkWindow;
    CALayer *_hostLayer;
    struct TileCache *_tileCache;
    struct CGRect _cachedVisibleRect;
    CALayer *_rootLayer;
}

+ (id)_wrapperForWindowRef:(struct WKWindow *)arg1;
+ (void)setOrientationProvider:(id)arg1;
+ (BOOL)hasLandscapeOrientation;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)close;
- (id)firstResponder;
- (id)_newFirstResponderAfterResigning;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertScreenToBase:(struct CGPoint)arg1;
- (BOOL)isKeyWindow;
- (void)makeKeyWindow;
- (int)keyViewSelectionDirection;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (struct CGRect)frame;
- (void)setScreenSize:(struct CGSize)arg1;
- (struct CGSize)screenSize;
- (void)setAvailableScreenSize:(struct CGSize)arg1;
- (struct CGSize)availableScreenSize;
- (void)setScreenScale:(float)arg1;
- (float)screenScale;
- (void)setRootLayer:(id)arg1;
- (id)rootLayer;
- (struct WKWindow *)_windowRef;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 contentChange:(int *)arg2;
- (void)layoutTiles;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)tilesOpaque;
- (void)setTilesOpaque:(BOOL)arg1;
- (struct CGRect)visibleRect;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setTilingMode:(int)arg1;
- (int)tilingMode;
- (void)setTilingDirection:(int)arg1;
- (int)tilingDirection;
- (void)setZoomedOutTileScale:(float)arg1;
- (float)zoomedOutTileScale;
- (void)setCurrentTileScale:(float)arg1;
- (float)currentTileScale;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (BOOL)keepsZoomedOutTiles;
- (BOOL)hasPendingDraw;
- (void)willRotate;
- (void)didRotate;
- (void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1;
- (BOOL)useOrientationDependentFontAntialiasing;
- (id)hostLayer;
- (void)hostLayerSizeChanged;
- (void)setTileBordersVisible:(BOOL)arg1;
- (void)setTilePaintCountsVisible:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)dumpTiles;
- (id)description;
- (id)recursiveDescription;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/MFCocoaBrush.h>

@class MFCocoaBitmap;

@interface MFCocoaPatternBrush : MFCocoaBrush
{
    MFCocoaBitmap *m_pattern;
    BOOL m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (void)dealloc;
- (void)fillPath:(id)arg1:(id)arg2;

@end


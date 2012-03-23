/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class WDCharacterProperties, WDDocument;

@interface WDParagraphProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mCharacterPropertiesOverridden:1;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_4cb789cf *mOriginalProperties;
    CDStruct_4cb789cf *mTrackedProperties;
}

- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)document;
- (id)characterProperties;
- (id)mutableCharacterProperties;
- (void)setCharacterProperties:(id)arg1;
- (BOOL)isCharacterPropertiesOverridden;
- (void)clearChararacterProperties;
- (BOOL)isAnythingOverridden;
- (int)resolveMode;
- (void)setResolveMode:(int)arg1;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (id)baseStyle;
- (void)setBaseStyle:(id)arg1;
- (BOOL)isBaseStyleOverridden;
- (void)clearBaseStyle;
- (id)tableStyle;
- (void)setTableStyle:(id)arg1;
- (BOOL)isTableStyleOverridden;
- (BOOL)isPageBreakBefore;
- (void)setPageBreakBefore:(BOOL)arg1;
- (BOOL)isPageBreakBeforeOverridden;
- (unsigned char)listLevel;
- (void)setListLevel:(unsigned char)arg1;
- (BOOL)isListLevelOverridden;
- (id)list;
- (void)setList:(id)arg1;
- (BOOL)isListOverridden;
- (int)listIndex;
- (void)setListIndex:(int)arg1;
- (BOOL)isListIndexOverridden;
- (CDStruct_8835774c)dropCap;
- (void)setDropCap:(CDStruct_8835774c)arg1;
- (BOOL)isDropCapOverridden;
- (long)width;
- (void)setWidth:(long)arg1;
- (BOOL)isWidthOverridden;
- (long)height;
- (void)setHeight:(long)arg1;
- (BOOL)isHeightOverridden;
- (int)heightRule;
- (void)setHeightRule:(int)arg1;
- (BOOL)isHeightRuleOverridden;
- (long)verticalSpace;
- (void)setVerticalSpace:(long)arg1;
- (BOOL)isVerticalSpaceOverridden;
- (long)horizontalSpace;
- (void)setHorizontalSpace:(long)arg1;
- (BOOL)isHorizontalSpaceOverridden;
- (BOOL)wrap;
- (void)setWrap:(BOOL)arg1;
- (BOOL)isWrapOverridden;
- (int)horizontalAnchor;
- (void)setHorizontalAnchor:(int)arg1;
- (BOOL)isHorizontalAnchorOverridden;
- (int)verticalAnchor;
- (void)setVerticalAnchor:(int)arg1;
- (BOOL)isVerticalAnchorOverridden;
- (long)horizontalPosition;
- (void)setHorizontalPosition:(long)arg1;
- (BOOL)isHorizontalPositionOverridden;
- (long)verticalPosition;
- (void)setVerticalPosition:(long)arg1;
- (BOOL)isVerticalPositionOverridden;
- (BOOL)wrapCode;
- (void)setWrapCode:(BOOL)arg1;
- (BOOL)isWrapCodeOverridden;
- (BOOL)anchorLock;
- (void)setAnchorLock:(BOOL)arg1;
- (BOOL)isAnchorLockOverridden;
- (id)topBorder;
- (id)mutableTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)leftBorder;
- (id)mutableLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)bottomBorder;
- (id)mutableBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)rightBorder;
- (id)mutableRightBorder;
- (BOOL)isRightBorderOverridden;
- (id)betweenBorder;
- (id)mutableBetweenBorder;
- (BOOL)isBetweenBorderOverridden;
- (id)barBorder;
- (id)mutableBarBorder;
- (BOOL)isBarBorderOverridden;
- (id)shading;
- (id)mutableShading;
- (BOOL)isShadingOverridden;
- (unsigned short)spaceBefore;
- (void)setSpaceBefore:(unsigned short)arg1;
- (BOOL)isSpaceBeforeOverridden;
- (BOOL)spaceBeforeAuto;
- (void)setSpaceBeforeAuto:(BOOL)arg1;
- (BOOL)isSpaceBeforeAutoOverridden;
- (unsigned short)spaceAfter;
- (void)setSpaceAfter:(unsigned short)arg1;
- (BOOL)isSpaceAfterOverridden;
- (BOOL)spaceAfterAuto;
- (void)setSpaceAfterAuto:(BOOL)arg1;
- (BOOL)isSpaceAfterAutoOverridden;
- (short)lineSpacing;
- (void)setLineSpacing:(short)arg1;
- (BOOL)isLineSpacingOverridden;
- (int)lineSpacingRule;
- (void)setLineSpacingRule:(int)arg1;
- (BOOL)isLineSpacingRuleOverridden;
- (short)leftIndent;
- (void)setLeftIndent:(short)arg1;
- (BOOL)isLeftIndentOverridden;
- (short)rightIndent;
- (void)setRightIndent:(short)arg1;
- (BOOL)isRightIndentOverridden;
- (short)firstLineIndent;
- (void)setFirstLineIndent:(short)arg1;
- (BOOL)isFirstLineIndentOverridden;
- (int)justification;
- (void)setJustification:(int)arg1;
- (BOOL)isJustificationOverridden;
- (unsigned short)outlineLevel;
- (void)setOutlineLevel:(unsigned short)arg1;
- (BOOL)isOutlineLevelOverridden;
- (BOOL)keepNextParagraphTogether;
- (void)setKeepNextParagraphTogether:(BOOL)arg1;
- (BOOL)isKeepNextParagraphTogetherOverridden;
- (BOOL)keepLinesTogether;
- (void)setKeepLinesTogether:(BOOL)arg1;
- (BOOL)isKeepLinesTogetherOverridden;
- (BOOL)suppressAutoHyphens;
- (void)setSuppressAutoHyphens:(BOOL)arg1;
- (BOOL)isSuppressAutoHyphensOverridden;
- (BOOL)suppressLineNumbers;
- (void)setSuppressLineNumbers:(BOOL)arg1;
- (BOOL)isSuppressLineNumbersOverridden;
- (BOOL)widowControl;
- (void)setWidowControl:(BOOL)arg1;
- (BOOL)isWidowControlOverridden;
- (int)tabStopAddedCount;
- (void)setTabStopAddedCount:(int)arg1;
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(int)arg1;
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;
- (void)removeTabStopAddedWithPosition:(short)arg1;
- (int)tabStopDeletedPositionCount;
- (void)setTabStopDeletedPositionCount:(int)arg1;
- (short)tabStopDeletedPositionAt:(int)arg1;
- (void)addTabStopDeletedPosition:(short)arg1;
- (unsigned short)tablePart;
- (void)setTablePart:(unsigned short)arg1;
- (BOOL)isTablePartOverridden;
- (int)formattingChanged;
- (void)setFormattingChanged:(int)arg1;
- (BOOL)isFormattingChangedOverridden;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPropertiesInto:(id)arg1;

@end


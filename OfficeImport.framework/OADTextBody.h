/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

@interface OADTextBody : NSObject
{
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (id)init;
- (void)dealloc;
- (id)properties;
- (void)setProperties:(id)arg1;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (id)addParagraph;
- (void)removeAllParagraphs;
- (id)textListStyle;
- (id)overrideTextListStyle;
- (void)applyTextListStyle:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeTrailingNewlines;
- (BOOL)isEmpty;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (id)plainText;

@end


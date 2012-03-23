/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal *_internal;
}

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)description;
- (int)textDirection;
- (BOOL)directionIsDownstream:(int)arg1;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2 withAffinityDownstream:(BOOL)arg3;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2;
- (BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (id)nextCharacterBoundaryInDirection:(int)arg1;
- (id)nextWordBoundaryInDirection:(int)arg1;
- (id)nextSentenceBoundaryInDirection:(int)arg1;
- (id)nextLineBoundaryInDirection:(int)arg1;
- (id)nextParagraphBoundaryInDirection:(int)arg1;
- (id)nextDocumentBoundaryInDirection:(int)arg1;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)positionAtStartOrEndOfWord;
- (BOOL)isEditable;
- (BOOL)requiresContextForWordBoundary;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)arg1;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg1;
@property(nonatomic) int affinity;

@end


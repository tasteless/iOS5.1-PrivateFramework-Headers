/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;
    struct _VMURange *_ranges;
    unsigned int _max;
    BOOL _sorted;
}

- (id)init;
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setCapacity:(unsigned int)arg1;
- (void)sort;
- (void)addRange:(struct _VMURange)arg1;
- (void)addRanges:(id)arg1;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;
- (unsigned int)indexForLocation:(unsigned long long)arg1;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)removeAllRanges;
- (BOOL)intersectsLocation:(unsigned long long)arg1;
- (BOOL)intersectsRange:(struct _VMURange)arg1;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;
- (struct _VMURange)largestSubrangeNotExcludedBySelfForRange:(struct _VMURange)arg1 andLargerThan:(unsigned long long)arg2 startIndex:(unsigned int *)arg3;
- (struct _VMURange)range;
- (struct _VMURange)largestRange;
- (unsigned long long)sumLengths;
- (struct _VMURange *)ranges;
- (unsigned int)count;
- (id)description;

@end


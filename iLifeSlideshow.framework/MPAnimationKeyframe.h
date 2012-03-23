/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCAnimationKeyframe, MPAnimationPath, MPKeyframeInternal, NSMutableDictionary;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_attributes;
    MPAnimationPath *_parentPath;
    MCAnimationKeyframe *_keyframe;
    MPKeyframeInternal *_internal;
}

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)parentPath;
- (double)time;
- (void)setTime:(double)arg1;
- (int)offset;
- (void)setOffset:(int)arg1;
- (double)preControl;
- (void)setPreControl:(double)arg1;
- (double)postControl;
- (void)setPostControl:(double)arg1;

@end


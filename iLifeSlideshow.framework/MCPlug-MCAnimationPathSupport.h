/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCPlug.h>

#import "MCAnimationPathSupport-Protocol.h"

@class NSSet;

@interface MCPlug (MCAnimationPathSupport) <MCAnimationPathSupport>
- (void)initAnimationPathsWithImprints:(id)arg1;
- (void)demolishAnimationPaths;
- (id)imprintsForAnimationPaths;
@property(readonly) NSSet *animationPaths;
@property(readonly) unsigned int countOfAnimationPaths;
- (id)animationPathForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)animationPathForKey:(id)arg1;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)removeAllAnimationPaths;
@end


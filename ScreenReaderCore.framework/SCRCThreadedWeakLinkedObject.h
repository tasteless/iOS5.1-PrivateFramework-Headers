/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject
{
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}

- (id)init;
- (unsigned int)retainCount;
- (id)retain;
- (void)invalidateThreadsWithWeakLinks;
- (oneway void)release;
- (void)dealloc;

@end


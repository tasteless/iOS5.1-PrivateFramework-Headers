/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMachPort;

@interface PCDarwinNotificationRunLoopSource : NSObject
{
    id _target;
    SEL _selector;
    NSMachPort *_port;
    int _notifyToken;
}

- (id)initWithDarwinNotificationName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)dealloc;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)invalidate;
- (void)handleMachMessage:(void *)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ASRuntimeFixProtocol-Protocol.h"

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

- (id)init;
- (void)dealloc;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (id)supportedAccountTypes;

@end

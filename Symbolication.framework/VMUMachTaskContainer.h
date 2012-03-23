/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VMUMachTaskContainer : NSObject
{
    int _pid;
    unsigned int _task;
}

+ (id)machTaskContainer;
+ (id)machTaskContainerWithTask:(unsigned int)arg1;
+ (id)machTaskContainerWithPid:(int)arg1;
+ (id)machTaskContainerWithPid:(int)arg1 task:(unsigned int)arg2;
- (id)initWithPid:(int)arg1 task:(unsigned int)arg2;
- (unsigned int)task;
- (int)pid;
- (id)description;
- (void)dealloc;
- (void)finalize;

@end


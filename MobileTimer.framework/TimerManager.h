/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UILocalNotification;

@interface TimerManager : NSObject
{
    int _state;
    UILocalNotification *_notification;
    double _remainingTime;
}

+ (id)sharedManager;
+ (BOOL)isTimerNotification:(id)arg1;
+ (BOOL)upgrade;
+ (BOOL)discardOldVersion;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (id)copyFetchScheduledNotification;
@property(nonatomic) double defaultDuration;
@property(readonly, nonatomic) NSString *defaultSound;
- (void)setDefaultSound:(id)arg1;
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) double fireTime;
@property(readonly, nonatomic) double remainingTime;
- (void)reloadState;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (BOOL)cancel;
- (BOOL)pause;
- (BOOL)resume;
- (void)changeSound:(id)arg1;

@end


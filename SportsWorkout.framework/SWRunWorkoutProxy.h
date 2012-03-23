/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SWRunWorkoutProxy : NSObject
{
}

+ (id)newProxy;
+ (void)initialize;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)playMusic;
- (void)pauseMusic;
- (void)goToNowPlaying;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;

// Remaining properties
@property(readonly, nonatomic) NSString *currentSongName; // @dynamic currentSongName;
@property(readonly, nonatomic) float goal; // @dynamic goal;
@property(readonly, nonatomic) NSString *goalType; // @dynamic goalType;
@property(readonly, nonatomic) BOOL hasEverStarted; // @dynamic hasEverStarted;
@property(readonly, nonatomic) BOOL hasPowerSong; // @dynamic hasPowerSong;
@property(readonly, nonatomic) int musicSelection; // @dynamic musicSelection;
@property(readonly, nonatomic) NSString *powerSongName; // @dynamic powerSongName;
@property(readonly, nonatomic) NSString *presetGoal; // @dynamic presetGoal;
@property(readonly, nonatomic) NSString *sensorSearchState; // @dynamic sensorSearchState;
@property(readonly, nonatomic) BOOL shouldControlMusic; // @dynamic shouldControlMusic;
@property(readonly, nonatomic) NSDictionary *workoutData; // @dynamic workoutData;
@property(readonly, nonatomic) NSString *workoutState; // @dynamic workoutState;

@end


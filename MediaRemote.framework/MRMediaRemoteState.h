/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary;

@interface MRMediaRemoteState : NSObject
{
    BOOL _canBeNowPlayingApp;
    id _commandHandlerBlock;
    BOOL _includeVideoRoutes;
    BOOL _isOverrideApp;
    int _notifyLaunchedToken;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    unsigned int _routeDiscoveryCount;
}

- (id)init;
- (void)dealloc;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;
@property(retain, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(retain, nonatomic) NSData *nowPlayingArtworkData; // @synthesize nowPlayingArtworkData=_nowPlayingArtworkData;
@property(nonatomic) BOOL isOverrideApp; // @synthesize isOverrideApp=_isOverrideApp;
@property(nonatomic) BOOL includeVideoRoutes; // @synthesize includeVideoRoutes=_includeVideoRoutes;
@property(copy, nonatomic) id commandHandlerBlock; // @synthesize commandHandlerBlock=_commandHandlerBlock;
@property(nonatomic) BOOL canBeNowPlayingApp; // @synthesize canBeNowPlayingApp=_canBeNowPlayingApp;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface STEmpedLinkingManager : NSObject
{
    id <STEmpedLinkingManagerDelegate> _delegate;
    unsigned int _isLinking:1;
}

+ (void)_stopLinking;
+ (void)_startRemoteLinking;
+ (void)_startLinking;
@property(nonatomic) id <STEmpedLinkingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_fakeEmpedLinkingStateChanged:(BOOL)arg1 afterDelay:(double)arg2;
- (void)_remoteLinkingStateChanged:(id)arg1;
- (void)_empedLinkingStateChanged:(id)arg1;
- (void)unlinkRemote;
- (void)unlinkSensor;
- (void)stopLinking;
- (void)startRemoteLinking;
- (void)startLinking;
- (BOOL)isLinking;
- (void)dealloc;
- (id)init;

@end


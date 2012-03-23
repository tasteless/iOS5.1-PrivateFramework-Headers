/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/SWSyncServiceConnection.h>

@class NSString;

@interface SWPINStatusConnection : SWSyncServiceConnection
{
    id <SWSyncServiceConnectionDelegate><SWPINStatusConnectionDelegate> _delegate;
    NSString *_PIN;
}

@property(readonly, nonatomic) NSString *PIN; // @synthesize PIN=_PIN;
@property(nonatomic) id <SWSyncServiceConnectionDelegate><SWPINStatusConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleResponse:(id)arg1;
- (void)dealloc;
- (id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3;

@end


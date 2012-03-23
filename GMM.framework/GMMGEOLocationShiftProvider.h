/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOLocationShiftProvider.h"

#import "PBRequesterDelegate-Protocol.h"

@class GMMRequester;

@interface GMMGEOLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate>
{
    GMMRequester *_requester;
    id _errorHandler;
    id _finishedHandler;
}

+ (unsigned short)providerID;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)dealloc;

@end


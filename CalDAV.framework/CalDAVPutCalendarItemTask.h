/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVPutTask.h"

@class NSString;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask
{
    NSString *_previousScheduleTag;
}

- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)additionalHeaderValues;
@property(retain) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;

// Remaining properties
@property(nonatomic) id <CalDAVPutCalendarItemTaskDelegate> delegate; // @dynamic delegate;

@end


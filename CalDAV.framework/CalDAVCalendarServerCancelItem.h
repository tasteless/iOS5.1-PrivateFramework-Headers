/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVCalendarServerCancelItem : CoreDAVItem
{
    NSMutableSet *_recurrences;
}

- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)copyParseRules;
- (void)addRecurrence:(id)arg1;
@property(retain) NSMutableSet *recurrences; // @synthesize recurrences=_recurrences;

@end


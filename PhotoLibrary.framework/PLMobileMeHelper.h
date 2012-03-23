/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface PLMobileMeHelper : NSObject
{
    NSArray *_usernames;
    NSArray *_likelyValidUsernames;
}

+ (id)preferredUsername;
+ (id)userAgentString;
+ (id)serviceName;
+ (id)sharedInstance;
- (void)invalidateUserAccounts;
- (BOOL)hasValidMobileMeAccounts;
- (BOOL)hasMobileMeAccounts;
- (id)_validUsernames;
- (id)_usernames;
- (id)_passwordForUsername:(id)arg1;
- (BOOL)getUsername:(id *)arg1 andPassword:(id *)arg2;
- (void)dealloc;

@end


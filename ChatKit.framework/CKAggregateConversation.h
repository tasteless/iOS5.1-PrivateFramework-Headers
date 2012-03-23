/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/_CKConversation.h>

#import "CKConversationProtocol-Protocol.h"

@class CKService, CKSubConversation, NSArray, NSDate, NSMutableSet, NSSet, NSTimer;

@interface CKAggregateConversation : _CKConversation <CKConversationProtocol>
{
    NSMutableSet *_subConversations;
    NSMutableSet *_services;
    CKSubConversation *_firstConversation;
    CKService *_userRequestedService;
    NSTimer *_recalculateDowngradeStateTimer;
    int _downgradeState;
    BOOL _ignoreDowngradeStatusUpdates;
    BOOL _bulkAddingConversations;
    NSDate *_cachedDate;
    NSArray *_cachedMessages;
    CKService *_cachedPreferredService;
}

- (id)_initWithUpdatesDisabled:(BOOL)arg1 containedConversations:(id)arg2 va_list:(void *)arg3;
- (id)initWithUpdatesDisabled:(BOOL)arg1 containedConversations:(id)arg2;
- (id)initWithContainedConversations:(id)arg1;
- (void)dealloc;
- (void)setUnsentComposition:(id)arg1;
- (id)unsentComposition;
- (void)reloadStaleSubconversations;
@property(readonly, nonatomic) BOOL isStale;
- (id)aggregateConversation;
- (id)incomingTypingMessage;
- (void)addSubConversation:(id)arg1;
- (void)removeSubConversation:(id)arg1;
@property(readonly) CKSubConversation *preferredConversation;
- (void)_setupPreferredServiceChangeHandlers;
- (BOOL)isDowngraded;
@property(readonly) CKService *preferredService;
- (id)_preferredServiceWithCreateConversation:(BOOL)arg1;
@property(retain) CKService *userRequestedService;
- (id)subConverationForService:(id)arg1 create:(BOOL)arg2;
- (void)beginBatchUpdates;
- (void)endBatchUpdates;
- (id)service;
- (id)groupID;
- (id)groupIDs;
- (void *)abRecord;
- (int)propertyType;
- (int)identifier;
- (id)uniqueIdentifier;
- (void)setRecipients:(id)arg1;
- (unsigned int)recipientsHash;
- (unsigned int)recipientCount;
- (id)recipients;
- (id)recipient;
- (void)updateRecipients:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)resetCaches;
- (id)date;
- (int)addMessage:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (void)removeMessage:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)removeAllMessages;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)loadLastMessage;
- (void)loadAllMessages;
- (void)loadMoreMessages;
- (void)setLimitToLoad:(int)arg1;
- (BOOL)moreMessagesToLoad;
- (id)messages;
- (id)latestMessage;
- (id)latestIncomingMessage;
- (void)markAllMessagesAsRead;
- (void)resetPendingMessages;
- (id)pendingMessages;
- (int)unreadCount;
- (BOOL)hasUnreadMessages;
- (BOOL)isEmpty;
- (BOOL)isPlaceholder;
- (void)addPlaceholderMessageIfNeededWithDate:(id)arg1;
- (id)placeholderMessage;
- (BOOL)containsConversation:(id)arg1;
- (id)description;
- (id)shortDescription;
- (void)_notifyConversationAdded;
- (void)_invalidateDowngradeState;
- (void)_invalidateCaches;
- (void)_invalidatePreferredServiceCache;
- (id)_subConversationForService:(id)arg1 create:(BOOL)arg2;
- (id)_preferredConversationCreate:(BOOL)arg1;
- (id)preferredConversationCreate:(BOOL)arg1;
- (id)_bestExistingConversation;
- (void)_updateDowngradeState:(int)arg1 checkAgainInterval:(double)arg2;
- (void)_calculateDowngradeStateTimerFired;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_calculateDowngradeState;
- (void)subConversationMarkedAsRead;
- (void)_postChangeUpdate:(BOOL)arg1;
- (void)subConversationDidChange:(BOOL)arg1;
- (void)subConversationDowngradeStateDidChange:(id)arg1;
- (id)outgoingTypingMessage;
- (id)_comparableObjectsFromEntityArray:(id)arg1;
- (BOOL)isAggregatableWithConversation:(id)arg1;
- (int)compareByDateDescending:(id)arg1;
@property(readonly) NSSet *services; // @synthesize services=_services;
@property(readonly) NSSet *subConversations; // @synthesize subConversations=_subConversations;

@end


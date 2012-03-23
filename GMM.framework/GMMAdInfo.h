/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface GMMAdInfo : PBCodable
{
    NSString *_uniqueId;
    NSString *_headline;
    NSString *_creativeLine1;
    NSString *_creativeLine2;
    NSString *_linkText;
    NSString *_linkUrl;
}

@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) NSString *creativeLine2; // @synthesize creativeLine2=_creativeLine2;
@property(retain, nonatomic) NSString *creativeLine1; // @synthesize creativeLine1=_creativeLine1;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLinkUrl;
@property(readonly, nonatomic) BOOL hasLinkText;
@property(readonly, nonatomic) BOOL hasCreativeLine2;
@property(readonly, nonatomic) BOOL hasCreativeLine1;
@property(readonly, nonatomic) BOOL hasHeadline;
- (void)dealloc;

@end


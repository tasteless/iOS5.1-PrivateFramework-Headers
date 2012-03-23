/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOPlace, NSString;

@interface GEOTransitStop : PBCodable
{
    GEOPlace *_place;
    BOOL _hasTimestamp;
    double _timestamp;
    BOOL _hasTimezoneOffset;
    int _timezoneOffset;
    BOOL _hasDepartureInterval;
    int _departureInterval;
    NSString *_iconName;
    NSString *_transitCost;
    BOOL _hasAgentIndex;
    int _agentIndex;
    NSString *_supplementalInstructions;
}

@property(retain, nonatomic) NSString *supplementalInstructions; // @synthesize supplementalInstructions=_supplementalInstructions;
@property(nonatomic) int agentIndex; // @synthesize agentIndex=_agentIndex;
@property(nonatomic) BOOL hasAgentIndex; // @synthesize hasAgentIndex=_hasAgentIndex;
@property(retain, nonatomic) NSString *transitCost; // @synthesize transitCost=_transitCost;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) int departureInterval; // @synthesize departureInterval=_departureInterval;
@property(nonatomic) BOOL hasDepartureInterval; // @synthesize hasDepartureInterval=_hasDepartureInterval;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) BOOL hasTimezoneOffset; // @synthesize hasTimezoneOffset=_hasTimezoneOffset;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL hasTimestamp; // @synthesize hasTimestamp=_hasTimestamp;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSupplementalInstructions;
@property(readonly, nonatomic) BOOL hasTransitCost;
@property(readonly, nonatomic) BOOL hasIconName;
@property(readonly, nonatomic) BOOL hasPlace;
- (void)dealloc;

@end


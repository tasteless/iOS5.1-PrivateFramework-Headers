/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOMapRegion.h>

@interface GEOMapRegion (GEOProtoExtras)
- (BOOL)containsCoordinate:(CDStruct_2c43369c)arg1;
@property(readonly, nonatomic) double spanLng;
@property(readonly, nonatomic) double spanLat;
@property(readonly, nonatomic) double centerLng;
@property(readonly, nonatomic) double centerLat;
- (void)setSpannedRegion:(CDStruct_4957f2b9)arg1;
- (id)initWithSpannedRegion:(CDStruct_4957f2b9)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
@end


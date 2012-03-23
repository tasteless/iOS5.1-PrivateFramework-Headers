/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface GMMRating : PBCodable
{
    BOOL _hasStarRatingAverageE3;
    int _starRatingAverageE3;
    BOOL _hasTotalReviews;
    int _totalReviews;
    CDStruct_56d48c16 _numReviewsStarRating1To5s;
    NSString *_snippet;
}

@property(retain, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(nonatomic) int totalReviews; // @synthesize totalReviews=_totalReviews;
@property(nonatomic) BOOL hasTotalReviews; // @synthesize hasTotalReviews=_hasTotalReviews;
@property(nonatomic) int starRatingAverageE3; // @synthesize starRatingAverageE3=_starRatingAverageE3;
@property(nonatomic) BOOL hasStarRatingAverageE3; // @synthesize hasStarRatingAverageE3=_hasStarRatingAverageE3;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSnippet;
- (void)setNumReviewsStarRating1To5s:(int *)arg1 count:(unsigned int)arg2;
- (int)numReviewsStarRating1To5AtIndex:(unsigned int)arg1;
- (void)addNumReviewsStarRating1To5:(int)arg1;
- (void)clearNumReviewsStarRating1To5s;
@property(readonly, nonatomic) int *numReviewsStarRating1To5s;
@property(readonly, nonatomic) unsigned int numReviewsStarRating1To5sCount;
- (void)dealloc;

@end


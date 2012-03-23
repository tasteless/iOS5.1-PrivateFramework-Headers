/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

@interface CHDTrendline : NSObject
{
    _Bool mDisplayEquation;
    _Bool mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    int mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;
- (id)init;
- (void)dealloc;
- (_Bool)isDisplayEquation;
- (void)setDisplayEquation:(_Bool)arg1;
- (_Bool)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(_Bool)arg1;
- (double)backward;
- (void)setBackward:(double)arg1;
- (double)forward;
- (void)setForward:(double)arg1;
- (double)interceptYAxis;
- (void)setInterceptYAxis:(double)arg1;
- (int)polynomialOrder;
- (void)setPolynomialOrder:(int)arg1;
- (int)movingAveragePeriod;
- (void)setMovingAveragePeriod:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)defaultNameWithSeriesName:(id)arg1;

@end


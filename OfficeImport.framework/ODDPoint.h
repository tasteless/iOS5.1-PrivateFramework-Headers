/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject
{
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

- (id)init;
- (void)dealloc;
- (int)type;
- (void)setType:(int)arg1;
- (id)propertySet;
- (id)shapeProperties;
- (id)text;
- (void)setText:(id)arg1;

@end


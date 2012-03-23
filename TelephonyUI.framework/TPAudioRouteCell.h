/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@interface TPAudioRouteCell : UITableViewCell
{
    BOOL _checked;
}

+ (id)normalBackground;
+ (id)highlightedBackground;
- (id)_shadowColor;
- (id)_shadowHighlightedColor;
- (id)highlightedIcon;
- (id)enabledIcon;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setChecked:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end


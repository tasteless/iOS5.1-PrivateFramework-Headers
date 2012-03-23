/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface SUFooterContainerView : UIView
{
    UIView *_contentView;
    UIView *_footerView;
    BOOL _footerVisible;
}

@property(nonatomic, getter=isFooterVisible) BOOL footerVisible; // @synthesize footerVisible=_footerVisible;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)dealloc;

@end


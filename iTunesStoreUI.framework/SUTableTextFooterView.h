/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, UIColor, UIFont;

@interface SUTableTextFooterView : UIView
{
    UIFont *_font;
    UIColor *_shadowColor;
    int _textAlignment;
    UIColor *_textColor;
    NSArray *_textLines;
}

@property(retain, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end


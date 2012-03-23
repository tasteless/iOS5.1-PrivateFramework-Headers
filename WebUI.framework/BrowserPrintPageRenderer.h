/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPrintPageRenderer.h"

#import "UIPrintInteractionControllerDelegate-Protocol.h"

@class NSNumberFormatter, NSString, UIColor, UIFont, UIWebBrowserView, UIWebPaginationInfo, WebFrame;

@interface BrowserPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate>
{
    UIWebBrowserView *_browserView;
    WebFrame *_webFrame;
    NSNumberFormatter *_numberFormatter;
    NSString *_URLString;
    UIWebPaginationInfo *_paginationInfo;
    float _URLWidth;
    NSString *_dateString;
    float _dateWidth;
    float _printWidth;
    struct CGPoint _contentOffset;
    struct CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
    BOOL _printFooter;
}

- (id)init;
- (void)dealloc;
- (int)numberOfPages;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawFooterForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
@property(nonatomic) BOOL printFooter; // @synthesize printFooter=_printFooter;
@property(readonly, nonatomic) UIWebPaginationInfo *paginationInfo; // @synthesize paginationInfo=_paginationInfo;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;
@property(retain, nonatomic) UIWebBrowserView *browserView; // @synthesize browserView=_browserView;

@end


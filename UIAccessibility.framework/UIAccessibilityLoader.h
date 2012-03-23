/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UIAccessibilityLoader : NSObject
{
}

+ (void)_accessibilityStopServer;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityStartServer;
+ (id)_loadAXBundleForBundle:(id)arg1 didLoad:(char *)arg2;
+ (id)_loadAXBundleForBundle:(id)arg1 didLoad:(char *)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4;
+ (id)loadAccessibilityBundle:(id)arg1 didLoad:(char *)arg2 force:(BOOL)arg3;
+ (id)loadAccessibilityBundle:(id)arg1 didLoad:(char *)arg2;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoad:(char *)arg2 loadSubbundles:(BOOL)arg3;
+ (id)_axBundleForBundle:(id)arg1;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)initialize;

@end


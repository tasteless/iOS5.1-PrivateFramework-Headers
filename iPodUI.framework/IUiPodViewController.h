/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "IUModalContextDelegate-Protocol.h"
#import "MPAVControllerNode-Protocol.h"
#import "ViewControllerArchiveNode-Protocol.h"

@class IUModalContext, IUViewControllerContext, MPAVController, NSMutableArray, UITabBarItem, UIView;

@interface IUiPodViewController : UIViewController <MPAVControllerNode, IUModalContextDelegate, ViewControllerArchiveNode>
{
    MPAVController *_player;
    UIView *_backstopView;
    IUViewControllerContext *_context;
    UIView *_loadingView;
    IUModalContext *_modalContext;
    IUModalContext *_presentedModalContext;
    NSMutableArray *_scheduledInvocations;
    int _transitionCount;
    unsigned int _appearanceState;
    UITabBarItem *_cachedTabBarItem;
    BOOL _shouldConfigureNavigationItem;
    unsigned int _deviceOrientationNotificationsEnabled:1;
    unsigned int _loading:1;
    unsigned int _reloadOnNextAppear:1;
    int _playerLockedCount;
}

+ (BOOL)supportsViewControllerStyle:(int)arg1;
+ (id)newViewControllerForContext:(id)arg1 redirectType:(int)arg2 didRedirect:(char *)arg3;
+ (Class)backstopViewClass;
@property(nonatomic) BOOL shouldConfigureNavigationItem; // @synthesize shouldConfigureNavigationItem=_shouldConfigureNavigationItem;
@property(retain, nonatomic) IUViewControllerContext *context; // @synthesize context=_context;
- (id)_loadingView;
- (void)_enableDeviceOrientationNotifications;
- (void)_disableDeviceOrientationNotifications;
- (void)_delayedPerformScheduledInvocations;
- (void)_suspendChangedNotification:(id)arg1;
- (void)_eventsOnlyChangedNotification:(id)arg1;
- (void)_deviceOrientationChangedNotification:(id)arg1;
- (void)_dataSourceInvalidate:(id)arg1;
- (void)modalContextWillDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (BOOL)_canReloadView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isAppearingOrAppeared;
- (BOOL)isDisappearingOrDisappeared;
- (id)tabBarItem;
- (BOOL)shouldShowNowPlayingButton;
- (void)setTabBarItem:(id)arg1;
@property(retain, nonatomic) IUModalContext *modalContext; // @synthesize modalContext=_modalContext;
- (id)query;
@property(retain, nonatomic) MPAVController *player;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)loadView;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)unloadReloadableContextDataIfPossible;
- (BOOL)isWindowRotatable:(id)arg1;
- (id)description;
- (void)_setExistingTabBarItem:(id)arg1;
- (id)_existingTabBarItem;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (id)transitionSafePerformerWithTarget:(id)arg1;
- (void)scheduleInvocationAfterTransition:(id)arg1;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)cancelScheduledInvocationsWithTarget:(id)arg1;
- (void)endTransition;
- (void)beginTransition;
- (void)updateForInterfaceOrientation:(int)arg1;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (void)_reloadForModalContextChange;
@property(nonatomic, getter=isLoading) BOOL loading;
- (void)scheduleReloadData;
- (void)reloadNavigationItem;
- (void)viewControllerDidFinishReloadForDataSourceInvalidation;
- (void)reloadDataForDataSourceInvalidation;
- (void)reloadData;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) int navigationTransition;
@property(readonly, nonatomic) int modalTransition;
- (BOOL)isTransitioning;
@property(readonly, nonatomic, getter=isCurrentController) BOOL currentController;
- (BOOL)handleTabBarSelectedViewController:(id)arg1;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (void)deviceOrientationChanged:(int)arg1;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isViewWillAppearReappearingForNavigationPop;
- (BOOL)isViewWillAppearReappearing;
- (void)configureRootNavigationItem:(id)arg1 navigationBar:(id)arg2;
- (void)configureNavigationItem:(id)arg1;
- (void)applicationSuspendedEventsOnly:(BOOL)arg1;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end


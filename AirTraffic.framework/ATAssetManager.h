/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ATAssetManager : NSObject
{
    NSMutableArray *_assets;
    NSMutableDictionary *_assetsByDataclass;
    NSMutableDictionary *_assetsByStoreID;
    NSMutableArray *_completedStoreAssets;
    unsigned int _completedAssets;
    unsigned int _totalAssetCount;
}

- (void)dealloc;
- (id)init;
- (void)_installSignalHandler;
- (void)reset;
- (BOOL)isEmpty;
- (BOOL)dataclassIsEmpty:(id)arg1;
- (void)removeCompletedStoreAsset:(id)arg1;
- (void)removeInstallOnlyAssetsForDataclass:(id)arg1;
- (id)assetManifestForDataclasses:(id)arg1;
- (void)dequeueAsset:(id)arg1;
- (id)uploadAssetsForDataclass:(id)arg1;
- (unsigned int)countOfSyncAssetsForDataclasses:(id)arg1;
- (id)assetsForDataclasses:(id)arg1;
- (id)bypassedRestoresForDataclass:(id)arg1;
- (id)restoreAssetsForDataclass:(id)arg1;
- (id)storeAssetsForDataclass:(id)arg1;
- (id)completedStoreAssets;
- (id)assets;
- (id)assetForDataclass:(id)arg1 identifier:(id)arg2;
- (id)assetForStoreID:(long long)arg1;
- (void)mapStoreIDToAsset:(id)arg1;
- (void)enqueueAsset:(id)arg1;
- (void)enqueueAssets:(id)arg1;
- (unsigned int)awaitingStoreCompletion;
- (unsigned int)currentAsset;
- (unsigned int)totalAssetCount;

@end


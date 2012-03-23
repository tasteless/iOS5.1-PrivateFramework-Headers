/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileManager, PLCurrentThumbnailsInformation, PLPhotoLibrary;

@interface PLModelMigrator : NSObject
{
    double startTime;
    NSFileManager *_fileManager;
    BOOL _didBeginTransaction;
    PLPhotoLibrary *_photoLibrary;
    long _photoLibraryOnce;
    PLCurrentThumbnailsInformation *_thumbnailsInformation;
}

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (void)setDidImportFileSystemAssets:(BOOL)arg1;
+ (id)modelMigrator;
+ (void)importAfterCrash;
+ (BOOL)didImportFileSystemAssets;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (BOOL)restartingAfterOTAMigration;
+ (long long)secondsNeededToCleanupDualCameraRollAfterTellurideCorruption;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;
+ (void)recalculateCachedCounts;
+ (void)cleanupDualCameraRollAfterTellurideCorruption;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (void)recreateThumbnailTablesIfNecessary;
+ (void)loadFileSystemDataIntoDatabase;
+ (void)_waitForDataMigratorToExit;
+ (void)createDatabase;
@property(retain, nonatomic) PLCurrentThumbnailsInformation *_thumbnailsInformation; // @synthesize _thumbnailsInformation;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)importFileSystemImportAssets:(id)arg1;
- (void)importAfterCrash;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 isPhotoStream:(BOOL)arg4 isSavedPhotos:(BOOL)arg5 isCameraKit:(BOOL)arg6;
- (void)_importAllDCIMAssets;
- (BOOL)_shouldReimportDCIMAssets;
- (id)_orderedAssetsToImportReadOnly:(BOOL)arg1;
- (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isCameraKit:(char *)arg3;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(char *)arg3;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)dontImportFileSystemDataIntoDatabase;
- (BOOL)restartingAfterOTADataMigration;
- (void)recreateThumbnailTablesIfNecessary;
- (void)recalculateCachedCountsWithSemaphore:(struct dispatch_semaphore_s *)arg1;
- (void)cleanupDualCameraRollAfterTellurideCorruption;
- (long long)secondsNeededToCleanupDualCameraRollAfterTellurideCorruption;
- (void)cleanupModelAfterRestoreFromiTunes;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)loadFileSystemDataIntoDatabase;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface MBBackup : NSObject <NSCopying, NSCoding>
{
    NSString *_backupUDID;
    NSString *_deviceClass;
    NSString *_productType;
    NSString *_hardwareModel;
    NSString *_marketingName;
    NSArray *_snapshots;
    BOOL _restoreSystemFiles;
}

- (id)initWithBackupUDID:(id)arg1 deviceClass:(id)arg2 productType:(id)arg3 hardwareModel:(id)arg4 marketingName:(id)arg5 snapshots:(id)arg6 restoreSystemFiles:(BOOL)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles; // @synthesize restoreSystemFiles=_restoreSystemFiles;
@property(readonly, nonatomic) NSArray *snapshots; // @synthesize snapshots=_snapshots;
@property(readonly, nonatomic) NSString *marketingName; // @synthesize marketingName=_marketingName;
@property(readonly, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) NSString *backupUDID; // @synthesize backupUDID=_backupUDID;

@end


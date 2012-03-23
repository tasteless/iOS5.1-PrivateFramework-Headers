/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUHeader.h>

@class NSArray, NSDate, NSString;

@interface VMUMachOHeader : VMUHeader
{
    NSString *_name;
    NSString *_path;
    NSString *_dsymPath;
    NSDate *_timestamp;
    id <VMUMemory> _memory;
    unsigned long long _address;
    unsigned long long _linkEditBase;
    NSArray *_loadCommands;
    long long _vmaddrSlide;
    unsigned int _fileType;
    unsigned int _flags;
}

- (id)name;
- (id)path;
- (id)dsymPath;
- (id)timestamp;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setDsymPath:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)memory;
- (id)architecture;
- (id)loadCommands;
- (unsigned long long)address;
- (unsigned long long)linkEditBase;
- (long long)vmaddrSlide;
- (unsigned int)fileType;
- (unsigned int)flags;
- (BOOL)isFromSharedCache;
- (BOOL)isMachO;
- (id)segmentNamed:(id)arg1;
- (id)sections;
- (id)regions;
- (id)symbolTable;
- (id)dySymbolTable;
- (id)dyLinkerPath;
- (unsigned int)currentVersion;
- (unsigned int)compatibilityVersion;
- (id)uuid;
- (BOOL)isCommpage;
- (id)commpage;
- (BOOL)isProtected;
- (id)segmentAddresses;
- (id)signature;
- (id)description;
- (void)dealloc;

@end


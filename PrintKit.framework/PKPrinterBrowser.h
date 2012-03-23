/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle, NSMutableArray, NSMutableDictionary;

@interface PKPrinterBrowser : NSObject
{
    id <PKPrinterBrowserDelegate> delegate;
    struct _DNSServiceRef_t *mainBrowserRef;
    struct _DNSServiceRef_t *ippBrowserRef;
    struct _DNSServiceRef_t *ippsBrowserRef;
    struct _DNSServiceRef_t *localippBrowserRef;
    struct _DNSServiceRef_t *localippsBrowserRef;
    NSMutableDictionary *printers;
    NSMutableDictionary *printersByUUID;
    NSFileHandle *handle;
    unsigned char originalCellFlag;
    unsigned char originalWifiFlag;
    struct dispatch_queue_s *printersQueue;
    NSMutableArray *pendingList;
}

+ (id)browserWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)removePrinter:(id)arg1;
- (void)addLimboPrinter:(id)arg1 local:(BOOL)arg2;
- (void)reissueTXTQuery:(id)arg1;
- (void)addQueryResult:(id)arg1 toPrinter:(id)arg2;
- (void)addBlockToPendingList:(id)arg1;
- (void)browseCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)browseLocalCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)queryCallback:(int)arg1 flags:(unsigned int)arg2 fullName:(const char *)arg3 rdlen:(unsigned short)arg4 rdata:(const void *)arg5;
- (void)handleNotification:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *printersByUUID; // @synthesize printersByUUID;
@property(retain, nonatomic) NSMutableArray *pendingList; // @synthesize pendingList;
@property(readonly, nonatomic) struct dispatch_queue_s *printersQueue; // @synthesize printersQueue;
@property(retain, nonatomic) NSMutableDictionary *printers; // @synthesize printers;
@property(retain, nonatomic) NSFileHandle *handle; // @synthesize handle;
@property(nonatomic) id <PKPrinterBrowserDelegate> delegate; // @synthesize delegate;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MimePart.h>

@interface MimePart (DecodingSupport)
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)decodeText;
- (void)_contents:(id *)arg1 toOffset:(unsigned int)arg2 resultOffset:(unsigned int *)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(char *)arg6;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(char *)arg5;
- (BOOL)hasContents;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystem;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2;
- (id)bodyData;
- (void)decodeIfNecessary;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol OIProgressiveReaderDelegate

@optional
- (void)readerDidStartDocument:(id)arg1 withElementCount:(int)arg2;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned int)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidEndDocument:(id)arg1;
@end


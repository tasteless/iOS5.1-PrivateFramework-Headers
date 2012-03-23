/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
{
    BOOL _forceToServer;
    NSString *_previousETag;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain) NSData *requestDataPayload; // @synthesize requestDataPayload=_requestDataPayload;
@property(retain) NSString *requestDataContentType; // @synthesize requestDataContentType=_requestDataContentType;
@property(retain) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property BOOL forceToServer; // @synthesize forceToServer=_forceToServer;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)description;
- (void)dealloc;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface WeatherXMLHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
}

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
- (id)init;
- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (BOOL)isLoading;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_forceRawDataDump:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)willProcessDocument;
- (void)didProcessDocument;
- (void)processDocument:(struct _xmlDoc *)arg1;
- (void)failWithError:(id)arg1;
@property(readonly, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (WebNSURLExtras)
- (BOOL)_web_isUserVisibleURL;
- (BOOL)_webkit_isJavaScriptURL;
- (BOOL)_webkit_isFileURL;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (id)_webkit_scriptIfJavaScriptURL;
- (BOOL)_webkit_isFTPDirectoryURL;
- (id)_web_mapHostNameWithRange:(struct _NSRange)arg1 encode:(BOOL)arg2 makeString:(BOOL)arg3;
- (BOOL)_web_hostNameNeedsDecodingWithRange:(struct _NSRange)arg1;
- (BOOL)_web_hostNameNeedsEncodingWithRange:(struct _NSRange)arg1;
- (id)_web_decodeHostNameWithRange:(struct _NSRange)arg1;
- (id)_web_encodeHostNameWithRange:(struct _NSRange)arg1;
- (id)_web_decodeHostName;
- (id)_web_encodeHostName;
- (struct _NSRange)_webkit_rangeOfURLScheme;
- (BOOL)_webkit_looksLikeAbsoluteURL;
- (id)_webkit_URLFragment;
- (id)_webkit_unescapedQueryValue;
- (id)_webkit_queryKeysAndValues;
@end


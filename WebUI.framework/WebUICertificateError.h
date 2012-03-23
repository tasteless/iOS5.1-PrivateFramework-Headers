/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebUICertificateError : NSObject
{
}

+ (id)applyAuthenticationChain:(struct __CFArray *)arg1 toRequest:(id)arg2;
+ (BOOL)userAllowsCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2 applicationDisplayName:(id)arg3;
+ (BOOL)canAuthenticateAgainstProtectionSpace:(id)arg1;
+ (id)newAlertToHandleClientSideCertificateErrorCode:(int)arg1 context:(id)arg2;
+ (id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1;
+ (BOOL)proceedWithClientCertificateIdentity:(struct __SecIdentity *)arg1 context:(id)arg2;
+ (BOOL)isServerCertificateError:(int)arg1;
+ (BOOL)isClientCertificateError:(int)arg1;

@end


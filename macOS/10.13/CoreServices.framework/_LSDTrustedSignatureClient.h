/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSDTrustedSignatureClient : _LSDClient <_LSDTrustedSignatureProtocol>

- (void)getIsTrustedForURL:(id)arg1 completionHandler:(id)arg2;
- (void)trust:(BOOL)arg1 URL:(id)arg2 completionHandler:(id)arg3;
- (void)updateTrustExpirationDateForURL:(id)arg1;

// _LSDTrustedSignatureClient (TrustedSignatureCalculation)

- (BOOL)isURLQuarantined:(id)arg1;
- (id)trustedSignatureForURL:(id)arg1 error:(id*)arg2;

@end
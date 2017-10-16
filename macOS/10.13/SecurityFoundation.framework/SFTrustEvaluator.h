/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _allowCertificateFetching;
    NSArray * _applicationAnchorCertificates;
    SFRevocationPolicy * _revocationPolicy;
    id  _trustEvaluatorInternal;
    SFTrustPolicy * _trustPolicy;
    BOOL  _trustSystemAnchorCertificates;
}

@property (nonatomic, readwrite) BOOL allowCertificateFetching;
@property (nonatomic, readwrite, copy) NSArray *applicationAnchorCertificates;
@property (nonatomic, readwrite, copy) SFRevocationPolicy *revocationPolicy;
@property (nonatomic, readwrite, copy) SFTrustPolicy *trustPolicy;
@property (nonatomic, readwrite) BOOL trustSystemAnchorCertificates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)allowCertificateFetching;
- (id)applicationAnchorCertificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(BOOL)arg4 trustSystemAnchorCertificates:(BOOL)arg5;
- (id)revocationPolicy;
- (void)setAllowCertificateFetching:(BOOL)arg1;
- (void)setApplicationAnchorCertificates:(id)arg1;
- (void)setRevocationPolicy:(id)arg1;
- (void)setTrustPolicy:(id)arg1;
- (void)setTrustSystemAnchorCertificates:(BOOL)arg1;
- (id)trustPolicy;
- (BOOL)trustSystemAnchorCertificates;

@end
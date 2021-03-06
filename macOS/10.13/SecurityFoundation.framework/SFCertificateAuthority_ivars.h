/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFCertificateAuthority_ivars : NSObject {
    struct OpaqueSecCertificateRef { } * _CACert;
    id  _authenticator;
    CAAdditionalCertInfo * _caAdditionalCertInfo;
    CABasicConstraintsExtension * _caBasicConstraintsExtension;
    CACertInfo * _caCertInfo;
    CAExtendedKeyUsageExtension * _caExtendedKUE;
    CAIdentityName * _caIdentityName;
    CAKeyPairAttributes * _caKeyPairAttrs;
    CAKeyUsageExtension * _caKeyUsageExtension;
    NSString * _caName;
    struct OpaqueSecCertificateRef { } * _caResultingCertificate;
    CASubjectAltNameExtension * _caSubjAltNameExtension;
    struct OpaqueSecIdentityRef { } * _chosenIssuer;
    long long  _clHand;
    BOOL  _creatingCA;
    struct __CE_GeneralName { int x1; int x2; struct cssm_data { unsigned long long x_3_1_1; char *x_3_1_2; } x3; } * _crlDistNames;
    char * _crlDistribPointsArray;
    NSArray * _crlDistributionPoints;
    SFCSR * _csr;
    struct OpaqueSecKeychainRef { } * _destKeychain;
    struct __CE_CRLDistributionPoint { struct __CE_DistributionPointName {} *x1; int x2; unsigned char x3; struct __CE_GeneralNames {} *x4; } * _distPoint;
    struct __CE_DistributionPointName { int x1; union { struct __CE_GeneralNames {} *x_2_1_1; struct cssm_x509_rdn {} *x_2_1_2; } x2; } * _distPointName;
    struct __CE_GeneralNames { unsigned int x1; struct __CE_GeneralName {} *x2; } * _genNames;
    NSDictionary * _invite;
    NSData * _issuerHashPublicKey;
    struct cssm_x509_name { unsigned int x1; struct cssm_x509_rdn {} *x2; } * _issuerX509Name;
    struct cssm_data { unsigned long long x1; char *x2; } * _issuerX509NameField;
    int  _numCRLDistribPointNames;
    struct cssm_data { 
        unsigned long long Length; 
        char *Data; 
    }  _resultingCertData;
    long long  _tpHand;
    NSURL * _webURL;
}

- (void)_releaseCEDistribPoint;
- (void)_releaseCEDistribPointName;
- (void)_releaseCRLDistPointNames;
- (void)_releaseCRLDistPointsArray;
- (void)_releaseGenNames;
- (void)dealloc;
- (id)init;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUAppleIDClient : NSObject {
    NSString * _myAppleID;
    struct OpaqueSecCertificateRef { } * _myCertificate;
    NSData * _myCertificateData;
    struct OpaqueSecIdentityRef { } * _myIdentity;
    CUAppleIDClient * _myInfoClient;
    struct OpaqueSecKeyRef { } * _mySecretKey;
    NSData * _mySecretKeyData;
    NSString * _mySecretKeyType;
    NSData * _myValidationData;
    NSString * _peerAppleID;
    NSArray * _peerAppleIDs;
    struct OpaqueSecCertificateRef { } * _peerCertificate;
    NSData * _peerCertificateData;
    struct OpaqueSecKeyRef { } * _peerPublicKey;
    BOOL  _peerSignatureVerified;
    struct __SecTrust { } * _peerTrust;
    BOOL  _peerValidated;
    NSData * _peerValidationData;
    NSDictionary * _peerValidationDict;
}

@property (nonatomic, readwrite, copy) NSString *myAppleID;
@property (nonatomic, readwrite, copy) NSData *myCertificateData;
@property (nonatomic, readwrite, retain) CUAppleIDClient *myInfoClient;
@property (nonatomic, readwrite, copy) NSData *mySecretKeyData;
@property (nonatomic, readwrite, copy) NSString *mySecretKeyType;
@property (nonatomic, readwrite, copy) NSString *peerAppleID;
@property (nonatomic, readwrite, copy) NSArray *peerAppleIDs;
@property (nonatomic, readwrite, copy) NSData *peerCertificateData;
@property (nonatomic, readwrite, copy) NSData *peerValidationData;

- (void).cxx_destruct;
- (struct OpaqueSecCertificateRef { }*)_getMyCertificateAndReturnError:(id*)arg1;
- (struct OpaqueSecIdentityRef { }*)_getMyIdentityAndReturnError:(id*)arg1;
- (struct OpaqueSecKeyRef { }*)_getMySecretKeyAndReturnError:(id*)arg1;
- (struct OpaqueSecCertificateRef { }*)_getPeerCertificateAndReturnError:(id*)arg1;
- (struct OpaqueSecKeyRef { }*)_getPeerPublicKeyAndReturnError:(id*)arg1;
- (id)copyMyAppleIDAndReturnError:(id*)arg1;
- (id)copyMyCertificateDataAndReturnError:(id*)arg1;
- (id)copyMyValidationDataAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)myAppleID;
- (id)myCertificateData;
- (id)myInfoClient;
- (id)mySecretKeyData;
- (id)mySecretKeyType;
- (id)peerAppleID;
- (id)peerAppleIDs;
- (id)peerCertificateData;
- (id)peerValidationData;
- (void)setMyAppleID:(id)arg1;
- (void)setMyCertificateData:(id)arg1;
- (void)setMyInfoClient:(id)arg1;
- (void)setMySecretKeyData:(id)arg1;
- (void)setMySecretKeyType:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPeerAppleIDs:(id)arg1;
- (void)setPeerCertificateData:(id)arg1;
- (void)setPeerValidationData:(id)arg1;
- (id)signBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)signData:(id)arg1 error:(id*)arg2;
- (BOOL)validatePeerWithFlags:(unsigned int)arg1 error:(id*)arg2;
- (BOOL)verifyBytes:(const void*)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void*)arg3 signatureLength:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)verifyData:(id)arg1 signature:(id)arg2 error:(id*)arg3;

@end

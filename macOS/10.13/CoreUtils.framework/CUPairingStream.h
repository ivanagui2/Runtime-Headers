/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUPairingStream : NSObject {
    struct CryptoAEADPrivate { } * _decryptAEAD;
    unsigned char  _decryptNonce;
    struct CryptoAEADPrivate { } * _encryptAEAD;
    unsigned char  _encryptNonce;
    NSString * _name;
}

@property (nonatomic, readwrite, copy) NSString *name;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (id)decryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3;
- (BOOL)decryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 inputAuthTagPtr:(const void*)arg5 inputAuthTagLength:(unsigned long long)arg6 outputBytes:(void*)arg7 error:(id*)arg8;
- (id)encryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3;
- (BOOL)encryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 outputBytes:(void*)arg5 outputAuthTagBytes:(void*)arg6 outputAuthTagLength:(unsigned long long)arg7 error:(id*)arg8;
- (id)name;
- (void)setName:(id)arg1;

@end

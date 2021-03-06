/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id  _authenticatedEncryptionOperationInternal;
}

@property (nonatomic, readwrite) long long authenticationCodeLength;
@property (nonatomic, readwrite) long long authenticationMode;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, copy) _SFAESKeySpecifier *encryptionKeySpecifier;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (long long)_defaultAuthenticationMode;
+ (id)_defaultEncryptionOperation;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationCodeLength;
- (long long)authenticationMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4;
- (id)encryptionKeySpecifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2;
- (void)setAuthenticationCodeLength:(long long)arg1;
- (void)setAuthenticationMode:(long long)arg1;
- (void)setEncryptionKeySpecifier:(id)arg1;

@end

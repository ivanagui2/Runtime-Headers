/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface _SFKeychainManager : NSObject {
    id  _keychainManagerInternal;
}

@property (atomic, readonly) SFCredentialStore *credentialStore;

+ (id)defaultManager;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2;
- (struct __CFDictionary { }*)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)_init;
- (struct __CFDictionary { }*)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary { }*)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)credentialStore;
- (void)dataForIdentifier:(id)arg1 resultHandler:(id)arg2;
- (void)identitiesFilteredBy:(id)arg1 resultHandler:(id)arg2;
- (void)identityForIdentifier:(id)arg1 resultHandler:(id)arg2;
- (void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(id)arg3;
- (void)keysFilteredBy:(id)arg1 resultHandler:(id)arg2;
- (void)removeItemWithIdentifier:(id)arg1 resultHandler:(id)arg2;
- (void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id)arg4;
- (void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id)arg4;
- (void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id)arg4;

@end
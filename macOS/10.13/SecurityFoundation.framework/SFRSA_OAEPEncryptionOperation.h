/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {
    id  _oaepEncryptionOperationInternal;
}

@property (nonatomic, readwrite, copy) <SFMaskGenerationFunction> *maskGenerationFunction;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2;
- (id)maskGenerationFunction;
- (void)setMaskGenerationFunction:(id)arg1;

@end

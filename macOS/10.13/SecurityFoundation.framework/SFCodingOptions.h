/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFCodingOptions : NSObject <NSCopying> {
    id  _codingOptionsInternal;
}

@property (nonatomic, readwrite) long long encoding;
@property (nonatomic, readwrite, copy) NSString *encryptionPassphrase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)encoding;
- (id)encryptionPassphrase;
- (void)setEncoding:(long long)arg1;
- (void)setEncryptionPassphrase:(id)arg1;

@end
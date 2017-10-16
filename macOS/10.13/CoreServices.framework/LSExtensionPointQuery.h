/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSExtensionPointQuery : _LSQuery {
    NSString * _identifier;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *version;

+ (id)extensionPointQueryForIdentifier:(id)arg1 withVersion:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (id)_initWithIdentifier:(id)arg1 andVersion:(id)arg2;
- (BOOL)_shouldCacheResolvedResults;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)version;

@end
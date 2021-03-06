/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {
    id  _accessControlEntryInternal;
}

@property (nonatomic, readwrite, copy) NSString *bundleID;
@property (nonatomic, readwrite) BOOL canRead;
@property (nonatomic, readwrite) BOOL canWrite;
@property (getter=isOwner, nonatomic, readwrite) BOOL owner;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (BOOL)canRead;
- (BOOL)canWrite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 owner:(BOOL)arg2 canRead:(BOOL)arg3 canWrite:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOwner;
- (void)setBundleID:(id)arg1;
- (void)setCanRead:(BOOL)arg1;
- (void)setCanWrite:(BOOL)arg1;
- (void)setOwner:(BOOL)arg1;

@end

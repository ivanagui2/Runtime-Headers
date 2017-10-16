/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {
    id  _accessPolicyInternal;
}

@property (nonatomic, readwrite, copy) NSArray *accessControlList;
@property (nonatomic, readwrite, copy) NSString *accessGroup;
@property (nonatomic, readwrite) struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; } accessibility;
@property (nonatomic, readonly) const struct __CFDictionary { }*secAccessibilityAttributes;
@property (nonatomic, readwrite) long long sharingPolicy;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessControlList;
- (id)accessGroup;
- (struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })accessibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1 sharingPolicy:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (const struct __CFDictionary { }*)secAccessibilityAttributes;
- (void)setAccessControlList:(id)arg1;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setSharingPolicy:(long long)arg1;
- (long long)sharingPolicy;

@end
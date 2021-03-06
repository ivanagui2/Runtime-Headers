/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWChannel : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _info;
}

@property (atomic, readonly) long long channelBand;
@property (atomic, readonly) long long channelNumber;
@property (atomic, readonly) unsigned long long channelProperties;
@property (atomic, readonly) long long channelWidth;
@property (atomic, readonly) unsigned long long flags;
@property (atomic, readonly, copy) NSDictionary *info;
@property (atomic, readwrite, copy) NSDictionary *info;

+ (BOOL)supportsSecureCoding;

- (long long)channelBand;
- (long long)channelNumber;
- (long long)channelWidth;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChannel:(id)arg1;
- (void)setInfo:(id)arg1;

// CWChannel (Private)

- (unsigned long long)channelProperties;
- (void)dealloc;
- (unsigned long long)flags;
- (id)initWithChannel:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end

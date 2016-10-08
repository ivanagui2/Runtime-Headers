/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (nonatomic, readwrite) unsigned long long depthFailureOperation;
@property (nonatomic, readwrite) unsigned long long depthStencilPassOperation;
@property (nonatomic, readwrite) unsigned int readMask;
@property (nonatomic, readwrite) unsigned long long stencilCompareFunction;
@property (nonatomic, readwrite) unsigned long long stencilFailureOperation;
@property (atomic, readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*stencilPrivate;
@property (nonatomic, readwrite) unsigned int writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSRemoteOpenCall : NSObject <NSSecureCoding> {
    _LSRemoteOpenCallInputs * _inputs;
    _LSRemoteOpenCallOutputs * _outputs;
}

+ (BOOL)canInvokeLocally;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)getOutAppURL:(id*)arg1;
- (void)getOutAppWasLaunched:(BOOL*)arg1;
- (void)getOutPSNs:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; }*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)invokeWithError:(id*)arg1;
- (BOOL)invokeWithXPCConnection:(id)arg1 error:(id*)arg2;
- (void)setInAEParam:(const struct AEKeyDesc { unsigned int x1; struct AEDesc { unsigned int x_2_1_1; struct OpaqueAEDataStorageType {} **x_2_1_2; } x2; }*)arg1;
- (void)setInAnnotations:(const struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg1;
- (void)setInAppParams:(const struct LSApplicationParameters_V1 { long long x1; unsigned int x2; struct FSRef {} *x3; void *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct AEDesc {} *x7; struct __CFArray {} *x8; struct __CFURL {} *x9; struct ProcessSerialNumber {} *x10; }*)arg1;
- (void)setInOptions2:(id)arg1;
- (void)setInPSNCount:(unsigned long long)arg1;
- (void)setInRoleMask:(unsigned int)arg1;
- (void)setInURLs:(struct __CFArray { }*)arg1;

// _LSRemoteOpenCall (PrivateCSUIAInterface)

+ (void)invokeWithXPCConnection:(id)arg1 object:(id)arg2;

@end

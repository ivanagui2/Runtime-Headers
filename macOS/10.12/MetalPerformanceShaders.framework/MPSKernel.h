/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalPerformanceShaders.framework/Versions/A/MetalPerformanceShaders
 */

@interface MPSKernel : NSObject <NSCopying> {
    unsigned long long  _allowedOptions;
    struct MPSDevice { int (**x1)(); struct MPSDevice {} *x2; id x3; struct MPSDeviceFreeList {} x4; struct MTLLibraryNode {} *x5; /* Warning: unhandled array encoding: '[2[2[2@]]][556{MPSPixelCapabilities=b1b1b1b1b1b2b1}]B{MPSGPUInfo=b8b8b8b16b24}[26^{MPSLibrary}]}' */ id x6[2][2][2]; bool x7; struct MPSGPUInfo { unsigned int x_8_1_1 : 8; unsigned int x_8_1_2 : 8; unsigned int x_8_1_3 : 8; unsigned int x_8_1_4 : 16; unsigned int x_8_1_5 : 24; } x8; struct MPSLibrary {} *x9[26]; } * _device;
    NSString * _label;
    struct MPSLibrary { id x1; struct MPSKey_data {} *x2; unsigned int x3; struct { /* ? */ } *x4; } * _library;
    unsigned int  _maxTuningParams;
    unsigned long long  _options;
    unsigned int  _tuningParams;
}

@property (nonatomic, readonly, retain) <MTLDevice> *device;
@property (nonatomic, readwrite) unsigned int kernelTuningParams;
@property (atomic, readwrite, copy) NSString *label;
@property (nonatomic, readonly) unsigned int maxKernelTuningParams;
@property (nonatomic, readwrite) unsigned long long options;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (unsigned int)kernelTuningParams;
- (id)label;
- (unsigned int)maxKernelTuningParams;
- (unsigned long long)options;
- (void)setKernelTuningParams:(unsigned int)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end